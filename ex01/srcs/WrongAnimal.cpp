#include "../includes/WrongAnimal.hpp"

WrongAnimal::WrongAnimal():_type("WrongAnimal"){
    std::cout << "\033[1;32mWrongAnimal\033[0m Default constructor called. " << _type << " was created" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type):_type(type){
    std::cout << "\033[1;32mWrongAnimal\033[0m overload constructor called." << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const &obj){
    std::cout << "\033[1;32mWrongAnimal\033[0m Copy constructor called." << std::endl;
    *this = obj;
}

WrongAnimal::~WrongAnimal(){
    std::cout << "\033[1;32mWrongAnimal\033[0m default destructor called. "<< _type << " was destroyed" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(WrongAnimal const &obj){
    std::cout << "\033[1;32mWrongAnimal\033[0m assignement copy cinstructor called" << std::endl;
    _type = obj._type;
    return *this;
}

void    WrongAnimal::makeSound(void) const{
    std::cout << "Beeeeeeepppppppp !" << std::endl;
}

std::string WrongAnimal::getType(void) const{
    return _type;
}