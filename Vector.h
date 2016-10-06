#pragma once
class Vector final {
private:
        double X;
		double Y;
		double length;
		static unsigned short int i;
		Vector *Mass[10];
public:
	Vector(double,double);
	Vector();
	~Vector(){};

	void setX(double);
	void setY(double);
	void show();

	friend Vector operator + (const Vector &one, const Vector &two);
	friend bool operator > (const Vector &one, const Vector &two);
	friend bool operator == (const Vector &one, const Vector &two);
	       Vector operator () (int num);
};