#include "iostream"

void printnf(std::string str){
	std::cout<<"char: impossible"<<std::endl;
	std::cout<<"int: impossible"<<std::endl;
	std::cout<<"float: "<<str<<"f"<<std::endl;
	std::cout<<"double: "<<str<<std::endl;
}

void charsymbol(char symbol){
    std::cout<<"char: ";
    if (symbol < 33 || symbol > 126)
		std::cout<<"Non displayable"<<std::endl;
	else
		std::cout<<"'"<<symbol<<"'"<<std::endl;
}

void intsymbol(int symbol){
    std::cout<<"int: "<<symbol<<std::endl;
}

void floatsymbol(float symbol){
    if (symbol - (int)symbol == 0)
		std::cout<<"float: "<<symbol<<".0f"<<std::endl;
	else
		std::cout<<"float: "<<symbol<<"f"<<std::endl;
}

void doublesymbol(double symbol){
    if (symbol - (int)symbol == 0)
		std::cout<<"double: "<<symbol<<".0"<<std::endl;
	else
		std::cout<<"double: "<<symbol<<std::endl;
}

void print(double symbol){
    charsymbol(static_cast<unsigned char>(symbol));
	intsymbol(static_cast<int>(symbol));
	floatsymbol(static_cast<float>(symbol));
	doublesymbol(symbol);

}

void pars(std::string str){
    if (!std::isdigit(str[0]) && str[1] == '\0')
        print(static_cast<double>(str[0]));
    else{
        if (str[str.size() - 1] == 'f')
            str.erase(str.size() - 1, 1);
        bool dot = false;
        int i = -1;
        if (str[0] == '-')
            i++;
	    while (++i < (int)str.size()){
		    if (std::isdigit(str[i]))
		    	continue ;
		    if ((str[i] == '.' ) && ((i + 1) < (int)str.size()) && (!dot))
		    	dot = true;
		    else{
                std::cerr<<"Error: not valid string"<<std::endl;
                exit(1);
            }
	    }
	    print(stod(str));
    }
    
}

bool nfsymbol(std::string str){
	if (str == "nanf" ||
		str == "+inff" ||
		str == "-inff")
		printnf(str.erase(str.size() - 1, 1));
	else if (str == "nan" || 
			str == "+inf" ||
			str == "-inf")
		printnf(str);
	else
		return (false);
	return (true);
}

int main(int argc, char **argv){
    if(argc != 2){
        std::cerr<<"Error: args"<<std::endl;
	    return (1);
    }
    std::string str(argv[1]);
    if (!nfsymbol(str))
        pars(str); 
    return (0);
}