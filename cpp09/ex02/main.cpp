/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajabri <ajabri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 11:58:19 by ajabri            #+#    #+#             */
/*   Updated: 2025/03/16 13:47:09 by ajabri           ###   ########.fr       */
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
    clock_t startTime = clock();
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
    std::cout << "Before: ";
    for (std::deque<int>::iterator it = Deque.begin(); it != Deque.end(); it++)
        std::cout << *it << " ";
    std::cout << std::endl;
    
    std::deque<int> SDeque = FordJohnson.DequeMergeSort(Deque);
    clock_t endDeque = clock(); 
    std::vector<int> Svector = FordJohnson.VectorMergeSort(Vec);
    clock_t endVec = clock();
    std::cout << "After: ";
    for (std::deque<int>::iterator it = SDeque.begin(); it != SDeque.end(); it++)
        std::cout << *it << " ";
    std::cout << std::endl;
    double Dtime = (double)(endDeque - startTime) * 1e6 / CLOCKS_PER_SEC;
    double Vtime = (double)(endVec - startTime) * 1e6 / CLOCKS_PER_SEC;
    std::cout << std::fixed << std::setprecision(6);
    std::cout << "Time to process a range of `" << Deque.size() << "' elements with std::deque : " << Dtime << " us"<<std::endl;
    std::cout << "Time to process a range of `" << Vec.size() << "' elements with std::vector : " << Vtime << " us"<<std::endl;
    return (0);
}

//TODO : I need to fix process time.
// * DONE: the case '+1+5+6+8' is fixed