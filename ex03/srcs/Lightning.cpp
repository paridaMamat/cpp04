#include "../includes/Lightning.hpp"



Lightning::Lightning() : AMateria("lightning"){
	std::cout << "[Lightning] Deault constructor called." << std::endl;
	std::cout << getType() << " was created." << std::endl;
}

Lightning::Lightning(Lightning const &obj) : AMateria(obj){
	std::cout << "[Lightning] Copy constructor called." << std::endl;
	*this = obj;
	std::cout << getType() << " was copied." << std::endl;
}

Lightning::~Lightning(){
	std::cout << "[Lightning] Default destructor called." << std::endl;
}


Lightning& Lightning::operator=(Lightning const &obj)
{
	_type = obj._type;
	return (*this);
}


AMateria*	Lightning::clone( void ) const
{
	AMateria*	newMateria = new Lightning;

return (newMateria);
}

void	Lightning::use(ICharacter& target)
{
	std::cout << "* he brings down the thunder on " << target.getName() << " *" << std::endl;
}