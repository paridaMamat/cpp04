#include"../includes/Brain.hpp"

Brain::Brain(){
    std::cout << "\033[1;31mBrain\033[0m🧠 Default constructor called. " << std::endl;
     for (int i = 0; i < 100; i++)
	    _ideas[i] = "Empty Idea";
}

Brain::Brain(Brain const &obj){
    std::cout << "\033[1;31mBrain\033[0m🧠 Copy constructor called" << std::endl;
    *this = obj;
}

Brain::~Brain(){
    std::cout << "\033[1;31mBrain\033[0m🧠 Default destructor called." << std::endl;
}

Brain &Brain::operator=(Brain const &obj){
    std::cout << "\033[1;31mBrain\033[0m🧠 Copy assignment operator called" << std::endl;
    for (int i = 0; i < 100; i++)
	    _ideas[i] = obj._ideas[i];
	return *this;
}

void    Brain::setIdea(std::string const &idea, int const index){
    if (index >= 0 && index < 100)
        _ideas[index] = idea;
}

std::string    Brain::getIdea(int const index) const{
    if (index >= 0 && index < 100)
        return (_ideas[index]);
    return "NOTHING" ;
}