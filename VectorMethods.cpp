#include "stdafx.h"
#include "Vector.h"
#include <iostream>
#include <math.h>


//CONSTRUCTORS
Vector::Vector(double x, double y) : X(x), Y(y){
	int k=0;
	length = sqrt(pow(x, 2) + pow(y, 2));
	Mass[k] = this;
	k++;
}
Vector::Vector() : Vector(NULL, NULL){}
//----------------------------------------------------------------------------------------------------------------------
//----------------------------------------------------------------------------------------------------------------------


//METHODS OF VECTOR
void Vector::setX(double x){
	X = x;
}

void Vector::setY(double y){
	Y = y;
}

void Vector::show(){
	std::cout << "(" << X << "," << Y << ")" << std::endl;
}
//-----------------------------------------------------------------------------------------------------------------------
//----------------------------------------------------------------------------------------------------------------------




//OVERFLOW
Vector operator + (const Vector &one, const Vector &two){
	return Vector(one.X + two.X, one.Y + two.Y);
}

bool operator > (const Vector &one, const Vector &two){
	return one.length > two.length;
}

bool operator == (const Vector &one, const Vector &two){
	return one.length == two.length;
}

Vector Vector::operator () (int num){
	return *Mass[num];
}

