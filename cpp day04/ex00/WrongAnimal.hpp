#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>
#include <string>

class WrongAnimal{
	protected:
        std::string _Type;
	public:
		WrongAnimal();
		WrongAnimal(const WrongAnimal &copy);
		~WrongAnimal();

		WrongAnimal& operator= (const WrongAnimal &equals);
        
        std::string getType(void) const;
        void makeSound(void) const;
};

#endif