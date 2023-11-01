#ifndef MATERIALIGHTNING_HPP
#define MATERIALIGHTNING_HPP

#include<iostream>
#include "AMateria.hpp"
#include "ICharacter.hpp"

class MateriaLightning : public AMateria
{
    private :

    MateriaLightning(MateriaLightning const &obj);
    MateriaLightning    &operator=(MateriaLightning const &obj);

    public :

    MateriaLightning();
    ~MateriaLightning();

    AMateria*    clone(void) const;
    void        use(ICharacter &target);
};
#endif