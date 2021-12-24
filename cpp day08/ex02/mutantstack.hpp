#ifndef MUTANTSTAC_HPP
#define MUTANTSTAC_HPP

#include <stack>

template<typename T>
class MutantStack : public std::stack<T>{
    private:

    public:
    	typedef typename std::stack<T>::container_type::iterator iterator;

    	MutantStack() : std::stack<T>(){};
    	MutantStack(MutantStack const & copy) : std::stack<T>(copy){}
    	~MutantStack(){};

    	MutantStack &operator=(MutantStack<T> const &equals){
    		return (std::stack<T>::operator=(equals));
    	}

    	iterator begin(){
    		return (this->c.begin());
    	}
    	iterator end(){
    		return (this->c.end());
    	}
};

#endif