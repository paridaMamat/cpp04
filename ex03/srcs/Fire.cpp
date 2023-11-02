#include "../includes/Fire.hpp"



Fire::Fire() : AMateria("fire"){
	std::cout << "[Fire] Default constructor called." << std::endl;
	std::cout << getType() << " was created." << std::endl;
}

Fire::Fire(Fire const &obj) : AMateria(obj){
	std::cout << "[Fire] Copy constructor called." << std::endl;
	*this = obj;
	std::cout << getType() << " was copied." << std::endl;
}

Fire::~Fire(){
	std::cout << "[Fire] Default destructor called." << std::endl;
}



Fire &Fire::operator=(Fire const &obj)
{
	_type = obj._type;
	return (*this);
}



AMateria*	Fire::clone( void ) const
{
	AMateria*	newMateria = new Fire;

	return (newMateria);
}

void	Fire::use(ICharacter& target)
{
	std::cout << "* shoots an fire bolt at " << target.getName() << " *" << std::endl;
}