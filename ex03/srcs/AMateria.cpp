#include "../includes/AMateria.hpp"



AMateria::AMateria() : _type("unamed"){
	std::cout << "[AMateria] Default constructor called." << std::endl;
}

AMateria::AMateria(std::string const &type) : _type(type){
	std::cout << "[AMateria] overload constructor called." << std::endl;
}

AMateria::AMateria(AMateria const &obj){
	std::cout << "[AMateria] Copy constructor called." << std::endl;
	*this = obj;
}

AMateria::~AMateria(){
	std::cout << "[AMateria] Default destructor called." << std::endl;
	std::cout << getType() << " was destroyed." << std::endl;
}



AMateria& AMateria::operator=(const AMateria &obj)
{
	_type = obj._type;
	return (*this);
}



void	AMateria::use(ICharacter &target)
{
	(void)target;
}


std::string const	&AMateria::getType( void ) const{
	return (_type);
}