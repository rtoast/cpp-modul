#include "contact.hpp"
#include "phonebook.hpp"

int main(void)
{
	string		command;
	phonebook	book;
	std::cout << "Hello it's yours PhoneBook💜" << std::endl;

	while(1){
		std::cout << "Please enter the command ADD, SEARCH or EXIT" << std::endl;
		std::getline(std::cin, command);
		if (command == "ADD")
			book.filling();
		if (command == "SEARCH")
			book.scan();
		if (command == "EXIT")
			exit(0);
	}
	return (0);
}
