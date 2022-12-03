#include "Fixed.hpp" 

// constructor and destructor
 
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

// copy assignment operator
        
Fixed & Fixed::operator=(Fixed const & rhs){
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &rhs){
        this->_n = rhs.getRawBits();
    }
    return *this;
}

 // comparison
bool    Fixed::operator>(Fixed const & rhs) const{
    if (this->getRawBits() > rhs.getRawBits()){
        return true;
    }
    return false;
};

bool    Fixed::operator<(Fixed const & rhs) const{
    if (this->getRawBits() < rhs.getRawBits()){
        return true;
    }
    return false;
}

bool    Fixed::operator>=(Fixed const & rhs) const{
     if (this->getRawBits() >= rhs.getRawBits()){
        return true;
    }
    return false; 
}

bool    Fixed::operator<=(Fixed const & rhs) const{
    if (this->getRawBits() <= rhs.getRawBits()){
        return true;
    }
    return false; 
}

bool    Fixed::operator==(Fixed const & rhs) const{
    if (this->getRawBits() == rhs.getRawBits()){
        return true;
    }
    return false; 
}

bool    Fixed::operator!=(Fixed const & rhs) const{
    if (this->getRawBits() != rhs.getRawBits()){
        return true;
    }
    return false; 
}

// arithmetic
Fixed   Fixed::operator+(Fixed const & rhs) const{
    return Fixed(this->toFloat() + rhs.toFloat());
}
Fixed   Fixed::operator-(Fixed const & rhs) const{
    return Fixed(this->toFloat() - rhs.toFloat());
}

Fixed   Fixed::operator*(Fixed const & rhs) const{
    return Fixed(this->toFloat() * rhs.toFloat());
}

Fixed   Fixed::operator/(Fixed const & rhs) const{
    return Fixed(this->toFloat() / rhs.toFloat());
}

// increment, decrement
Fixed & Fixed::operator++(){
    _n++;
    return *this;
}

Fixed Fixed::operator++(int){
    Fixed temp(*this);
    _n++;
    return temp;
}

Fixed & Fixed::operator--(){
    _n--;
    return *this;
}

Fixed Fixed::operator--(int){
    Fixed temp(*this);
    _n--;
    return temp;
}

// methods
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

Fixed & Fixed::min(Fixed & f1, Fixed & f2){
    if (f1 > f2){
        return f2;
    }
    return f1;
}

const Fixed & Fixed::min(Fixed const & f1, Fixed const & f2){
    if (f1 > f2){
        return f2;
    }
    return f1;
}

Fixed & Fixed::max(Fixed & f1, Fixed & f2){
    if (f1 > f2){
        return f1;
    }
    return f2;
}

const Fixed & Fixed::max(Fixed const & f1, Fixed const & f2){
    if (f1 > f2){
        return f1;
    }
    return f2;
}

std::ostream & operator<<(std::ostream & o, Fixed const & rhs){
    o << rhs.toFloat();
    return o;
}