#include "../includes/AMateria.hpp"
#include "../includes/MateriaIce.hpp"
#include "../includes/MateriaCure.hpp"
#include "../includes/MateriaFire.hpp"
#include "../includes/MateriaLightning.hpp"
#include "../includes/MateriaSource.hpp"
#include "../includes/Character.hpp"

// int main()
// {
// 	IMateriaSource* src = new MateriaSource();
// 	src->learnMateria(new MateriaIce());
// 	src->learnMateria(new MateriaCure());
// 	ICharacter* me = new Character("me");
// 	A_Materia* tmp;
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

int main( void )
{
	IMateriaSource*	src = new MateriaSource();
	std::cout << std::endl;

	src->learnMateria(new MateriaIce());
	std::cout << std::endl;

	src->learnMateria(new MateriaCure());
	std::cout << std::endl;

	src->learnMateria(new MateriaFire());
	std::cout << std::endl;

	src->learnMateria(new MateriaLightning());
	std::cout << std::endl;

	src->learnMateria(new MateriaIce());

	std::cout << std::endl;
	std::cout << "===================================" << std::endl;
	std::cout << std::endl;

	ICharacter*	me = new Character("me");
	std::cout << std::endl;

	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	std::cout << std::endl;

	tmp = src->createMateria("cure");
	me->equip(tmp);
	std::cout << std::endl;

	me->equip(src->createMateria("fire"));
	std::cout << std::endl;

	me->equip(src->createMateria("lightning"));
	std::cout << std::endl;

	me->equip(src->createMateria("ice"));

	std::cout << std::endl;
	std::cout << "===================================" << std::endl;
	std::cout << std::endl;

	ICharacter*	zoubir = new Character("zoubir");
	std::cout << std::endl;

	me->use(0, *zoubir);
	me->use(1, *zoubir);
	me->use(2, *zoubir);
	me->use(3, *zoubir);
	me->use(4, *zoubir);

	std::cout << std::endl;
	std::cout << "===================================" << std::endl;
	std::cout << std::endl;

	delete zoubir;
	std::cout << std::endl;

	delete me;
	std::cout << std::endl;

	delete src;
}