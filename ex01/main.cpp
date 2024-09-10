
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    const int numAnimals = 10;
    Animal* animals[numAnimals];

    // Create half dogs and half cats
    for (int i = 0; i < numAnimals; i++)
    {
        if (i < numAnimals / 2)
            animals[i] = new Dog();
        else
            animals[i] = new Cat();
    }

    // Test deep copy
    for (int i = 0; i < numAnimals; i++)
    {
        if (i < numAnimals / 2)
        {
            Dog* dog = dynamic_cast<Dog*>(animals[i]);
            dog->makeSound();
            Dog* dogCopy = new Dog(*dog);
            dogCopy->makeSound();
            delete dogCopy;
        }
        else
        {
            Cat* cat = dynamic_cast<Cat*>(animals[i]);
            cat->makeSound();
            Cat* catCopy = new Cat(*cat);
            catCopy->makeSound();
            delete catCopy;
        }
    }

    //generate ideas and test them
    for (int i = 0; i < numAnimals; i++)
    {
        if (i < numAnimals / 2)
        {
            Dog* dog = dynamic_cast<Dog*>(animals[i]);
            dog->getBrain()->setIdea("I am a dog", 0);
            std::cout << dog->getBrain()->getIdea(0) << std::endl;
        }
        else
        {
            Cat* cat = dynamic_cast<Cat*>(animals[i]);
            cat->getBrain()->setIdea("I am a cat", 0);
            std::cout << cat->getBrain()->getIdea(0) << std::endl;
        }
    }

    // Delete animals to avoid leaks
    for (int i = 0; i < numAnimals; i++)
    {
        delete animals[i];
    }

    return 0;
}