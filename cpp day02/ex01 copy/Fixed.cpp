#include "Fixed.hpp"

Fixed::Fixed () : _fixed(0){
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int value){
	std::cout << "Int constructor called" << std::endl;
	_fixed = value *(1 << _NumberFractBits);
}

Fixed::Fixed(float value){
	std::cout << "Float constructor called" << std::endl;
	_fixed = roundf(value *(1 << _NumberFractBits));
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

std::ostream& operator<< (std::ostream &out, const Fixed &fixed){
	out << fixed.toFloat();
	return(out);
}

int Fixed::getRawBits( void ) const{
	std::cout << "getRawBits member function called" << std::endl;
	return (_fixed);
}

void Fixed::setRawBits( int const raw ){
	std::cout << "setRawBits member function called" << std::endl;
	_fixed = raw;
}

float Fixed::toFloat(void) const{
	return (_fixed / float(1 << _NumberFractBits));
}

int Fixed::toInt(void) const{
	return (_fixed / (1 << _NumberFractBits));
}