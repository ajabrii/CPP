/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kali <kali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 12:13:34 by ajabri            #+#    #+#             */
/*   Updated: 2025/01/11 16:26:55 by kali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Dog.hpp"
# include "Cat.hpp"


int main()
{
    int size = 4;
    Animal* animals[size];

    for (int i = 0; i < size; i++)
    {
        if (i % 2 == 0)
            animals[i] = new Dog();
        else
            animals[i] = new Cat();
    }

    for (int i = 0; i < size; i++) {
        animals[i]->makeSound();
    }

    for (int i = 0; i < size; i++) {
        delete animals[i];
    }

    std::cout << "\n## DEEP COPY VS SHALLOW COPY ##\n\n";

    Cat cat;
    Cat cat1(cat);
    std::cout << cat.getBIdea(0) << std::endl;
    std::cout << cat1.getBIdea(0) << std::endl;
    cat.setBIdea(0, "I am a cat");
    std::cout << cat.getBIdea(0) << std::endl;
    std::cout << cat1.getBIdea(0) << std::endl;
    return 0;
}