#include "../includes/WrongCat.hpp"

WrongCat::WrongCat():WrongAnimal("WrongCat"){
    std::cout << "\033[1;32mWrongCat\033[0m Default constructor called. " << _type << " was created" << std::endl;
}

WrongCat::WrongCat(WrongCat const &obj){
    std::cout << "\033[1;32mWrongCat\033[0m Copy constructor called" << std::endl;
    *this = obj;
    std::cout << _type << " was copied" << std::endl;
}

WrongCat::~WrongCat(){
    std::cout << "\033[1;32mWrongCat\033[0m default destructor called. " << _type << " was destroyed" << std::endl;
}

WrongCat &WrongCat::operator=(WrongCat const &obj){
    std::cout << "\033[1;32mWrongCat\033[0m Copy assignment operator called" << std::endl;
    _type = obj._type;
    return *this;
}

void    WrongCat::makeSound(void) const{
    std::cout << "Meeeeeeoooowwwwww !" <<std::endl;
}