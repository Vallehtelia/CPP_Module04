
#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal
{
    protected:
        std::string type;
    public:
        Animal();
        Animal(std::string name);
        Animal(Animal const &other);
        Animal &operator=(Animal const &other);
        virtual ~Animal();

        virtual void    makeSound() const;

        virtual std::string    getType() const;
};

#endif