#include "../includes/Dog.hpp"

Dog::Dog():Animal("Dog"){
    std::cout << "\033[1;38;5;202mDog\033[0m🐶 Default constructor called. " << _type << " was created" << std::endl;
}

Dog::Dog(Dog const &obj){
    std::cout << "\033[1;38;5;202mDog\033[0m🐶 Copy constructor called" << std::endl;
    *this = obj;
    std::cout << _type << " was copied" << std::endl;
}

Dog::~Dog(){
    std::cout << "\033[1;38;5;202mDog\033[0m🐶 Default destructor called. " << _type << " was destroyed" << std::endl;
}

Dog &Dog::operator=(Dog const &obj){
    std::cout << "\033[1;38;5;202mDog\033[0m🐶 Copy assignment operator called" << std::endl;
    _type = obj._type;
    return *this;
}

void    Dog::makeSound(void) const{
    std::cout << "WOUF WOUF !" <<std::endl;
}

