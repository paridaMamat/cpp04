#include <iostream>
#include "../includes/Dog.hpp"
#include "../includes/Cat.hpp"
#include "../includes/WrongCat.hpp"


/* int main( void )
{
	{
		const Animal A;
		const Dog j ;
		const Cat i ;
		
		std::cout << A.getType() << " " << std::endl;
		A.makeSound();
		std::cout << j.getType() << " " << std::endl;
		j.makeSound();
		std::cout << i.getType() << " " << std::endl;
		i.makeSound();
	}

	
	{
		const Animal* meta = new Animal();
		const Animal* j = new Dog();
		const Animal* i = new Cat();
		std::cout << j->getType() << " " << std::endl;
		std::cout << i->getType() << " " << std::endl;
		i->makeSound(); //will output the cat sound!
		j->makeSound();
		meta->makeSound();
	}
	return (0);
} */

int main()
{
	const Animal* A = new Animal();
	std::cout << std::endl;

	const Animal* D = new Dog();
	const Animal* C = new Cat();
	std::cout << std::endl;

	const WrongAnimal* WA = new WrongAnimal();
	const WrongAnimal* WC = new WrongCat();
	std::cout << std::endl;
	std::cout << std::endl;

	std::cout << A->getType() << " : ";
	A->makeSound();
	std::cout << std::endl;
	std::cout << D->getType() << " : ";
	D->makeSound();
	std::cout << C->getType() << " : ";
	C->makeSound();
	std::cout << std::endl;
	std::cout << std::endl;


	std::cout << WA->getType() << " : ";
	WA->makeSound();
	std::cout << WC->getType() << " : ";
	WC->makeSound();
	std::cout << std::endl;
	std::cout << std::endl;


	delete A;
	std::cout << std::endl;

	delete C;
	delete D;
	std::cout << std::endl;

	delete WA;
	delete WC;

	return (0);
}