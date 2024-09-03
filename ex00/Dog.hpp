
#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal
{
    public:
        Dog();
        Dog(Dog const &other);
        Dog &operator=(Dog const &other);
        ~Dog();

        void        makeSound() const override;
        std::string getType() const override;
};

#endif