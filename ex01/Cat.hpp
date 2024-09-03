
#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal
{
    public:
        Cat();
        Cat(Cat const &other);
        Cat &operator=(Cat const &other);
        ~Cat();

        std::string getType() const override;
        void        makeSound() const override;
};

#endif