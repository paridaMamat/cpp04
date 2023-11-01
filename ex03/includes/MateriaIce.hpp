#ifndef MATERIAICE_HPP
#define MATERIAICE_HPP

#include<iostream>
#include "AMateria.hpp"
#include "ICharacter.hpp"

class MateriaIce : public AMateria
{
    private :
    MateriaIce(MateriaIce const &obj);
    MateriaIce  &operator=(MateriaIce const &obj);

    public :
    MateriaIce();
    ~MateriaIce();

    AMateria*   clone(void) const;
    void        use(ICharacter &target);
};
#endif