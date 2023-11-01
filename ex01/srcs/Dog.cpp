#include "../includes/Dog.hpp"

Dog::Dog(): _brain(new Brain){
    _type = "Dog";
    std::cout << "\033[1;38;5;202mDog\033[0m🐶 Default constructor called. " << _type << " was created" << std::endl;
}

Dog::Dog(Dog const &obj):Animal(obj), _brain(new Brain){
    std::cout << "\033[1;38;5;202mDog\033[0m🐶 Copy constructor called" << std::endl;
    *this = obj;
    std::cout << _type << " was copied" << std::endl;
}

Dog::~Dog(){
    std::cout << "\033[1;38;5;202mDog\033[0m🐶 Default destructor called. " << _type << " was destroyed" << std::endl;
    delete _brain;
}

Dog &Dog::operator=(Dog const &obj){
    std::cout << "\033[1;38;5;202mDog\033[0m🐶 Copy assignment operator called" << std::endl;
    _type = obj._type;
    *_brain = (*obj._brain);
    return *this;
}

void    Dog::makeSound(void) const{
    std::cout << "WOUF WOUF !" <<std::endl;
}

void    Dog::setIdea(std::string const &idea, int const index){
    if (index >= 0 && index < 100)
        _brain->setIdea(idea, index);
}

std::string    Dog::getIdea(int const index) const{
    if (index >= 0 && index < 100)
        return _brain->getIdea(index);
    return "NOTHING" ;
}

