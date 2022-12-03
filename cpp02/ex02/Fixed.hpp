#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed {
    private :
        int _n;
        static const int _N_OF_FRACTIONAL_BITS = 8;
    
    public :
        // constructor and destructor
        Fixed();
        ~Fixed();
        Fixed(Fixed const & src);
        Fixed(int const n);
        Fixed(float const n);

        // copy assignment operator
        Fixed & operator=(Fixed const & rhs);

        // comparison
        bool    operator>(Fixed const & rhs) const;
        bool    operator<(Fixed const & rhs);
        bool    operator>=(Fixed const & rhs);
        bool    operator<=(Fixed const & rhs);
        bool    operator==(Fixed const & rhs);
        bool    operator!=(Fixed const & rhs);

        // arithmetic
        Fixed   operator+(Fixed const & rhs);
        Fixed   operator-(Fixed const & rhs);
        Fixed   operator*(Fixed const & rhs);
        Fixed   operator/(Fixed const & rhs);

        // increment, decrement
        Fixed & operator++();
        Fixed operator++(int);
        Fixed & operator--();
        Fixed operator--(int);

        // methods
        int getRawBits( void ) const;
        void setRawBits( int const raw );
        float toFloat(void) const;
        int toInt(void) const;

        static Fixed & min(Fixed & f1, Fixed & f2);
        static Fixed & min(Fixed const & f1, Fixed const & f2);
        static Fixed & max(Fixed & f1, Fixed & f2);
        static Fixed & max(Fixed const & f1, Fixed const & f2);
};

std::ostream & operator<<(std::ostream & o, Fixed const & rhs);

#endif