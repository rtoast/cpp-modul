#include "Fixed.hpp"

Fixed::Fixed () : _fixed(0){
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &copy){
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

Fixed& Fixed::operator= (const Fixed &equals){
	std::cout << "Assignation operator called" << std::endl;
	this->setRawBits(equals.getRawBits());
	return (*this);
}

Fixed::~Fixed(){
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits( void ) const{
	std::cout << "getRawBits member function called" << std::endl;
	return (_fixed);
}

void Fixed::setRawBits( int const raw ){
	std::cout << "setRawBits member function called" << std::endl;
	_fixed = raw;
}