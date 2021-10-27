#include "Karen.hpp"

int main(int argc, char **argv){
	if (argc != 2){
		std::cout << "Wrong amout of elements" << std::endl;
		return (0);
	}
	Karen a;
	a.complain(argv[1]);
	return (0);
}