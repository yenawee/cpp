#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed {
    private :
        int _n;
        static const int _N_OF_FRACTIONAL_BITS = 8;
    
    public :
        Fixed();
        ~Fixed();
        Fixed(Fixed const & src);
        Fixed & operator=(Fixed const & rhs);
        int getRawBits( void ) const;
        void setRawBits( int const raw );
};

#endif