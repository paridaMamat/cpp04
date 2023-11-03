#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include <iostream>
#include "AMateria.hpp"
#include "IMateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"


class MateriaSource :public IMateriaSource
{
    private :

    AMateria *_inventory[4];
    int      _countMaterias;

    public :

    MateriaSource();
    ~MateriaSource();
    MateriaSource(MateriaSource const &obj);
    MateriaSource   &operator=(MateriaSource const &obj);

    void         learnMateria(AMateria *obj);
    AMateria*    createMateria(std::string const &type);
};
#endif