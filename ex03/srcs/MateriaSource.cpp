#include "../includes/MateriaSource.hpp"


MateriaSource::MateriaSource() : IMateriaSource(), _countMaterias(0){
	std::cout << "[MateriaSource] Default constructor called." << std::endl;
	_inventory[0] = NULL;
	_inventory[1] = NULL;
	_inventory[2] = NULL;
	_inventory[3] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource &src) : IMateriaSource(), _countMaterias(0){
	std::cout << "[MateriaSource] Copy constructor called." << std::endl;
	*this = src;
}

MateriaSource::~MateriaSource(){
	std::cout << "[MateriaSource] Default destructor called." << std::endl;
	for (int i = 0; i < _countMaterias; i++)
		delete _inventory[i];
}


MateriaSource& MateriaSource::operator=(const MateriaSource &src)
{
	for (int i = 0; i < _countMaterias; i++)
	{
		delete _inventory[i];
		if (src._inventory[i]->getType() == "ice")
			_inventory[i] = new Ice;
		else if (src._inventory[i]->getType() == "cure")
			_inventory[i] = new Cure;
	}

	return (*this);
}


void	MateriaSource::learnMateria(AMateria *obj)
{
	if (_countMaterias < 4)
	{
		_inventory[_countMaterias] = obj;
		_countMaterias++;
	}
	else
		delete obj;
}

AMateria*	MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; _countMaterias <= 4 and i < _countMaterias; i++)
	{
		if (type == _inventory[i]->getType())
		{
			if (_inventory[i]->getType() == "ice")
				return (new Ice);
			else if (_inventory[i]->getType() == "cure")
				return (new Cure);
		}
	}
	return (0);
}