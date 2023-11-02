#ifndef FIRE_HPP
#define FIRE_HPP

#include <iostream>
#include "AMateria.hpp"
#include "ICharacter.hpp"

class Fire : public AMateria
{
    private :

    Fire(Fire const &obj);
    Fire &operator=(Fire const &obj);

    public :

    Fire();
    ~Fire();

    AMateria*    clone(void) const;
    void         use(ICharacter &target);
};
#endif