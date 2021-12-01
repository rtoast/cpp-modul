#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongDog.hpp"
#include "WrongCat.hpp"

int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound();
    j->makeSound();
    meta->makeSound();

    const WrongAnimal* a = new WrongAnimal();
    const WrongAnimal* l = new WrongDog();
    const WrongAnimal* k = new WrongCat();
    std::cout << l->getType() << " " << std::endl;
    std::cout << k->getType() << " " << std::endl;
    l->makeSound();
    k->makeSound();
    a->makeSound();
}