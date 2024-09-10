
#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
    private:
        Brain *brain;
    public:
        Cat();
        Cat(Cat const &other);
        Cat &operator=(Cat const &other);
        ~Cat();

        std::string getType() const override;
        void        makeSound() const override;
        void        getIdeas() const;
        void        setIdeas(int i, std::string idea) const;
};

#endif
