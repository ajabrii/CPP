/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajabri <ajabri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 14:46:38 by ajabri            #+#    #+#             */
/*   Updated: 2025/02/05 14:47:13 by ajabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



# include "AForm.hpp"
//* <De/Constractors>
AForm::AForm() : m_Name("Default"), m_GradeToExec(HIGHEST), m_GradeToSign(HIGHEST)
{
    m_Signed = false;
    Exp = false;
    std::cout << "Default AForm constractor is called\n";
}

AForm::AForm(std::string _name_, int _ToExec_, int _ToSign_) 
    : m_Name(_name_), m_GradeToExec(_ToExec_), m_GradeToSign(_ToSign_)
{
    std::cout << "AForm constractor is called\n";
    m_Signed = false;
    Exp = false;
    try
    {
        if (m_GradeToExec > LOWEST || m_GradeToSign > LOWEST)
            AForm::GradeTooLowException();
        else if (m_GradeToExec < HIGHEST || m_GradeToSign < HIGHEST)
            AForm::GradeTooHighException();
    }
    catch(const char* exp)
    {
        Exp = true;
        std::cerr << exp << '\n';
    }
    
}

AForm::AForm(const AForm& Other) 
    : m_Name(Other.GetName()), m_GradeToExec(Other.GetGradeToExec()), m_GradeToSign(Other.GetGradeToSign())
{
    std::cout << "AForm Copy constractor is called\n";
    *this = Other;
}

AForm::~AForm()
{
    std::cout << "AForm ~Deconstractor is called\n";
}
//? <De/Constractors>

//* <overLoading>
AForm& AForm::operator=(const AForm& Other)
{
    if (this == &Other)
        return *this;
    this->m_Signed = Other.GetIsSigned();
    this->Exp = Other.Exp;
    return *this;
}

std::ostream& operator<<(std::ostream& Os, const AForm& other)
{
    Os << other.GetName() << ", AForm Grade is `" 
        << other.GetGradeToSign() 
        << "', it execution Grade is `" << other.GetGradeToExec()
        << "' and it signeture is ->[" << other.GetIsSigned() << "]" << std::endl;
    return Os;
}

//? <overLoading>

//* <getters>
std::string AForm::GetName() const
{
    return m_Name;
}

int AForm::GetGradeToExec() const
{
    return m_GradeToExec;
}

int AForm::GetGradeToSign() const
{
    return m_GradeToSign;
}

bool AForm::GetIsSigned() const
{
    return m_Signed;
}
//? </getters>

//* <Tools>
void AForm::beSigned(Bureaucrat& Employee)
{
    try
    {
        if (Employee.GetGrade() <= this->GetGradeToSign() && !Exp)
            this->m_Signed = true;
        else
            AForm::GradeTooLowException(); //! I think I should change this to AForm::
    }
    catch(const char* exp)
    {
        std::cerr << exp << '\n';
    }
    
}

void AForm::GradeTooHighException()
{
    throw TOO_HIGH_EXEPTION;
}

void AForm::GradeTooLowException()
{
    throw TOO_LOW_EXEPTION;
}