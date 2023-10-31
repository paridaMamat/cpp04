#ifndef DOG_HPP
#define DOG_HPP

#include<iostream>
#include"Animal.hpp"
#include"Brain.hpp"

class Dog : public Animal
{
    private :

    Brain*  _brain;
    
    public :

    Dog();
    Dog(Dog const &obj);
    Dog &operator=(const Dog &obj);
    ~Dog();

    void    makeSound(void) const;

    void    setIdea(std::string const &idea, int const index);
    std::string   getIdea(int const index) const;
};
#endif