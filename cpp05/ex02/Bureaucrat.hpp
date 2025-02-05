/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajabri <ajabri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 15:18:54 by ajabri            #+#    #+#             */
/*   Updated: 2025/02/05 14:52:36 by ajabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

# include "AForm.hpp"
# include <iostream>

#define TOO_HIGH_EXEPTION "\033[1;31mGrade is Too High\033[0m"
#define TOO_LOW_EXEPTION "\033[1;31mGrade is Too Low\033[0m"
#define HIGHEST 1
#define LOWEST 150
#define NOT_SIGNED " couldn’t sign "
#define NOT_SIGNED_EXEP " \033[1;31mForm Grade out of range\033[0m"


class AForm;

class Bureaucrat
{
    private:
        const std::string m_Name;
        int m_Grade;
    public:
        Bureaucrat();
        Bureaucrat(std::string name, int grade);
        Bureaucrat(const Bureaucrat& other);
        ~Bureaucrat();
        Bureaucrat& operator=(const Bureaucrat& other);
        //?exeptions
        static void GradeTooHighException();
        static void GradeTooLowException();
        //?getters && setters
        std::string GetName() const;
        int GetGrade() const;
        void SetGrade(int _grade_);
        //?Icreament/decreament
        void Upgrade();
        void DownGrade();
        void signForm(AForm& form) const;
        
        
};

std::ostream& operator<<(std::ostream& Os,const Bureaucrat& others);

#endif