#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <iostream>
#include "ICharacter.hpp"
#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

class Character : public ICharacter
{
    private :

    std::string _name;
    AMateria    *_inventory[4];
    // int         _countMaterias;
    // AMateria    *_throwed;
    

    public :
    Character();
    Character(const std::string name);
    Character(Character const &obj);
    ~Character();
    Character &operator=(Character const &obj);
    
	virtual std::string const&  getName(void) const;
    virtual void                equip(AMateria* m);
    virtual void                unequip(int idx);
    virtual void                use(int idx, ICharacter &target);
    AMateria* getInventory(int idx) const;

};
#endif