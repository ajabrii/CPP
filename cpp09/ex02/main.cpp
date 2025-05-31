/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajabri <ajabri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 11:58:19 by ajabri            #+#    #+#             */
/*   Updated: 2025/04/23 11:11:36 by ajabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "PmergeMe.hpp"

int main(int ac, char **av)
{
    PmergeMe FordJohnson;
    if (ac < 2) {
        PmergeMe::Logs("Usage: ./PmergeMe [Args...]");
        return (1);
    }
    av++;
    std::deque<int> Deque = FordJohnson.getDeque();
    std::vector<int> Vec = FordJohnson.getVector();
    while (*av)
    {
        if (!FordJohnson.processDataSet(*av)) {
            Deque.clear();
            Vec.clear();
            return (1);
        }
        Deque.push_back(std::atoi(*av));
        Vec.push_back(std::atoi(*av));
        av++;
    }
    // std::cout << "Before: ";
    // for (std::deque<int>::iterator it = Deque.begin(); it != Deque.end(); it++)
    // std::cout << *it << " ";
    // std::cout << std::endl;
    //*deque container sort
    // clock_t startTime = clock();
    // std::deque<int> SDeque = FordJohnson.DequeMergeSort(Deque);
    // clock_t endDeque = clock(); 
    
    //*vector container sort
    // clock_t startTimeVec = clock();
    std::vector<int> Svector = FordJohnson.VectorMergeSort(Vec);
    // clock_t endVec = clock();
    // std::cout << "After: ";
    for (std::vector<int>::iterator it = Svector.begin(); it != Svector.end(); it++)
        std::cout << *it << " ";
    std::cout << std::endl;
    // double Dtime = (double)(endDeque - startTime) * 1e6 / CLOCKS_PER_SEC;
    // double Vtime = (double)(endVec - startTimeVec) * 1e6 / CLOCKS_PER_SEC;
    // std::cout << std::fixed << std::setprecision(6);
    // std::cout << "Time to process a range of `" << Deque.size() << "' elements with std::deque : " << Dtime << " us"<<std::endl;
    // std::cout << "Time to process a range of `" << Vec.size() << "' elements with std::vector : " << Vtime << " us"<<std::endl;
    return (0);
}
//TODO 
//! I need to recode the amlgo without the pairs using only vectors and deques and use Jacobsthal sequence 