#ifndef ICE_HPP
#define ICE_HPP

#include<iostream>
#include "AMateria.hpp"
#include "ICharacter.hpp"

class Ice : public AMateria
{
    private :
    Ice(Ice const &obj);
    Ice  &operator=(Ice const &obj);

    public :
    Ice();
    ~Ice();

    AMateria*   clone(void) const;
    void        use(ICharacter &target);
};
#endif