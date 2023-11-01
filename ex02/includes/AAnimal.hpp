#ifndef AANIMAL_HPP
#define AANIMAL_HPP

#include <iostream>
#include "Brain.hpp"

class AAnimal
{
    private :
    protected :
    std::string _type;

    public :

    AAnimal();
    AAnimal(std::string type);
    AAnimal(AAnimal const &obj);
    AAnimal &operator=(AAnimal const &obj);
    virtual ~AAnimal();

    virtual void    makeSound(void) const = 0;
    std::string getType(void) const;

};
#endif