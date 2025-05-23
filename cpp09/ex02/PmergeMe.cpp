/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajabri <ajabri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 11:56:59 by ajabri            #+#    #+#             */
/*   Updated: 2025/04/23 11:44:45 by ajabri           ###   ########.fr       */
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
    Logs(RED"Error: Invalid input"RES);
    return false;
   }
   for (size_t x = 0; x < av.length(); x++) {
       if (isspace(av[x])) {
           Logs(RED"Error: Invalid input"RES);
           return (false);
       }
   }  while (av[i])    {
        if (av[i] == '+' && i == 0) {
            i++;
            if (!isdigit(av[i])) {
                Logs(RED"Error: Invalid input"RES);
                return (false);
            }
        } else  if (!isdigit(av[i])) {
            Logs(RED"Error: Invalid input"RES);
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

// std::vector<int> PmergeMe::VectorMergeSort(std::vector<int> &vector)
// {
//     if (vector.size() <= 1)
//         return vector;
//     std::vector<std::pair<int, int> > pairs;
//     for (size_t i = 0; i < vector.size(); i += 2) {
//         if (i + 1 < vector.size())
//             pairs.push_back(std::make_pair(std::min(vector[i], vector[i + 1]), std::max(vector[i], vector[i + 1])));
//         else
//             pairs.push_back(std::make_pair(vector[i], -1));
//     }
//     std::vector<int> small_numbers;
//     for (size_t i = 0; i < pairs.size(); i++)
//         small_numbers.push_back(pairs[i].first);
//     small_numbers = VectorMergeSort(small_numbers);
//     std::vector<int> sorted_vector = small_numbers;
//     for (size_t i = 0; i < pairs.size(); i++) {
//         if (pairs[i].second != -1)
//             InsertIntoSortedVector(sorted_vector, pairs[i].second);
//     }
//     return sorted_vector;
// }

std::vector<int> PmergeMe::VectorMergeSort(std::vector<int> &vector)
{
    std::vector<int> big;
    std::vector<int> small;
    if (vector.size() <= 1)
        return vector;
    for (size_t i = 0; i < vector.size(); i += 2) {
        if (i + 1 < vector.size())
            small.push_back(std::min(vector[i], vector[i + 1]));
        if (i + 1 < vector.size())
            big.push_back(std::max(vector[i], vector[i + 1]));
        else
            big.push_back(vector[i]);
    }
    std::vector<int> sorted_big;
    // big = VectorMergeSort(big);
    // sorted_big = big;
    for (size_t i = 0; i < big.size(); i++)
        InsertIntoSortedVector(sorted_big, big[i]);
    std::cout << "Big: ";
    for (size_t i = 0; i < sorted_big.size(); i++) {
       std::cout << sorted_big[i] << ", ";
    }
    std::cout << std::endl;
    std::cout << "Small: ";
    for (size_t i = 0; i < small.size(); i++) {
       std::cout << small[i] << ", ";
    }
    std::cout << std::endl;
    // std::vector<int> jacobsthal = JacobsthalSequence(big.size());
    return sorted_big;
}

std::vector<int> PmergeMe::JacobsthalSequence(int n)
{
    // J(n) = J(n - 1) + 2 * J(n - 2)
    int j0 = 0;
    int j1 = 1;
    std::vector<int> sequence;
    // sequence.push_back(j0);
    // sequence.push_back(j1);
    for (int i = 2; i < n; i++)
    {
        int jn = j1 + 2 * j0;
        sequence.push_back(jn);
        j0 = j1;
        j1 = jn;
    }
    std::cout << "Jacobsthal Sequence: ";
    for (size_t i = 0; i < sequence.size(); i++)
    {
       std::cout << sequence[i] << ", ";
    }
    std::cout << std::endl;
    return sequence;
}
