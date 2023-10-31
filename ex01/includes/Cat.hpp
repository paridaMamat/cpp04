#ifndef CAT_HPP
#define CAT_HPP

#include<iostream>
#include"Animal.hpp"
#include"Brain.hpp"

class Cat : public Animal
{
    private :

    Brain * _brain;

    public :

    Cat();
    Cat(Cat const &obj);
    Cat &operator=(const Cat &obj);
    ~Cat();

    void    makeSound(void) const;

    void    setIdea(std::string const &idea, int const index);
    std::string   getIdea(int const index) const;
};
#endif