#include"Figury.hpp"
#include<cmath>
#include<iostream>
#define PI 3.141582653
#define RAD(X) X*PI/180.0
#define PENTAGON_CONST 1.72047740059;
#define HEXAGON_CONST 2.59807621135;


Kolo::Kolo(double _radius) :Figura(),radius{_radius} {
	circumference();
	area();
};
void Kolo::circumference() {
	circValue = 2.0 * PI * radius;
};
void Kolo::area() {
	areaValue = PI * pow(radius, 2.0);
};

Czworokat::Czworokat(double _b1, double _b2, double _b3, double _b4, double _angle) :b1{ _b1 }, b2{ _b2 }, b3{ _b3 }, b4{ _b4 }, angle{_angle} {
	circumference();
	area(); 
};
void Czworokat::circumference(){
	circValue = b1 + b2 + b3 + b4;
};
void Czworokat::area() {
	double s = circValue / 2.0;
	areaValue = sqrt((s-b1)*(s-b2)*(s-b3)*(s-b4)-((b1*b2*b3*b4)*pow(cos(RAD(angle/2)),2.0)));
};

Kwadrat::Kwadrat(double _b) : Czworokat(_b, _b, _b, _b, 180.0) {};
Prostokat::Prostokat(double _b1, double _b2) : Czworokat(_b1, _b1, _b2, _b2, 180.0) {};
Romb::Romb(double _b, double _angle) : Czworokat(_b, _b, _b, _b, _angle) {};

Pieciokat::Pieciokat(double _b) : b{ _b } {
	circumference();
	area();
};
void Pieciokat::circumference() {
	circValue = 5.0 * b;
};
void Pieciokat::area() {
	areaValue = pow(b, 2.0) * PENTAGON_CONST;
};

Szesciokat::Szesciokat(double _b) :b{ _b } {
	circumference();
	area();
};
void Szesciokat::circumference() {
	circValue = 6.0 * b;
};
void Szesciokat::area() {
	areaValue = pow(b, 2.0) * HEXAGON_CONST;
};

#undef PI
#undef RAD
#undef PENTAGON_CONST
#undef HEXAGON_CONST