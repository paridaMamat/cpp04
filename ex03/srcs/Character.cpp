#include "../includes/Character.hpp"

/*=============================== Constructors ===============================*/

Character::Character() : _name("unamed"){
	std::cout << "[Character] Default constructor called." << std::endl;
	for (size_t i = 0; i < 4; i++)
	{
		_inventory[i] = NULL;
	}
	std::cout << getName() << " was created." << std::endl;
}

Character::Character(const std::string name) : _name(name){
	std::cout << "[Character] overload constructor called." << std::endl;
	for (size_t i = 0; i < 4; i++)
	{
		_inventory[i] = NULL;
	}
	std::cout << getName() << " was created." << std::endl;
}

Character::Character(const Character &obj){
	std::cout << "[Character] Copy constructor called." << std::endl;
	for (size_t i = 0; i < 4; i++)
	{
		delete _inventory[i];
		_inventory[i] = NULL;
		AMateria* tmp = obj.getInventory(i); 
		if (tmp != NULL)
		{
			_inventory[i] = tmp->clone();
		}
	}
	_name = obj.getName();
	std::cout << getName() << " was copied." << std::endl;
}

Character::~Character(){
	std::cout << "[Character] Default destructor called." << std::endl;
	for (size_t i = 0; i < 4; i++)
	{
		delete _inventory[i];
	}
	std::cout << getName() << " was destroyed." << std::endl;
}

/*================================ Overloads =================================*/

Character& Character::operator=(const Character &obj)
{
	_name = obj._name;
	for (size_t i = 0; i < 4; i++)
	{
		delete _inventory[i];
		_inventory[i] = NULL;
		AMateria* tmp = obj.getInventory(i); 
		if (tmp != NULL)
		{
			_inventory[i] = tmp->clone();
		}
	}
	return (*this);
}

/*================================= Methods ==================================*/

void	Character::equip(AMateria* m)
{
	for (size_t i = 0; i < 4; i++)
	{
		if (_inventory[i] == NULL && m != NULL)
		{
			_inventory[i] = m;
			return ;
		}
	}
}

void	Character::unequip(int idx)
{
	if (idx >= 0 && idx < 4 && _inventory[idx] != NULL)
		_inventory[idx] = NULL;
}

void	Character::use(int idx, ICharacter &target)
{
	if (idx >= 0 && idx < 4 && _inventory[idx] != NULL)
	{
		_inventory[idx]->use(target);
	}
}

AMateria* Character::getInventory(int idx) const
{
	if (idx >= 0 && idx < 4 && _inventory[idx] != NULL)
	{
		return (_inventory[idx]);
	}
	else
		return NULL;
}

std::string const&	Character::getName( void ) const{
	return _name;
}