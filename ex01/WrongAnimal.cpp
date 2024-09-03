
#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    std::cout << "WrongAnimal constructor called\n";
    this->type = "WrongAnimalName";
}

WrongAnimal::WrongAnimal(std::string name)
{
    std::cout << "WrongAnimal named constructor called\n";
    this->type = name;
}

WrongAnimal::WrongAnimal(WrongAnimal const &other)
{
    this->type = other.type;
}

WrongAnimal &WrongAnimal::operator=(WrongAnimal const &other)
{
    this->type = other.type;
    return (*this);
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal deconstructor called\n";
}

std::string WrongAnimal::getType() const
{
    return (this->type);
}

void    WrongAnimal::makeSound() const
{
    std::cout << "Wrong cat tries to meow but only whitenoise coming out\n";
}