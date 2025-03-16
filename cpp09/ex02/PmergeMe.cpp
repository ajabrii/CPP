/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajabri <ajabri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 11:56:59 by ajabri            #+#    #+#             */
/*   Updated: 2025/03/16 11:29:45 by ajabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "PmergeMe.hpp"

PmergeMe::PmergeMe()
{
}

PmergeMe::PmergeMe(const PmergeMe &src)
{
    *this = src;
}

PmergeMe &PmergeMe::operator=(const PmergeMe &src)
{
    if (this != &src)
    {
        this->m_deque = src.m_deque;
        this->m_vector = src.m_vector;
    }
    return (*this);
}

PmergeMe::~PmergeMe()
{
}

void PmergeMe::Logs(std::string str)
{
    std::cout << str << std::endl;
}

std::deque<int> PmergeMe::getDeque() const
{
    return (m_deque);
}

std::vector<int> PmergeMe::getVector() const
{
    return (m_vector);
}

bool PmergeMe::processDataSet(std::string av)
{
   
   size_t i = 0;
   if (av.empty()) {
    Logs("Error: Invalid input");
    return false;
   }
   for (size_t x = 0; x < av.length(); x++) {
       if (isspace(av[x])) {
           Logs("Error: Invalid input");
           return (false);
       }
   }  while (av[i])    {
        if (av[i] == '+' && i == 0) {
            i++;
            if (!isdigit(av[i])) {
                Logs("Error: Invalid input");
                return (false);
            }
        } else  if (!isdigit(av[i])) {
            Logs("Error: Invalid input");
            return (false);
        }
        i++;
   } 
    return (true);
}

std::deque<int> PmergeMe::DequeMergeSort(std::deque<int> &deque)
{
    if (deque.size() <= 1)
        return deque;
    std::deque<std::pair<int, int> > pairs;
    for (size_t i = 0; i < deque.size(); i += 2) {
        if (i + 1 < deque.size())
            pairs.push_back(std::make_pair(std::min(deque[i], deque[i + 1]), std::max(deque[i], deque[i + 1])));
        else
            pairs.push_back(std::make_pair(deque[i], -1));
    }
    std::deque<int> small_numbers;
    for (size_t i = 0; i < pairs.size(); i++)
        small_numbers.push_back(pairs[i].first);
    small_numbers = DequeMergeSort(small_numbers);
    std::deque<int> sorted_deque = small_numbers;
    for (size_t i = 0; i < pairs.size(); i++) {
        if (pairs[i].second != -1)
            InsertIntoSortedDeque(sorted_deque, pairs[i].second);
    }

    return sorted_deque;
}

void PmergeMe::InsertIntoSortedDeque(std::deque<int> &sorted_deque, int value)
{
    std::deque<int>::iterator it = sorted_deque.begin();
    while (it != sorted_deque.end() && *it < value)
        ++it;
    sorted_deque.insert(it, value);
}

void PmergeMe::InsertIntoSortedVector(std::vector<int> &sorted_vector, int value)
{
    std::vector<int>::iterator it = sorted_vector.begin();
    while (it != sorted_vector.end() && *it < value)
        ++it;
    sorted_vector.insert(it, value);
}

std::vector<int> PmergeMe::VectorMergeSort(std::vector<int> &vector)
{
    if (vector.size() <= 1)
        return vector;
    std::vector<std::pair<int, int> > pairs;
    for (size_t i = 0; i < vector.size(); i += 2) {
        if (i + 1 < vector.size())
            pairs.push_back(std::make_pair(std::min(vector[i], vector[i + 1]), std::max(vector[i], vector[i + 1])));
        else
            pairs.push_back(std::make_pair(vector[i], -1));
    }
    std::vector<int> small_numbers;
    for (size_t i = 0; i < pairs.size(); i++)
        small_numbers.push_back(pairs[i].first);
    small_numbers = VectorMergeSort(small_numbers);
    std::vector<int> sorted_vector = small_numbers;
    for (size_t i = 0; i < pairs.size(); i++) {
        if (pairs[i].second != -1)
            InsertIntoSortedVector(sorted_vector, pairs[i].second);
    }

    return sorted_vector;
}