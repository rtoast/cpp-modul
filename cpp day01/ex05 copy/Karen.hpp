#ifndef KAREN_HPP
#define KAREN_HPP

#include <iostream>
#include <string>

class Karen{
	private:
		void debug(void);
		void info(void);
		void warning(void);
		void error(void);
		std::string mas[4];
	public:
		Karen();
		~Karen();
		void complain(std::string level);
		int compare(std::string str);
		void errorStr(void);
};

#endif