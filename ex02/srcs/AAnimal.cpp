#include"../includes/AAnimal.hpp"

AAnimal::AAnimal(): _type("Unamed"){
    std::cout << "\033[1;38;5;202mAAnimal\033[0m Default constructor called. " << _type << " was created" << std::endl;
}

AAnimal::AAnimal(std::string type): _type(type){
    std::cout << "\033[1;38;5;202mAAnimal\033[0m overload constructor called." <<std::endl;
    if (type.size() < 1)
        _type = "Unamed";
    else
        _type = type;
}

AAnimal::AAnimal(AAnimal const &obj){
    std::cout << "\033[1;38;5;202mAAnimal\033[0m Copy constructor called." << std::endl;
    *this = obj;
}

AAnimal::~AAnimal(){
    std::cout << "\033[1;38;5;202mAAnimal\033[0m Default destructor called. " << _type << " was destroyed" << std::endl;
}

AAnimal &AAnimal::operator=(AAnimal const &obj){
    std::cout << "\033[1;38;5;202mAAnimal\033[0m Copy assignment operator called." << std::endl;
    _type = obj._type;
    return (*this);
}

std::string AAnimal::getType(void) const{
    return (_type);
}

void    AAnimal::makeSound(void) const{ 
}