#ifndef CAT_HPP
#define CAT_HPP

#include<iostream>
#include"Animal.hpp"

class Cat : public Animal
{
    public :

    Cat();
    Cat(Cat const &obj);
    Cat &operator=(const Cat &obj);
    ~Cat();

    void    makeSound(void) const;
};
#endif