/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajabri <ajabri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 14:37:31 by ajabri            #+#    #+#             */
/*   Updated: 2025/02/05 15:06:57 by ajabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("default", Shrubbery_Exec, Shrubbery_Sign)
{
    std::cout << "ShrubberyCreationForm default constractor is called\n";
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string _name, int _toEx, int _toSign) 
                    : AForm(_name,_toEx, _toSign)
{
    std::cout << "ShrubberyCreationForm constractor is called\n";
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& other) 
            : AForm(other)
{
    std::cout << "ShrubberyCreationForm Copy constractor is called\n";
    *this = other;

}


ShrubberyCreationForm::~ShrubberyCreationForm()
{
    std::cout << "ShrubberyCreationForm ~Deconstractor is called\n";
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& other)
{
    std::cout << "ShrubberyCreationForm Copy assignmemt  is called\n";

    if (this == &other)
        return *this; 
    return *this;
}