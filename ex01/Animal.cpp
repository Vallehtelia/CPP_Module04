
#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "Animal constructor called\n";
    this->type = "";
}

Animal::Animal(std::string name)
{
    std::cout << "Animal named constructor called\n";
    this->type = name;
}

Animal::Animal(Animal const &other)
{
    this->type = other.type;
}

Animal &Animal::operator=(Animal const &other)
{
    this->type = other.type;
    return (*this);
}

Animal::~Animal()
{
    std::cout << "Animal deconstructor called\n";
}

std::string Animal::getType() const
{
    return (this->type);
}

void    Animal::makeSound() const
{
    std::cout << "No type!\n";
}