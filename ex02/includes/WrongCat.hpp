#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include<iostream>
#include"WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
    public :

    WrongCat();
    WrongCat(WrongCat const &obj);
    WrongCat &operator=(const WrongCat &obj);
    ~WrongCat();

    void    makeSound(void) const;
};
#endif