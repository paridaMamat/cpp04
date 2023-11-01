#include "../includes/MateriaLightning.hpp"

/*=============================== Constructors ===============================*/

MateriaLightning::MateriaLightning() : AMateria("lightning"){
	std::cout << "[MateriaLightning] Deault constructor called." << std::endl;
	std::cout << getType() << " was created." << std::endl;
}

MateriaLightning::MateriaLightning(MateriaLightning const &obj) : AMateria(obj){
	std::cout << "[MateriaLightning] Copy constructor called." << std::endl;
	*this = obj;
	std::cout << getType() << " was copied." << std::endl;
}

MateriaLightning::~MateriaLightning(){
	std::cout << "[MateriaLightning] Default destructor called." << std::endl;
}

/*================================ Overloads =================================*/

MateriaLightning& MateriaLightning::operator=(MateriaLightning const &obj)
{
	_type = obj._type;
	return (*this);
}

/*================================= Methods ==================================*/

AMateria*	MateriaLightning::clone( void ) const
{
	AMateria*	newMateria = new MateriaLightning;

return (newMateria);
}

void	MateriaLightning::use(ICharacter& target)
{
	std::cout << "* he brings down the thunder on " << target.getName() << " *" << std::endl;
}