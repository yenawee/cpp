#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed {
    private :
        int _n;
        static const int _N_OF_FRACTIONAL_BITS = 8;
    
    public :
        Fixed();
        ~Fixed();
        Fixed(Fixed const & src);
        Fixed(int const n);
        Fixed(float const n);
        Fixed & operator=(Fixed const & rhs);
        int getRawBits( void ) const;
        void setRawBits( int const raw );
        float toFloat(void) const;
        int toInt(void) const;
};

#endif