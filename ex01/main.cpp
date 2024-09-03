
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    std::cout << meta->getType() << " " << std::endl;
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound();
    j->makeSound();
    meta->makeSound();

    const WrongAnimal* wmeta = new WrongAnimal();
    const WrongAnimal* wj = new WrongCat();

    std::cout << wmeta->getType() << " " << std::endl;
    std::cout << wj->getType() << " " << std::endl;
    wmeta->makeSound();
    wj->makeSound();

    delete wj;
    delete wmeta;
    delete meta;
    delete j;
    delete i;
}
