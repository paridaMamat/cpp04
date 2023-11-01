#include "../includes/MateriaIce.hpp"

/*=============================== Constructors ===============================*/

MateriaIce::MateriaIce() : AMateria("ice"){
	std::cout << "[MateriaIce] Default constructor called." << std::endl;
	std::cout << getType() << " was created." << std::endl;
}

MateriaIce::MateriaIce(MateriaIce const &obj) : AMateria(obj){
	std::cout << "[MateriaIce] Copy constructor called." << std::endl;
	*this = obj;
	std::cout << getType() << " was copied." << std::endl;
}

MateriaIce::~MateriaIce(){
	std::cout << "[MateriaIce] Default destructor called." << std::endl;
}

/*================================ Overloads =================================*/

MateriaIce &MateriaIce::operator=(MateriaIce const &obj)
{
	_type = obj._type;
	return (*this);
}

/*================================= Methods ==================================*/

AMateria*	MateriaIce::clone( void ) const
{
	AMateria*	newMateria = new MateriaIce;

	return (newMateria);
}

void	MateriaIce::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}