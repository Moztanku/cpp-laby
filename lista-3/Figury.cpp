#include"Figury.hpp"
#include<cmath>
#include<iostream>
#define PI 3.141582653
#define RAD(X) X*PI/180.0
#define PENTAGON_CONST 1.72047740059;
#define HEXAGON_CONST 2.59807621135;

	Czworokat::Czworokat(double _b1,double _b2,double _b3,double _b4,double _kat){
		b1 = _b1;
        b2 = _b2;
        b3 = _b3;
        b4 = _b4;
        kat = 2.0*_kat;
	};
	double Czworokat::circumference(){
		return b1+b2+b3+b4;
	};
	double Czworokat::area(){
		const double s = circumference()/2.0;
		return sqrt((s-b1)*(s-b2)*(s-b3)*(s-b4)-(b1*b2*b3*b4*pow(cos(RAD(kat)/2.0),2.0)));
	};

	Kwadrat::Kwadrat(double b):Czworokat(b,b,b,b,90.0){};
	Prostokat::Prostokat(double a,double b):Czworokat(a,a,b,b,90.0){};
	Romb::Romb(double b,double kat):Czworokat(b,b,b,b,kat){};

	Pieciokat::Pieciokat(double _b){
		b = _b;
	};
	double Pieciokat::circumference(){
		return 5.0*b;
	};
	double Pieciokat::area(){
		return pow(b,2.0)*PENTAGON_CONST;
	};

	Szesciokat::Szesciokat(double _b){
		b=_b;
	};
	double Szesciokat::circumference(){
		return 6.0*b;
	};
	double Szesciokat::area(){
		return pow(b,2.0)*HEXAGON_CONST;
	};
	Kolo::Kolo(double _r){
		r=_r;
	};
	double Kolo::circumference(){
		return 2.0*PI*r;
	};
	double Kolo::area(){
		return pow(r,2.0)*PI;
	};

#undef PI
#undef RAD
#undef PENTAGON_CONST
#undef HEXAGON_CONST