/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajabri <ajabri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 10:05:47 by ajabri            #+#    #+#             */
/*   Updated: 2025/02/05 12:46:15 by ajabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef FORM_HPP
# define FORM_HPP

# include "Bureaucrat.hpp"
# include <iostream>

class Bureaucrat;

class Form
{
    private:
        const std::string m_Name;
        const int m_GradeToExec;
        const int m_GradeToSign;
        bool m_Signed;
    public:
        Form();
        Form(std::string _name_, int _ToExec_, int _ToSign_);
        Form(const Form& Other);
        ~Form();
        Form& operator=(const Form& Other);

        static void GradeTooHighException();
        static void GradeTooLowException();
        
        std::string GetName() const;
        int GetGradeToExec() const;
        int GetGradeToSign() const;
        bool GetIsSigned() const;
        void beSigned(Bureaucrat& Employee);
        bool Exp;
        
};

std::ostream& operator<<(std::ostream& Os, const Form& other);

#endif