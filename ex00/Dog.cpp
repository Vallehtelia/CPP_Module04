
#include "Dog.hpp"

Dog::Dog()
{
    std::cout << "Dog constructor called!\n";
    this->type = "Dog";
}

Dog::Dog(Dog const &other) : Animal(other) {}

Dog &Dog::operator=(Dog const &other)
{
    this->type = other.type;
    return (*this);
}

Dog::~Dog()
{
    std::cout << "Dog deconstructor called!\n";
}

std::string Dog::getType() const
{
    return (this->type);
}

void Dog::makeSound() const
{
    std::cout << "Woof Woof!\n";
}