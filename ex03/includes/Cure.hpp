#ifndef CURE_HPP
#define CURE_HPP

#include <iostream>
#include "AMateria.hpp"
#include "ICharacter.hpp"

class Cure : public AMateria
{
    private :

    Cure(Cure const &obj);
    Cure &operator=(Cure const &obj);

    public :

    Cure();
    ~Cure();

    AMateria*   clone(void) const;
    void        use(ICharacter &target);
};
#endif