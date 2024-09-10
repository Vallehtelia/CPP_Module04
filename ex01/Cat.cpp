
#include "Cat.hpp"

Cat::Cat()
{
    std::cout << "Cat constructor called\n";
    this->type = "Cat";
    this->brain = new Brain();
}

Cat::Cat(Cat const &other)
{
    std::cout << "Cat copy constructor called\n";
    *this = other;
}

Cat &Cat::operator=(Cat const &other)
{
    this->type = other.type;
    this->brain = new Brain(*other.brain);
    return (*this);
}

Cat::~Cat()
{
    std::cout << "Cat deconstructor called\n";
    delete this->brain;
}

std::string Cat::getType() const
{
    return (this->type);
}

void Cat::makeSound() const
{
    std::cout << "Meow\n";
}

void    Cat::getIdeas() const
{
    for (int i = 0; i < 100; i++)
        std::cout << "\tIdea " << i << " of the Cat is: \"" << this->brain->getIdea(i) << std::endl;
}

void    Cat::setIdeas(int i, std::string idea) const
{
    this->brain->setIdea(idea, i);
}
