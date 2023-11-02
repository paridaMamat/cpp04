#ifndef LIGHTNING_HPP
#define LIGHTNING_HPP

#include<iostream>
#include "AMateria.hpp"
#include "ICharacter.hpp"

class Lightning : public AMateria
{
    private :

    Lightning(Lightning const &obj);
    Lightning    &operator=(Lightning const &obj);

    public :

    Lightning();
    ~Lightning();

    AMateria*    clone(void) const;
    void        use(ICharacter &target);
};
#endif