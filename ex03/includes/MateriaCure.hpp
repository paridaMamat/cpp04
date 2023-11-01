#ifndef MATERIACURE_HPP
#define MATERIACURE_HPP

#include <iostream>
#include "AMateria.hpp"
#include "ICharacter.hpp"

class MateriaCure : public AMateria
{
    private :

    MateriaCure(MateriaCure const &obj);
    MateriaCure &operator=(MateriaCure const &obj);

    public :

    MateriaCure();
    ~MateriaCure();

    AMateria*   clone(void) const;
    void        use(ICharacter &target);
};
#endif