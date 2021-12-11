#ifndef DOG_HPP
#define DOG_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"
#include <string>

class Dog : public AAnimal{
	private:
		Brain *_idea;
	public:
		Dog();
		Dog(const Dog &copy);
		virtual ~Dog();

		Dog& operator= (const Dog &equals);

        void makeSound(void) const;
		std::string getIdea(int i);
};

#endif