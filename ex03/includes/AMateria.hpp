#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
#include "ICharacter.hpp"

class AMateria
{
    private :
    protected :

    AMateria(std::string const type);
    AMateria    &operator=(AMateria const &obj) ;
    std::string _type;

    public :

    AMateria();
    AMateria(AMateria const &onj);
    virtual ~AMateria();

    std::string  const   &getType(void) const;

    virtual AMateria*    clone(void) const = 0;
    virtual void        use(ICharacter &target);

};
#endif

