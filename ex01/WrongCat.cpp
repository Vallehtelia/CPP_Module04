
#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    std::cout << "WrongCat constructor called\n";
    this->type = "WrongCat";
}

WrongCat::WrongCat(WrongCat const &other) : WrongAnimal(other) {}

WrongCat &WrongCat::operator=(WrongCat const &other)
{
    this->type = other.type;
    return (*this);
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat deconstructor called\n";
}

std::string WrongCat::getType() const
{
    return (this->type);
}

void WrongCat::makeSound() const
{
    std::cout << "Wrongcat Meows!\n";
}