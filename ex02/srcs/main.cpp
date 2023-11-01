
#include "../includes/Cat.hpp"

int main()
{
	
	const AAnimal* j = new Dog();
	const AAnimal* i = new Cat();
	std::cout << std::endl;

 	std::cout << "************************************" << std::endl;
    std::cout << "  WE ARE GONNA MAKE TEN DOGS AND TEN CATS" << std::endl;
    std::cout << "************************************" << std::endl;
	AAnimal *groupe[20];
	for(int i = 0; i < 10 ; i++)
	{
		groupe[i] = new Dog();
	}
	std::cout << std::endl;

	for(int i = 10; i < 20 ; i++)
	{
		groupe[i] = new Cat();
	}
	std::cout << std::endl;
	std::cout << "****************************" << std::endl;
    std::cout << "  LET THEM MAKE SOME SOUND" << std::endl;
    std::cout << "****************************" << std::endl;
	for(int i = 0; i < 20 ; i++)
	{
		groupe[i]->makeSound();
	}
	std::cout << std::endl;
	std::cout << "*********************************" << std::endl;
    std::cout << "  NOW WE ARE GONNA DELETE THEM" << std::endl;
    std::cout << "*********************************" << std::endl;
	for(int i = 0; i < 20 ; i++)
	{
		delete groupe[i];
	}
	std::cout << std::endl;

	delete j;
	delete i;
	std::cout << std::endl << std::endl;


	std::cout << "#################################################" << std::endl;

	Cat test;
	std::cout << test.getIdea(0) << std::endl;
	test.setIdea("I did't remember if i'am a cat or a dog !", 55);
	test.makeSound();
	std::cout << test.getIdea(0) << std::endl << std::endl;
	std::cout << test.getIdea(55) << std::endl << std::endl;
	
	{
		Cat test2;
		test2 = test;
		test2.makeSound();
		std::cout << "test2's idea is ------------>" << test2.getIdea(0) << std::endl;
		test2.setIdea("I want to sleep !", 0);
		std::cout <<"test2's idea is ------------>" << test2.getIdea(0) << std::endl;
		std::cout << "test's idea is ------------>: " << test.getIdea(0) << std::endl;
	}
	std::cout << std::endl;


	Cat Z(test);
	std::cout << Z.getIdea(99) << std::endl;


	std::cout << std::endl << "#################################################" << std::endl;
	{	AAnimal *test1 = new Cat;
		test1->makeSound();
		delete test1;
	}
	std::cout << std::endl;

	/* std::cout << "#################################################" << std::endl;
	{
		AAnimal test3("Unicorn");
		test3.makeSound();
	}
	std::cout << std::endl; */

	{
		Cat test4;
		Cat	*test5 = new Cat;
		test5->setIdea("I have an idea", 0);
		*test5 = test4;
		std::cout << test4.getIdea(0) << std::endl;
		delete test5;

	}
	std::cout << std::endl;

	return 0;
}