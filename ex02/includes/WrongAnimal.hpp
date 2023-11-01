#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include<iostream>

class WrongAnimal
{
    private :
    protected :
    std::string _type;

    public :

    WrongAnimal();
    WrongAnimal(std::string type);
    WrongAnimal(WrongAnimal const &obj);
    WrongAnimal &operator=(WrongAnimal const &obj);
    virtual ~WrongAnimal();

    void    makeSound(void) const;
    std::string getType(void) const;
};
#endif