#ifndef ICE_HPP
#define ICE_HPP

#include<iostream>
#include "AMateria.hpp"
#include "ICharacter.hpp"

class Ice : public AMateria
{
    public :
    Ice();
    Ice(Ice const &obj);
    Ice  &operator=(Ice const &obj);
    ~Ice();

    AMateria*   clone(void) const;
    void        use(ICharacter &target);
};
#endif