#ifndef WRONGDOG_HPP
#define WRONGDOG_HPP

#include "WrongAnimal.hpp"
#include <string>

class WrongDog : public WrongAnimal{
	protected:
	public:
		WrongDog();
		WrongDog(const WrongDog &copy);
		~WrongDog();

		WrongDog& operator= (const WrongDog &equals);

        void makeSound(void) const;
};

#endif