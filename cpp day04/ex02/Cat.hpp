#ifndef CAT_HPP
#define CAT_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"
#include <string>

class Cat : public AAnimal{
	private:
		Brain *_idea;
	public:
		Cat();
		Cat(const Cat &copy);
		virtual ~Cat();

		Cat& operator= (const Cat &equals);
        
        void makeSound(void) const;

		std::string getIdea(int i);
};

#endif
