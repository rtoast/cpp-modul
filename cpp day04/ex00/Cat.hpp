#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include <string>

class Cat : public Animal{
	protected:

	public:
		Cat();
		Cat(const Cat &copy);
		~Cat();

		Cat& operator= (const Cat &equals);
        
        void makeSound(void) const;
};

#endif