/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajabri <ajabri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 11:54:33 by ajabri            #+#    #+#             */
/*   Updated: 2025/03/16 11:20:58 by ajabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <iostream>
# include <string>
# include <vector>
# include <algorithm>
# include <deque>
# include <ctime>
# include <iomanip>

class PmergeMe
{
    private:
        std::deque<int> m_deque;
        std::vector<int> m_vector;
    public:
        PmergeMe();
        PmergeMe(const PmergeMe &src);
        PmergeMe &operator=(const PmergeMe &src);
        ~PmergeMe();
        static void Logs(std::string str);
        bool processDataSet(std::string av);
        std::deque<int> getDeque() const;
        std::vector<int> getVector() const;
        std::deque<int> DequeMergeSort(std::deque<int> &deque);
        void InsertIntoSortedDeque(std::deque<int> &sorted_deque, int value);
        void InsertIntoSortedVector(std::vector<int> &sorted_vector, int value);
        std::vector<int> VectorMergeSort(std::vector<int> &vector);
};


# endif