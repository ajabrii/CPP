/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajabri <ajabri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 12:13:34 by ajabri            #+#    #+#             */
/*   Updated: 2025/01/11 11:24:07 by ajabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Dog.hpp"
# include "Cat.hpp"


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
std::cout << meta->getType() << " " << std::endl;

i->makeSound(); //will output the cat sound!
j->makeSound();
meta->makeSound();

return 0;
}