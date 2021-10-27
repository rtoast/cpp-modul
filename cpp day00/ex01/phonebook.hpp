#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <string>
#include <iomanip>
#include "contact.hpp"

class phonebook
{
private:
	contact	data[8];
	int		i;
public:
	phonebook();
	void filling();
	void scan();
	void pinout(int index);
	void head();
	string SizeOutput(int index, int num);
	int indexRet(string num);
};

#endif
