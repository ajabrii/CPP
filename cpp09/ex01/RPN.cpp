/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajabri <ajabri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 10:26:12 by ajabri            #+#    #+#             */
/*   Updated: 2025/04/22 11:15:30 by ajabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "RPN.hpp"

std::string Rpn::tokens[4] = {"+", "-", "*", "/"};

Rpn::Rpn() : Expression(""), result(0)
{
}

Rpn::Rpn(std::string str) : Expression(str), result(0)
{
}

Rpn::Rpn(const Rpn &rpn)
{
    *this = rpn;
}

Rpn &Rpn::operator=(const Rpn &rpn)
{
    if (this != &rpn)
    {
        this->Expression = rpn.Expression;
        this->result = rpn.result;
    }
    return (*this);
}

Rpn::~Rpn()
{
}

void Rpn::Logs(std::string str)
{
    std::cout << str << std::endl;
}

bool Rpn::isOperator(char c)
{
    for (size_t i = 0; i < 4; i++)
    {
        if (c == tokens[i][0])
            return (true);
    }
    return (false);
}

bool Rpn::processExpression()
{
    Expression = Trim(Expression);
    if(Expression.empty() || Expression.length() == 1 
        || !isOperator(Expression[Expression.length() - 1])) {
        return false;
    }
    for (size_t i = 0; i < Expression.length(); i++) {
        
        if (Expression[i] == ' ' || isOperator(Expression[i]) || Expression[i] == '.') //! check this condition where you check for . is not nessary 
            continue;
        if (isdigit(Expression[i]))
            continue;
        return false;
    }
    return true;
}

std::string Rpn::Trim(std::string& str)
{
      size_t first = 0;
    while (first < str.length() && isspace(str[first])) {
        first++;
    }
    
    size_t last = str.length();
    while (last > first && isspace(str[last - 1])) {
        last--;
    }
    
    return str.substr(first, last - first);
}


void Rpn::calculate(std::string expr)
{
    std::string tmp;
    size_t i = 0;
    int a, b;
    size_t start;

    expr = Trim(expr);
    if (!processExpression()) {
        Logs(RED"Error"RES);
        return;
    }

    while (i < expr.length()) {
        if (isdigit(expr[i]) || (expr[i] == '+' && i + 1 < expr.length() && isdigit(expr[i + 1])) || (expr[i] == '-' && i + 1 < expr.length() && isdigit(expr[i + 1]))) {
            start = i;
            if (expr[i] == '+' || expr[i] == '-') {
                i++;
            }
            while (i < expr.length() && isdigit(expr[i])) {
                i++;
            }
            std::string numStr = expr.substr(start, i - start);
            stack.push(std::atoi(numStr.c_str()));
        }
        else if (isOperator(expr[i])) {
            if (stack.size() < 2) {
                Rpn::Logs(RED "Error: Invalid expression!!" RES);
                return;
            }
            b = stack.top();
            stack.pop();
            a = stack.top();
            stack.pop();
            if (expr[i] == '+')
                stack.push(a + b);
            else if (expr[i] == '-')
                stack.push(a - b);
            else if (expr[i] == '*')
                stack.push(a * b);
            else if (expr[i] == '/') {
                if (b == 0) {
                    Rpn::Logs(RED "Error: Division by zero!" RES);
                    return;
                }
                stack.push(a / b);
            }
            i++;
        }
        else if (isspace(expr[i])) {
            i++;
        }
        else {
            Rpn::Logs(RED "Error: Invalid character!" RES);
            return;
        }
    }
    if (stack.size() == 1) {
        std::cout << stack.top() << std::endl;
    } else {
        Rpn::Logs(RED "Error: Invalid expression!" RES);
    }
}
