/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajabri <ajabri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 14:32:46 by ajabri            #+#    #+#             */
/*   Updated: 2025/02/05 14:32:47 by ajabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


# ifndef AForm_HPP
# define AForm_HPP

# include "Bureaucrat.hpp"
# include <iostream>

class Bureaucrat;

class AForm
{
    private:
        const std::string m_Name;
        const int m_GradeToExec;
        const int m_GradeToSign;
        bool m_Signed;
    public:
        AForm();
        AForm(std::string _name_, int _ToExec_, int _ToSign_);
        AForm(const AForm& Other);
        ~AForm();
        AForm& operator=(const AForm& Other);

        static void GradeTooHighException();
        static void GradeTooLowException();
        
        std::string GetName() const;
        int GetGradeToExec() const;
        int GetGradeToSign() const;
        bool GetIsSigned() const;
        void beSigned(Bureaucrat& Employee);
        bool Exp;
        
};

std::ostream& operator<<(std::ostream& Os, const AForm& other);

#endif