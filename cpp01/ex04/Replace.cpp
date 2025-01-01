/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajabri <ajabri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 11:48:22 by ajabri            #+#    #+#             */
/*   Updated: 2024/12/29 10:57:09 by ajabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Replace.hpp"

Replace::Replace(std::string filename, std::string s1, std::string s2) {
    this->filename = filename;
    this->s1 = s1;
    this->s2 = s2;
    this->returnCode = 0;
}
 
void Replace::OpenInFile(std::ifstream &inFile) {
    inFile.open(this->filename.c_str());
    if (!inFile.is_open())
        this->ThrowError("Error: could not open file");
    return;
}

void Replace::ThrowError(std::string error) {
    std::cout << error << std::endl;
    this->returnCode = 1;
    return ;
}

void Replace::OpenOutFile(std::ofstream &outFile) {
    std::string s = this->filename + ".replace";
    outFile.open(s.c_str());
    if (!outFile.is_open())
        this->ThrowError("Error: could not open file");
}

void Replace::ReplaceContent(std::ifstream &inFile, std::ofstream &outFile) {

    this->content.assign((std::istreambuf_iterator<char>(inFile)), std::istreambuf_iterator<char>());
    std::string result;
    std::size_t pos = 0, found;

    if (this->s1.empty()) {
        outFile << this->content;
        this->returnCode = 1;
        return;
    }
    while ((found = this->content.find(this->s1, pos)) != std::string::npos) {
        result.append(this->content, pos, found - pos);
        result.append(this->s2);
        pos = found + this->s1.length();
    }

    result.append(this->content, pos);
    outFile << result;
}
