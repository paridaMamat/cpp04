#include "../includes/Ice.hpp"



Ice::Ice() : AMateria("ice"){
	std::cout << "[Ice] Default constructor called." << std::endl;
	std::cout << getType() << " was created." << std::endl;
}

Ice::Ice(Ice const &obj) : AMateria(obj){
	std::cout << "[Ice] Copy constructor called." << std::endl;
	*this = obj;
	std::cout << getType() << " was copied." << std::endl;
}

Ice::~Ice(){
	std::cout << "[Ice] Default destructor called." << std::endl;
}



Ice &Ice::operator=(Ice const &obj)
{
	_type = obj._type;
	return (*this);
}



AMateria*	Ice::clone( void ) const
{
	AMateria*	newMateria = new Ice;

	return (newMateria);
}

void	Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}