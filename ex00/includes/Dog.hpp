#ifndef DOG_HPP
#define DOG_HPP

#include<iostream>
#include"Animal.hpp"

class Dog : public Animal
{
    public :

    Dog();
    Dog(Dog const &obj);
    Dog &operator=(const Dog &obj);
    ~Dog();

    void    makeSound(void) const;
};
#endif