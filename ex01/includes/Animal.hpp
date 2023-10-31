#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>


class Animal
{
    private :
    protected :
    std::string _type;

    public :

    Animal();
    Animal(std::string type);
    Animal(Animal const &obj);
    Animal &operator=(Animal const &obj);
    virtual ~Animal();

    virtual void    makeSound(void) const;
    std::string getType(void) const;

};
#endif