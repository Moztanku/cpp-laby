#pragma once

class Figury{
	public:
		virtual double circumference()=0;
		virtual double area()=0;
};

class Czworokat : public Figury{
	public:
		Czworokat(double _b1,double _b2,double _b3,double _b4,double _kat);
		double circumference() override;
		double area() override;
	protected:
		double b1,b2,b3,b4,kat;
};

class Kwadrat : public Czworokat{
	public:
		Kwadrat(double b);
};

class Prostokat : public Czworokat{
	public:
		Prostokat(double a,double b);
};

class Romb : public Czworokat{
	public:
		Romb(double b,double kat);
};

class Pieciokat : public Figury{
	public:
		Pieciokat(double _b);
		double circumference() override;
		double area() override;
	protected:
		double b;
};

class Szesciokat : public Figury{
	public:
		Szesciokat(double _b);
		double circumference() override;
		double area() override;
	protected:
		double  b;
};

class Kolo : public Figury{
	public:
		Kolo(double _r);
		double circumference() override;
		double area() override;
	protected:
		double r;
};