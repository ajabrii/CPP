/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajabri <ajabri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 15:29:04 by ajabri            #+#    #+#             */
/*   Updated: 2025/02/05 14:53:00 by ajabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : m_Name("Default")
{
    std::cout<< "Bureaucrat's Default constractor is called\n";
    m_Grade = HIGHEST;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : m_Name(name)
{
    std::cout<< "Bureaucrat's constractor is called\n";
    try
    {
        if (grade < HIGHEST)
            Bureaucrat::GradeTooHighException();
        else if (grade > LOWEST)
            Bureaucrat::GradeTooLowException();
        else
            m_Grade = grade;
    }
    catch(const char* exp)
    {
        std::cerr <<"Exeption catched " << exp << '\n';
    }
    
}

Bureaucrat::Bureaucrat(const Bureaucrat& other) : m_Name(other.GetName())
{
    std::cout<< "Bureaucrat's copy constractor is called\n";
     *this = other;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& other)
{
     if (this == &other)
        return *this;
    this->m_Grade = other.GetGrade();
    return (*this);
}

std::ostream& operator<<(std::ostream& Os,const Bureaucrat& others)
{
    Os << others.GetName() << ", bureaucrat grade " << others.GetGrade() << std::endl;
    return Os;
}


Bureaucrat::~Bureaucrat()
{
    std::cout<< "Bureaucrat's ~deconstractor is called\n";
}



void Bureaucrat::GradeTooHighException()
{
    throw TOO_HIGH_EXEPTION;
}

void Bureaucrat::GradeTooLowException()
{
    throw TOO_LOW_EXEPTION;
}


//* Getters & Setters
int Bureaucrat::GetGrade() const
{
    return m_Grade;
}

std::string Bureaucrat::GetName() const
{
    return m_Name;
}

void Bureaucrat::SetGrade(int _grade_)
{
    m_Grade = _grade_;
}

//*Icreament/decreament

void Bureaucrat::Upgrade()
{
    try
    {
        m_Grade--;
        if (m_Grade < HIGHEST)
           GradeTooHighException();
    }
    catch(const char* exp)
    {
        std::cerr <<"Exeption catched " << exp << '\n';
    }
       
}

void Bureaucrat::DownGrade()
{
    try
    {
        m_Grade++;
        if (m_Grade > LOWEST)
           GradeTooLowException();
    }
    catch(const char* exp)
    {
        std::cerr <<"Exeption catched " << exp << '\n';
    }
}

void Bureaucrat::signForm(AForm& form) const
{
    try
    {
        if (form.Exp)
            throw NOT_SIGNED;
        if (m_Grade <= form.GetGradeToSign() && form.GetIsSigned() == true)
            std::cout << this->GetName() << ", Signed " 
                        << form.GetName() << std::endl;
        else
            throw NOT_SIGNED;
    }
    catch(const char* exp)
    {
        std::cerr << this->GetName() << exp 
                    << form.GetName() << " because " 
                    << TOO_LOW_EXEPTION <<  " or " 
                    << NOT_SIGNED_EXEP <<std::endl;
    }
}