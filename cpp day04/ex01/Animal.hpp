#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal{
	protected:
        std::string _Type;
	public:
		Animal();
		Animal(const Animal &copy);
		~Animal();

		Animal& operator= (const Animal &equals);
        
        std::string getType(void) const;
        virtual void makeSound(void) const;
};

#endif