#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <string>

class Fixed{
	private:
		int _fixed;
		static const int _NumberFractBits = 8;
	public:
		Fixed();
		~Fixed();
		Fixed(const Fixed &copy);
		Fixed& operator= (const Fixed &equals);
		int getRawBits( void ) const;
		void setRawBits( int const raw );
};

#endif