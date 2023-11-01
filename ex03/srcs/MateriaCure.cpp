#include "../includes/MateriaCure.hpp"

/*=============================== Constructors ===============================*/

MateriaCure::MateriaCure() : AMateria("cure"){
	std::cout << "[MateriaCure] Default constructor called." << std::endl;
	std::cout << getType() << " was created." << std::endl;
}

MateriaCure::MateriaCure(MateriaCure const &obj) : AMateria(obj){
	std::cout << "[MateriaCure] Copy constructor called." << std::endl;
	*this = obj;
	std::cout << getType() << " was copied." << std::endl;
}

MateriaCure::~MateriaCure(){
	std::cout << "[MateriaCure] Default destructor called." << std::endl;
}

/*================================ Overloads =================================*/

MateriaCure& MateriaCure::operator=(MateriaCure const &obj)
{
	_type = obj._type;
	return (*this);
}

/*================================= Methods ==================================*/

AMateria*	MateriaCure::clone( void ) const
{
	AMateria*	newMateria = new MateriaCure;

	return (newMateria);
}

void	MateriaCure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}