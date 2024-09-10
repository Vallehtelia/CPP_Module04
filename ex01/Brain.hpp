
#ifndef BRAIN_HPP
#define BRAIN_HPP

#include "Cat.hpp"
#include "Dog.hpp"

class Brain : public Cat, public Dog
{
    private:
        std::string ideas[100];
    public:
        Brain();
        Brain(Brain const &other);
        Brain &operator=(Brain const &other);
        ~Brain();

        void setIdea(std::string idea, int index);
        std::string getIdea(int index) const;
};



#endif