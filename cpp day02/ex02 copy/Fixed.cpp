#include "Fixed.hpp"

// constructs and destructor
Fixed::Fixed () : _fixed(0){
}

Fixed::Fixed(int value){
	_fixed = value *(1 << _NumberFractBits);
}

Fixed::Fixed(float value){
	_fixed = roundf(value *(1 << _NumberFractBits));
}

Fixed::Fixed(const Fixed &copy){
	*this = copy;
}

Fixed::~Fixed(){
}

// operator=
Fixed& Fixed::operator= (const Fixed &equals){
	this->setRawBits(equals.getRawBits());
	return (*this);
}

// comparison operators
bool Fixed::operator== (const Fixed &twoEquals) const{
	return(this->_fixed == twoEquals.getRawBits());
}

bool Fixed::operator!= (const Fixed &notEquals) const{
	return(this->_fixed != notEquals.getRawBits());
}

bool Fixed::operator< (const Fixed &smaller) const{
	return(this->_fixed != smaller.getRawBits());
}

bool Fixed::operator<= (const Fixed &smallerEquals) const{
	return(this->_fixed <= smallerEquals.getRawBits());
}

bool Fixed::operator> (const Fixed &bigger) const{
	return(this->_fixed > bigger.getRawBits());
}

bool Fixed::operator>= (const Fixed &biggerEquals) const{
	return(this->_fixed >= biggerEquals.getRawBits());
}

// arithmetic operators
Fixed Fixed::operator+ (const Fixed &plus){
	return Fixed(toFloat() + plus.toFloat());
}

Fixed Fixed::operator- (const Fixed &plus){
	return Fixed(toFloat() - plus.toFloat());
}

Fixed Fixed::operator* (const Fixed &plus){
	return Fixed(toFloat() * plus.toFloat());
}

Fixed Fixed::operator/ (const Fixed &plus){
	return Fixed(toFloat() / plus.toFloat());
}

// increment and decrement
Fixed &Fixed::operator++ (void){
	++this->_fixed;
	return(*this);
}

Fixed Fixed::operator++ (int){
	Fixed i(*this);
	++this->_fixed;
	return(i);
}

Fixed &Fixed::operator-- (void){
	--this->_fixed;
	return(*this);
}

Fixed Fixed::operator-- (int){
	Fixed i(*this);
	--this->_fixed;
	return(i);
}
// min and max
Fixed &Fixed::min(Fixed &fp1, Fixed &fp2){
	return (fp1 < fp2) ? fp1 : fp2;
}

Fixed &Fixed::max(Fixed &fp1, Fixed &fp2){
	return (fp1 > fp2) ? fp1 : fp2;
}

const Fixed &Fixed::min(const Fixed &fp1, const Fixed &fp2){
	return (fp1 < fp2) ? fp1 : fp2;
}

const Fixed &Fixed::max(const Fixed &fp1, const Fixed &fp2){
	return (fp1 > fp2) ? fp1 : fp2;
}

// functions
int Fixed::getRawBits( void ) const{
	return (_fixed);
}

void Fixed::setRawBits( int const raw ){
	_fixed = raw;
}

float Fixed::toFloat(void) const{
	return (_fixed / float(1 << _NumberFractBits));
}

int Fixed::toInt(void) const{
	return (_fixed / (1 << _NumberFractBits));
}

std::ostream& operator<< (std::ostream &out, const Fixed &fixed){
	out << fixed.toFloat();
	return(out);
}