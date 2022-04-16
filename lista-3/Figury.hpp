#pragma once

class Figura {
	protected:
		virtual void circumference() {};
		virtual void area() {};

		double circValue = 1.0;
		double areaValue = 1.0;
	public:
		inline double returnCircumference()const { return circValue; };
		inline double returnArea()const { return areaValue; };
};

class Kolo : public Figura {
	public:
		Kolo(double _radius);
	private:
		void circumference()override;
		void area()override;
		double radius = 1.0;
};

class Czworokat : public Figura {
	public:
		Czworokat(double _b1=1.0, double _b2=1.0, double _b3=1.0, double _b4=1.0, double _angle=180.0);
	private:
		void circumference()override;
		void area()override;
		double b1 = 1.0;
		double b2 = 1.0;
		double b3 = 1.0;
		double b4 = 1.0;
		double angle = 90.0;
};

class Kwadrat : public Czworokat {
	public:
		Kwadrat(double _b);
};

class Prostokat : public Czworokat {
	public:
		Prostokat(double _b1=1.0, double _b2=1.0);
};

class Romb : public Czworokat {
	public:
		Romb(double _b=1.0, double _angle = 180.0);
};

class Pieciokat : public Figura {
	public:
		Pieciokat(double _b = 1.0);
	private:
		void circumference()override;
		void area()override;
		double b = 1.0;
};

class Szesciokat : public Figura {
	public:
		Szesciokat(double _b = 1.0);
	private:
		void circumference()override;
		void area()override;
		double b = 1.0;
};