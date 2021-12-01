#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"
#include <string>

class Cat : public Animal{
	private:
		Brain *_idea;
	public:
		Cat();
		Cat(const Cat &copy);
		~Cat();

		Cat& operator= (const Cat &equals);
        
        void makeSound(void) const;
		Brain &getBrain(void) const;
};

#endif