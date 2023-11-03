#include "../includes/MateriaSource.hpp"


MateriaSource::MateriaSource(){
	std::cout << "[MateriaSource] Default constructor called." << std::endl;
	for (size_t i = 0; i < 4; i++)
	{
		_inventory[i] = NULL;
	}
}

MateriaSource::MateriaSource(const MateriaSource &obj){
	std::cout << "[MateriaSource] Copy constructor called." << std::endl;
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
}

MateriaSource::~MateriaSource(){
	std::cout << "[MateriaSource] Default destructor called." << std::endl;
	for (size_t i = 0; i < 4; i++)
	{
		delete _inventory[i];
	}
}

MateriaSource& MateriaSource::operator=(const MateriaSource &obj)
{
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


void	MateriaSource::learnMateria(AMateria *m)
{
	for (size_t i = 0; i < 4; i++)
	{
		if (_inventory[i] == NULL)
		{
			_inventory[i] = m;
			return ;
		}
	}
}

AMateria*	MateriaSource::createMateria(std::string const &type)
{
	for (size_t i = 0; i < 4; i++)
	{
		if (_inventory[i] != NULL && _inventory[i]->getType() == type)
		{
			return (_inventory[i]->clone());
		}
	}
	return NULL;
}

AMateria* MateriaSource::getInventory(int idx) const
{
	if (idx >= 0 && idx < 4 && _inventory[idx] != NULL)
	{
		return (_inventory[idx]);
	}
	else
		return NULL;
}