#include"../includes/Animal.hpp"

Animal::Animal(): _type("Unamed"){
    std::cout << "\033[1;38;5;202mAnimal\033[0m Default constructor called. " << _type << " was created" << std::endl;
}

Animal::Animal(std::string type): _type(type){
    std::cout << "\033[1;38;5;202mAnimal\033[0m overload constructor called." <<std::endl;
    if (type.size() < 1)
        _type = "Unamed";
    else
        _type = type;
}

Animal::Animal(Animal const &obj){
    std::cout << "\033[1;38;5;202mAnimal\033[0m Copy constructor called." << std::endl;
    *this = obj;
}

Animal::~Animal(){
    std::cout << "\033[1;38;5;202mAnimal\033[0m Default destructor called. " << _type << " was destroyed" << std::endl;
}

Animal &Animal::operator=(Animal const &obj){
    std::cout << "\033[1;38;5;202mAnimal\033[0m Copy assignment operator called." << std::endl;
    _type = obj._type;
    return (*this);
}

std::string Animal::getType(void) const{
    return (_type);
}

void    Animal::makeSound(void) const{ 
}