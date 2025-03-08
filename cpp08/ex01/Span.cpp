/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajabri <ajabri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/02 07:18:43 by ajabri            #+#    #+#             */
/*   Updated: 2025/03/08 08:55:02 by ajabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Span.hpp"

Span::Span() // i think i should set the N to 0
{
    this->N = 0;
}

Span::Span(unsigned int N)
{
    this->N = N;
}

Span::Span(const Span &span)
{
    *this = span;
}

Span &Span::operator=(const Span &span)
{
    this->N = span.N;
    this->numbers = span.numbers;
    return (*this);
}

Span::~Span()
{
}

void Span::addNumber(int number)
{
    if (this->numbers.size() >= this->N)
        throw Span::SpanException();
    this->numbers.push_back(number);
}


int Span::shortestSpan()
{
    if (this->numbers.size() <= 1)
        throw Span::SpanException();
    std::vector <int> tmp = this->numbers;
    std::sort(tmp.begin(), tmp.end());
    int min = tmp[1] - tmp[0];
    for (size_t i = 1; i < tmp.size(); i++)
    {
        if (tmp[i] - tmp[i - 1] < min)
            min = tmp[i] - tmp[i - 1];
    }
    return (min);
}

int Span::longestSpan()
{
    std::vector <int> tmp = this->numbers;
    if (this->numbers.size() <= 1)
        throw Span::SpanException();
    std::sort(tmp.begin(), tmp.end());
    int max = tmp[tmp.size() - 1] - tmp[0];
    return (max);
}

const char *Span::SpanException::what() const throw()
{
    return (SPAM_EXCEPTION);
}

