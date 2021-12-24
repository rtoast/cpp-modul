#include <iostream>
#include "mutantstack.hpp"

int main()
{
	MutantStack<int> m;
	m.push(5);
	m.push(17);
	m.push(3);
	m.push(5);
	m.push(737);
	m.push(0);
	MutantStack<int>::iterator it = m.begin();
	MutantStack<int>::iterator ite = m.end();
	++it;
	--it;
	while (it != ite){
	    std::cout << *it << std::endl;
	    ++it;
	}
	return 0;
}