#include "phonebook.hpp"

phonebook::phonebook(){
	i = -1;
}

void phonebook::filling(){
	string variable;
	i++;
	std::cout << "Enter your name:" << std::endl;
	std::getline(std::cin, variable);
	data[i % 8].setFirstName(variable);
	std::cout << "Enter your last name:" << std::endl;
	std::getline(std::cin, variable);
	data[i % 8].setLastName(variable);
	std::cout << "Enter your nickname:" << std::endl;
	std::getline(std::cin, variable);
	data[i % 8].setNickName(variable);
	std::cout << "Enter your phonenumber:" << std::endl;
	std::getline(std::cin, variable);
	data[i % 8].setPhoneNumber(variable);
	std::cout << "Enter your Darkest secret:" << std::endl;
	std::getline(std::cin, variable);
	data[i % 8].setDarkestSecret(variable);
}

string phonebook::SizeOutput(int index, int num){
	string out;
	if (num == 1)
		out = data[index].getFirstName();
	if (num == 2)
		out = data[index].getLastName();
	if (num == 3)
		out = data[index].getNickName();
	if (out.size() > 10) {
		return out.substr(0, 9) + ".";
	}
	return out;
}

void phonebook::head(){
	std::cout << " - - - - - - - - - - - - - - - - - - - - - - " << std::endl;
	std::cout << "|" << std::setw(10) << "Index";
	std::cout << "|" << std::setw(10) << "FirstName";
	std::cout << "|" << std::setw(10) << "LastName";
	std::cout << "|" << std::setw(10) << "NickName";
	std::cout << "|" << std::endl;
}

void phonebook::pinout(int index){
	std::cout << " - - - - - - - - - - - - - - - - - - - - - - " << std::endl;
	std::cout << "|" << std::setw(10) << index;
	std::cout << "|" << std::setw(10) << this->SizeOutput(index, 1);
	std::cout << "|" << std::setw(10) << this->SizeOutput(index, 2);
	std::cout << "|" << std::setw(10) << this->SizeOutput(index, 3); 
	std::cout << "|" << std::endl;
}

int phonebook::indexRet(string num){
	if (num == "0")
		return (0);
	if (num == "1")
		return (1);
	if (num == "2")
		return (2);
	if (num == "3")
		return (3);
	if (num == "4")
		return (4);
	if (num == "5")
		return (5);
	if (num == "6")
		return (6);
	if (num == "7")
		return (7);
	else
		return (-1);
}

void phonebook::scan(){
	int		index;
	string	num;

	if (i == -1)
		std::cout << "No contacts in phonebook" << std::endl;
	else {
		index = 0;
		head();
		while (index < i % 8){
			pinout(index);
			index++;
		}
		std::cout << "Enter contact index:" << std::endl;
		std::getline(std::cin, num);
		index = indexRet(num);
		if (index != -1)
			pinout(index);
	}
}
