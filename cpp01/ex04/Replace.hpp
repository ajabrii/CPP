/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajabri <ajabri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 14:11:25 by ajabri            #+#    #+#             */
/*   Updated: 2024/11/11 12:07:38 by ajabri           ###   ########.fr       */
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
        // int        pos;
        // int        len;
    public:
        Replace();
        Replace(std::string filename, std::string s1, std::string s2);
        void ThrowError(std::string error);
        void OpenInFile(std::ifstream &inFile);
        void OpenOutFile(std::ofstream &outFile);
        void ReplaceContent(std::ifstream &inFile, std::ofstream &outFile);
        int     returnCode;

};

# endif