#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <string>
#include <cmath>

class Fixed{
	private:
		int _fixed;
		static const int _NumberFractBits = 8;
	public:
		Fixed();
		Fixed(int value);
		Fixed(float value);
		Fixed(const Fixed &copy);
		~Fixed();

		Fixed& operator= (const Fixed &equals);

		bool operator == (const Fixed &twoEquals) const;
		bool operator != (const Fixed &notEquals) const;
		bool operator < (const Fixed &smaller) const;
		bool operator <= (const Fixed &smallerEquals) const;
		bool operator > (const Fixed &bigger) const;
		bool operator >= (const Fixed &biggerEquals) const;

		float toFloat(void) const;
		int toInt(void) const;
		int getRawBits( void ) const;
		void setRawBits( int const raw );
};

std::ostream& operator<< (std::ostream &out, const Fixed &point);

#endif