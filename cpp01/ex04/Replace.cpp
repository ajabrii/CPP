/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajabri <ajabri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 11:48:22 by ajabri            #+#    #+#             */
/*   Updated: 2024/11/11 12:11:40 by ajabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Replace.hpp"

Replace::Replace(std::string filename, std::string s1, std::string s2)
{
    this->filename = filename;
    this->s1 = s1;
    this->s2 = s2;
    this->returnCode = 0;
}
 
void Replace::OpenInFile(std::ifstream &inFile)
{
    inFile.open(this->filename);
    if (!inFile.is_open())
        this->ThrowError("Error: could not open file");
}

void Replace::ThrowError(std::string error)
{
    std::cout << error << std::endl;
    this->returnCode = 1;
    return ;
}

void Replace::OpenOutFile(std::ofstream &outFile)
{
    outFile.open(this->filename + ".replace");
    if (!outFile.is_open())
        this->ThrowError("Error: could not open file");
}

void Replace::ReplaceContent(std::ifstream &inFile, std::ofstream &outFile)
{
    // Read the entire content of the input file into the content string
    this->content.assign((std::istreambuf_iterator<char>(inFile)), std::istreambuf_iterator<char>());

    // Replace all occurrences of s1 with s2 in the content string
    size_t pos = 0;
    while ((pos = this->content.find(this->s1, pos)) != std::string::npos) {
        this->content.replace(pos, this->s1.length(), this->s2);
        pos += this->s2.length();
    }

    // Write the modified content to the output file
    outFile << this->content;
}
Replace::Replace()
{
}
