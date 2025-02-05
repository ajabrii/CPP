/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajabri <ajabri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 10:20:40 by ajabri            #+#    #+#             */
/*   Updated: 2025/02/05 12:44:51 by ajabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Form.hpp"
//* <De/Constractors>
Form::Form() : m_Name("Default"), m_GradeToExec(HIGHEST), m_GradeToSign(HIGHEST)
{
    m_Signed = false;
    Exp = false;
    std::cout << "Default Form constractor is called\n";
}

Form::Form(std::string _name_, int _ToExec_, int _ToSign_) 
    : m_Name(_name_), m_GradeToExec(_ToExec_), m_GradeToSign(_ToSign_)
{
    std::cout << "Form constractor is called\n";
    m_Signed = false;
    Exp = false;
    try
    {
        if (m_GradeToExec > LOWEST || m_GradeToSign > LOWEST)
            Form::GradeTooLowException();
        else if (m_GradeToExec < HIGHEST || m_GradeToSign < HIGHEST)
            Form::GradeTooHighException();
    }
    catch(const char* exp)
    {
        Exp = true;
        std::cerr << exp << '\n';
    }
    
}

Form::Form(const Form& Other) 
    : m_Name(Other.GetName()), m_GradeToExec(Other.GetGradeToExec()), m_GradeToSign(Other.GetGradeToSign())
{
    std::cout << "Form Copy constractor is called\n";
    *this = Other;
}

Form::~Form()
{
    std::cout << "Form ~Deconstractor is called\n";
}
//? <De/Constractors>

//* <overLoading>
Form& Form::operator=(const Form& Other)
{
    if (this == &Other)
        return *this;
    this->m_Signed = Other.GetIsSigned();
    this->Exp = Other.Exp;
    return *this;
}

std::ostream& operator<<(std::ostream& Os, const Form& other)
{
    Os << other.GetName() << ", Form Grade is `" 
        << other.GetGradeToSign() 
        << "', it execution Grade is `" << other.GetGradeToExec()
        << "' and it signeture is ->[" << other.GetIsSigned() << "]" << std::endl;
    return Os;
}

//? <overLoading>

//* <getters>
std::string Form::GetName() const
{
    return m_Name;
}

int Form::GetGradeToExec() const
{
    return m_GradeToExec;
}

int Form::GetGradeToSign() const
{
    return m_GradeToSign;
}

bool Form::GetIsSigned() const
{
    return m_Signed;
}
//? </getters>

//* <Tools>
void Form::beSigned(Bureaucrat& Employee)
{
    try
    {
        if (Employee.GetGrade() <= this->GetGradeToSign() && !Exp)
            this->m_Signed = true;
        else
            Form::GradeTooLowException(); //! I think I should change this to Form::
    }
    catch(const char* exp)
    {
        std::cerr << exp << '\n';
    }
    
}

void Form::GradeTooHighException()
{
    throw TOO_HIGH_EXEPTION;
}

void Form::GradeTooLowException()
{
    throw TOO_LOW_EXEPTION;
}