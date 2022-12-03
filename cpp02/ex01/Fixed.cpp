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
    n << _N_OF_FRACTIONAL_BITS;
    _n = n;
}

Fixed::Fixed(float const n){
    std::cout << "Float constructor called" << std::endl;

}

Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
}
        
Fixed & Fixed::operator=(Fixed const & rhs){
    std::cout << "Copy assignment operator called" << std::endl;
    this->_n = rhs.getRawBits();
    return *this;
}

int Fixed::getRawBits( void ) const{
    std::cout << "getRawBits member function called" << std::endl;
    return _n;
}

void Fixed::setRawBits( int const raw ){
    std::cout << "set Rawbits " << _n << "to" << raw << std::endl;
    _n = raw;
}

float Fixed::toFloat(void) const{

}

int Fixed::toInt(void) const{
    
}