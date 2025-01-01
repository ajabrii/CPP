/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajabri <ajabri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 14:11:25 by ajabri            #+#    #+#             */
/*   Updated: 2024/12/29 10:57:14 by ajabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


# ifndef REPLACE_HPP
# define REPLACE_HPP

# include <iostream>
# include <fstream>
# include <string>


class Replace
{
    private:
        std::string filename;
        std::string s1;
        std::string s2;
        std::string content;
    public:
        Replace(std::string filename, std::string s1, std::string s2);
        void ThrowError(std::string error);
        void OpenInFile(std::ifstream &inFile);
        void OpenOutFile(std::ofstream &outFile);
        void ReplaceContent(std::ifstream &inFile, std::ofstream &outFile);
        int     returnCode;

};

# endif