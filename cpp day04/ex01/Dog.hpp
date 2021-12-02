#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"
#include <string>

class Dog : public Animal{
	private:
		Brain *_idea;
	public:
		Dog();
		Dog(const Dog &copy);
		virtual ~Dog();

		Dog& operator= (const Dog &equals);

        void makeSound(void) const;
};

#endif