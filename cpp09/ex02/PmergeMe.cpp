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


std::vector<int> PmergeMe::VectorMergeSort(std::vector<int>& vec) {
    if (vec.size() <= 1)
        return vec;

    std::vector<int> small, big;

    // Step 1: Pair elements and split into small and big
    for (size_t i = 0; i < vec.size(); i += 2) {
        if (i + 1 < vec.size()) {
            if (vec[i] < vec[i + 1]) {
                small.push_back(vec[i]);
                big.push_back(vec[i + 1]);
            } else {
                small.push_back(vec[i + 1]);
                big.push_back(vec[i]);
            }
        } else {
            // Odd element left alone
            big.push_back(vec[i]);
        }
    }

    // Step 2: Recursively sort the bigs
    std::vector<int> sorted_big = VectorMergeSort(big);

    // Step 3: Insert the first small manually
    std::vector<int> result = sorted_big;
    if (!small.empty()) {
        InsertIntoSortedVector(result, small[0]);
    }

    // Step 4: Insert remaining small elements using Jacobsthal order
    int s = small.size();
    std::vector<bool> inserted(s, false);
    inserted[0] = true;

    std::vector<int> jacobsthal = JacobsthalSequence(s);

    for (int i = jacobsthal.size(); i-- > 0;) {
        int idx = jacobsthal[i];
        if (idx < s && !inserted[idx]) {
            InsertIntoSortedVector(result, small[idx]);
            inserted[idx] = true;
        }
    }

    // Step 5: Insert any remaining smalls not in Jacobsthal sequence
    for (int i = 0; i < s; ++i) {
        if (!inserted[i]) {
            InsertIntoSortedVector(result, small[i]);
        }
    }

    return result;
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
