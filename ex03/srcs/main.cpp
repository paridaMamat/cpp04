#include "../includes/AMateria.hpp"
#include "../includes/Ice.hpp"
#include "../includes/Cure.hpp"
#include "../includes/MateriaSource.hpp"
#include "../includes/Character.hpp"

// int main()
// {
// 	IMateriaSource* src = new MateriaSource();
// 	src->learnMateria(new Ice());
// 	src->learnMateria(new Cure());
// 	ICharacter* me = new Character("me");
// 	AMateria* tmp;
// 	tmp = src->createMateria("ice");
// 	me->equip(tmp);
// 	tmp = src->createMateria("cure");
// 	me->equip(tmp);
// 	ICharacter* bob = new Character("bob");
// 	me->use(0, *bob);
// 	me->use(1, *bob);
// 	delete bob;
// 	delete me;
// 	delete src;
// 	return 0;
// }

/* int main( void )
{
	IMateriaSource*	obj = new MateriaSource();
	std::cout << std::endl;

	obj->learnMateria(new Ice());
	std::cout << std::endl;

	obj->learnMateria(new Cure());
	std::cout << std::endl;

	obj->learnMateria(new Ice());

	std::cout << std::endl;
	std::cout << "===================================" << std::endl;
	std::cout << std::endl;

	ICharacter*	AAAA = new Character("AAAA");
	std::cout << std::endl;

	AMateria* tmp;
	tmp = obj->createMateria("ice");
	AAAA->equip(tmp);
	std::cout << std::endl;

	tmp = obj->createMateria("cure");
	AAAA->equip(tmp);
	std::cout << std::endl;

	AAAA->equip(obj->createMateria("ice"));
	

	std::cout << std::endl;
	std::cout << "===================================" << std::endl;
	std::cout << std::endl;

	ICharacter*	BBBB = new Character("BBBB");
	std::cout << std::endl;

	AAAA->use(0, *BBBB);
	AAAA->use(1, *BBBB);
	AAAA->use(2, *BBBB);
	AAAA->use(3, *BBBB);
	AAAA->use(4, *BBBB);

	std::cout << std::endl;
	std::cout << "===================================" << std::endl;
	std::cout << std::endl;

	delete BBBB;
	std::cout << std::endl;

	delete AAAA;
	std::cout << std::endl;

	delete obj;
} */

int main()
{
	IMateriaSource* src = new MateriaSource();
	ICharacter* me = new Character("me");
	ICharacter* bob = new Character("bob");
	AMateria* tmp_ice = NULL;
	AMateria* tmp_cure = NULL;
	std::cout << std::endl;

	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	std::cout << std::endl;

	tmp_ice = src->createMateria("ice");
	me->equip(tmp_ice);
	tmp_cure = src->createMateria("cure");
	me->equip(tmp_cure);
	std::cout << std::endl;
	
	me->use(0, *bob);
	me->use(1, *bob);
	std::cout << std::endl;

	me->unequip(0);
	me->unequip(1);
	std::cout << std::endl;
	
	delete tmp_ice;
	tmp_ice = NULL;
	delete tmp_cure;
	tmp_cure = NULL;
	delete bob;
	delete me;
	delete src;
	return 0;
}