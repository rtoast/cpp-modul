#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"


int main(){

    // AAnimal planet;

    AAnimal* herd[100];
    for (int i = 0; i < 50; ++i){
        herd[i] = new Cat();
    }
    for (int i = 50; i < 100; ++i){
        herd[i] = new Dog();
    }
    for (int i = 0; i < 100; ++i){
        herd[i]->makeSound();
        delete herd[i];
    }
}