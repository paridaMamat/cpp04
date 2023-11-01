#include "../includes/Cat.hpp"

Cat::Cat(): _brain(new Brain){
    _type = "Cat";
    std::cout << "\033[1;38;5;202mCat\033[0m🐱 Default constructor called. " << _type << " was created" << std::endl;
}

Cat::Cat(Cat const &obj) : Animal(obj), _brain(new Brain){
    std::cout << "\033[1;38;5;202mCat\033[0m🐱 Copy constructor called" << std::endl;
    *this = obj;
    std::cout << _type << " was copied" << std::endl;
}

Cat::~Cat(){
    std::cout << "\033[1;38;5;202mCat\033[0m🐱 Default destructor called.  " << _type << " was destroyed" << std::endl;
    delete _brain;
}

Cat &Cat::operator=(Cat const &obj){
    std::cout << "\033[1;38;5;202mCat\033[0m🐱 Copy assignment operator called" << std::endl;
    _type = obj._type;
    *_brain = (*obj._brain);
    return *this;
}

void    Cat::makeSound(void) const{
    std::cout << "Meeeeeeoooowwwwww !" <<std::endl;
}

void    Cat::setIdea(std::string const &idea, int const index){
    if (index >= 0 && index < 100)
        _brain->setIdea(idea, index);
}

std::string    Cat::getIdea(int const index) const{
    if (index >= 0 && index < 100)
        return _brain->getIdea(index);
    return "NOTHING" ;
}
