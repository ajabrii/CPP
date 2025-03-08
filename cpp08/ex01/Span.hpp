/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajabri <ajabri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/02 07:14:38 by ajabri            #+#    #+#             */
/*   Updated: 2025/03/05 07:55:50 by ajabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <algorithm>
#include <exception>

# define SPAM_EXCEPTION "Error: Span is full or empty"

class Span
{
    private:
        unsigned int N;
        std::vector<int> numbers;
    public:
        Span();
        Span(unsigned int N);
        Span(const Span &span);
        Span &operator=(const Span &span);
        ~Span();
        void addNumber(int number);
        int shortestSpan();
        int longestSpan();
        class SpanException : public std::exception
        {
            public:
                virtual const char *what() const throw();
        };
};

#endif
