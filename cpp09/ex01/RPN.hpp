/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajabri <ajabri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 10:21:49 by ajabri            #+#    #+#             */
/*   Updated: 2025/03/16 11:56:55 by ajabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef RPN_HPP
# define RPN_HPP

# include <iostream>
# include <string>
# include <stack>
#include <cstdlib>


#define RED "\033[1;31m"
#define GREEN "\033[1;32m"
#define YELLOW "\033[1;33m"
#define RES "\033[0m"

class Rpn
{
    private:
        std::stack<int> stack;
        std::string Expression;
        static std::string tokens[4];
        double result;
    public:
    Rpn();
    Rpn(std::string str);
    Rpn(const Rpn &rpn);
    Rpn &operator=(const Rpn &rpn);
    ~Rpn();
    static void Logs(std::string str);
    static bool isOperator(char c);
    bool processExpression();
    void calculate(std::string expr);
    std::string Trim(std::string& str);
    
    
};



#endif