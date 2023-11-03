#include "../includes/Cure.hpp"



Cure::Cure() : AMateria("cure"){
	std::cout << "[Cure] Default constructor called." << std::endl;
	std::cout << getType() << " was created." << std::endl;
}

Cure::Cure(Cure const &obj){
	std::cout << "[Cure] Copy constructor called." << std::endl;
	*this = obj;
	std::cout << getType() << " was copied." << std::endl;
}

Cure::~Cure(){
	std::cout << "[Cure] Default destructor called." << std::endl;
}



Cure& Cure::operator=(Cure const &obj)
{
	_type = obj._type;
	return (*this);
}



AMateria*	Cure::clone( void ) const
{
	return (new Cure());
}

void	Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}