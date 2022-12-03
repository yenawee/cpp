#include "Point.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const point){
    float alpha;
    float beta;

    Fixed v_ab_x(b.getX() - a.getX());
    Fixed v_ab_y(b.getY() - a.getY());

    Fixed v_ac_x(c.getX() - a.getX());
    Fixed v_ac_y(c.getY() - a.getY());

    



}