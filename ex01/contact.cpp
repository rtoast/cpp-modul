#include "contact.hpp"

contact::contact(){
	_firstName = "";
	_lastName = "";
	_nickName = "";
	_phoneNumber = "";
	_darkestSecret = "";
}

contact::~contact(){
}

void	contact::setFirstName(string name){
	_firstName = name;
}

void	contact::setLastName(string name){
	_lastName = name;
}

void	contact::setNickName(string name){
	_nickName = name;
}

void	contact::setPhoneNumber(string name){
	_phoneNumber = name;
}

void	contact::setDarkestSecret(string name){
	_darkestSecret = name;
}

std::string	contact::getFirstName(){
	return (_firstName);
}

std::string	contact::getLastName(){
	return (_lastName);
}

std::string	contact::getNickName(){
	return (_nickName);
}

std::string	contact::getPhoneNumber(){
	return (_phoneNumber);
}

std::string	contact::getDarkestSecret(){
	return (_darkestSecret);
}