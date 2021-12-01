#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include <string>

class Dog : public Animal{
	protected:
	public:
		Dog();
		Dog(const Dog &copy);
		~Dog();

		Dog& operator= (const Dog &equals);

        void makeSound(void) const;
};

#endif