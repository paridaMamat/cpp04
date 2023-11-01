#include "../includes/MateriaFire.hpp"

/*=============================== Constructors ===============================*/

MateriaFire::MateriaFire() : AMateria("fire"){
	std::cout << "[MateriaFire] Default constructor called." << std::endl;
	std::cout << getType() << " was created." << std::endl;
}

MateriaFire::MateriaFire(MateriaFire const &obj) : AMateria(obj){
	std::cout << "[MateriaFire] Copy constructor called." << std::endl;
	*this = obj;
	std::cout << getType() << " was copied." << std::endl;
}

MateriaFire::~MateriaFire(){
	std::cout << "[MateriaFire] Default destructor called." << std::endl;
}

/*================================ Overloads =================================*/

MateriaFire &MateriaFire::operator=(MateriaFire const &obj)
{
	_type = obj._type;
	return (*this);
}

/*================================= Methods ==================================*/

AMateria*	MateriaFire::clone( void ) const
{
	AMateria*	newMateria = new MateriaFire;

	return (newMateria);
}

void	MateriaFire::use(ICharacter& target)
{
	std::cout << "* shoots an fire bolt at " << target.getName() << " *" << std::endl;
}