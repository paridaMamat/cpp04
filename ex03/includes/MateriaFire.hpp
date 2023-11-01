#ifndef MATERIAFIRE_HPP
#define MATERIAFIRE_HPP

#include <iostream>
#include "AMateria.hpp"
#include "ICharacter.hpp"

class MateriaFire : public AMateria
{
    private :

    MateriaFire(MateriaFire const &obj);
    MateriaFire &operator=(MateriaFire const &obj);

    public :

    MateriaFire();
    ~MateriaFire();

    AMateria*    clone(void) const;
    void         use(ICharacter &target);
};
#endif