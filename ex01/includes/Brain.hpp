#ifndef BRAIN_HPP
#define BRAIN_HPP
#include<iostream>

class Brain
{
    private :

    std::string _ideas[100];

    public :

    Brain();
    Brain(Brain const &obj);
    Brain   &operator=(Brain const &obj);
    ~Brain();

    void    setIdea(std::string const &idea, int const index);
    std::string   getIdea(int const index) const;
};

#endif 