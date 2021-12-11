#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

class AAnimal{
	protected:
        std::string _Type;
	public:
		AAnimal();
		AAnimal(const AAnimal &copy);
		virtual ~AAnimal();

		AAnimal& operator= (const AAnimal &equals);
        
        std::string getType(void) const;
        virtual void makeSound(void) const = 0;
};

#endif