#include "../includes/Cat.hpp"

Cat::Cat():Animal("Cat"){
    std::cout << "\033[1;38;5;202mCat\033[0m🐱 Default constructor called. " << _type << " was created" << std::endl;
}

Cat::Cat(Cat const &obj): Animal("Cat"){
    std::cout << "\033[1;38;5;202mCat\033[0m🐱 Copy constructor called" << std::endl;
    *this = obj;
    std::cout << _type << " was copied" << std::endl;
}

Cat::~Cat(){
    std::cout << "\033[1;38;5;202mCat\033[0m🐱 Default destructor called.  " << _type << " was destroyed" << std::endl;
}

Cat &Cat::operator=(Cat const &obj){
    std::cout << "\033[1;38;5;202mCat\033[0m🐱 Copy assignment operator called" << std::endl;
    _type = obj._type;
    return *this;
}

void    Cat::makeSound(void) const{
    std::cout << "Meeeeeeoooowwwwww !" <<std::endl;
}