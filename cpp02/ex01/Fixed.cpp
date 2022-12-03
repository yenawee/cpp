#include "Fixed.hpp" 
 
Fixed::Fixed() : _n(0) {
     std::cout << "Default constructor called" << std::endl;
 };

Fixed::Fixed(Fixed const & src){
    std::cout << "Copy constructor called" << std::endl;
    *this = src;
}

Fixed::Fixed(int const n){
    std::cout << "Int constructor called" << std::endl;
    _n = n << _N_OF_FRACTIONAL_BITS;
}

Fixed::Fixed(float const n){
    std::cout << "Float constructor called" << std::endl;
    _n = std::roundf(n * (1 << _N_OF_FRACTIONAL_BITS));
}

Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
}
        
Fixed & Fixed::operator=(Fixed const & rhs){
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &rhs){
        this->_n = rhs.getRawBits();
    }
    return *this;
}

int Fixed::getRawBits( void ) const{
    return _n;
}

void Fixed::setRawBits( int const raw ){
    std::cout << "set Rawbits " << _n << "to" << raw << std::endl;
    _n = raw;
}

float Fixed::toFloat(void) const{
    return (_n / float(1 << _N_OF_FRACTIONAL_BITS));
}

int Fixed::toInt(void) const{
    return (_n >> _N_OF_FRACTIONAL_BITS);
}

std::ostream & operator<<(std::ostream & o, Fixed const & rhs){
    o << rhs.toFloat();
    return o;
}