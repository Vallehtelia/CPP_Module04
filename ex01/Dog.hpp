
#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
    private:
        Brain *brain;
    public:
        Dog();
        Dog(Dog const &other);
        Dog &operator=(Dog const &other);
        ~Dog();

        void        makeSound() const override;
        std::string getType() const override;
        void        getIdeas() const;
        void        setIdeas(int i, std::string idea) const;
};

#endif
