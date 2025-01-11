/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kali <kali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 12:13:34 by ajabri            #+#    #+#             */
/*   Updated: 2025/01/11 15:40:39 by kali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Dog.hpp"
# include "Cat.hpp"
# include "WrongCat.hpp"


// int main()
// {
//     Animal an;
//     Dog dog;

//     an.makeSound();
// }

int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound(); //will output the cat sound!
    j->makeSound();
    meta->makeSound();
    delete i;
    delete j;
    delete meta;

    std::cout << std::endl << "---------- THE WRONG ANIMAL TEST ----------" << std::endl << std::endl;
    const WrongAnimal* wrong = new WrongAnimal();
    const WrongAnimal* cat = new WrongCat();
    std::cout << cat->getType() << std::endl;
    wrong->makeSound();
    cat->makeSound();
    delete wrong;
    delete cat;
    return 0;
}