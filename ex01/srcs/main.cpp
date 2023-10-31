#include <iostream>
#include "../includes/Dog.hpp"
#include "../includes/Cat.hpp"
#include "../includes/Brain.hpp"


// int main( void )
// {
// 	const Animal* j = new Dog();
// 	const Animal* i = new Cat();

// 	delete j;
// 	delete i;

// 	return (0);
// }

int main()
{
const Animal* j = new Dog();
const Animal* i = new Cat();

Animal *groupe[20];

for(int i = 0; i < 10 ; i++)
{
	groupe[i] = new Dog();
}
for(int i = 10; i < 20 ; i++)
{
	groupe[i] = new Cat();
}

for(int i = 0; i < 20 ; i++)
{
	groupe[i]->makeSound();
}

for(int i = 0; i < 20 ; i++)
{
	delete groupe[i];
}

delete j;//should not create a leak
delete i;

std::cout << "#################################################" << std::endl;

Cat test;
std::cout << test.getIdea(0);
test.setIdea("Mouaf Ouawwwwww I dont remember if i'am a cat or a dog !", 0);
test.makeSound();
std::cout << test.getIdea(0);
Cat test2;
test2 = test;
test2.makeSound();
std::cout << test2.getIdea(0);
test2.setIdea("Today i'aammm cat, yesterday i'was ...dog, tomorroaawww i will be?", 0);
std::cout << test2.getIdea(0);
std::cout << test.getIdea(0);
Cat Z(test);
std::cout << Z.getIdea(0);

std::cout << "#################################################" << std::endl;

Animal *test1 = new Cat;
test1->makeSound();

delete test1;

std::cout << "#################################################" << std::endl;

Animal atest("Unicorn");
atest.makeSound();

return 0;
}