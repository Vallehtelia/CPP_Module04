
#include "Cat.hpp"

Cat::Cat()
{
    std::cout << "Cat constructor called\n";
    this->type = "Cat";
}

Cat::Cat(Cat const &other) : Animal(other) {}

Cat &Cat::operator=(Cat const &other)
{
    this->type = other.type;
    return (*this);
}

Cat::~Cat()
{
    std::cout << "Cat deconstructor called\n";
}

std::string Cat::getType() const
{
    return (this->type);
}

void Cat::makeSound() const
{
    std::cout << "Meow\n";
}