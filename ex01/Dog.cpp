
#include "Dog.hpp"

Dog::Dog()
{
    std::cout << "Dog constructor called!\n";
    this->type = "Dog";
    this->brain = new Brain();
}

Dog::Dog(Dog const &other)
{
    std::cout << "Dog copy constructor called!\n";
    *this = other;
}

Dog &Dog::operator=(Dog const &other)
{
    std::cout << "Dog assignation operator called!\n";
    this->type = other.type;
    this->brain = new Brain(*other.brain);
    return (*this);
}

Dog::~Dog()
{
    std::cout << "Dog deconstructor called!\n";
    delete this->brain;
}

std::string Dog::getType() const
{
    return (this->type);
}

void Dog::makeSound() const
{
    std::cout << "Woof Woof!\n";
}

void    Dog::getIdeas() const
{
    for (int i = 0; i < 100; i++)
        std::cout << "\tIdea " << i << " of the Cat is: \"" << this->brain->getIdea(i) << std::endl;
}

void    Dog::setIdeas(int i, std::string idea) const
{
    this->brain->setIdea(idea, i);
}
