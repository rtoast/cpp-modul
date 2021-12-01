#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"
#include <string>

class WrongCat : public WrongAnimal{
	protected:

	public:
		WrongCat();
		WrongCat(const WrongCat &copy);
		~WrongCat();

		WrongCat& operator= (const WrongCat &equals);
        
        void makeSound(void) const;
};

#endif