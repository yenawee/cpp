 #include "Point.hpp"
 
Point::Point() : x(0), y(0) {

}

Point::Point(float const x, float const y) : x(Fixed(x)), y(Fixed(y)) {

}

Point::Point(Point const & src) : x(src.getX()), y(src.getY()){

};

Point & Point::operator=(Point const & rhs){
    return *this;
}

Point::~Point(){};

const Fixed Point::getX() const{
    return this->x;
}

const Fixed Point::getY() const {
    return this->y;
}