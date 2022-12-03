#include "Point.hpp"

bool checkInside(Point const p1, Point const p2, Point const p3, Point const p){
    Fixed A_x(p2.getX() - p1.getX());
    Fixed A_y(p2.getY() - p1.getY());
    Fixed B_x(p3.getX() - p1.getX());
    Fixed B_y(p3.getY() - p1.getY());
    Fixed C_x(p.getX() - p1.getX());
    Fixed C_y(p.getY() - p1.getY());
    if ((A_x * B_y - A_y * B_x) * (A_x * C_y - A_y * C_x) <= 0)
        return false;
    return true;
}

bool bsp( Point const a, Point const b, Point const c, Point const point){
    if (!checkInside(a,b,c,point)) return false;
    if (!checkInside(b,c,a,point)) return false;
    if (!checkInside(c,a,b,point)) return false;
    return true; 
}