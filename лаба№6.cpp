// лаба№6.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "Vector.h"
#include <iostream>
using namespace std;

int main()
{	
	Vector control;

	Vector A(4, 6);
	Vector B = A(0); 
	Vector C(3, 1);
	Vector D = B + C;
	cout << "A = "; A.show();
	cout << "B = "; B.show();
	cout << "C = "; C.show();
	
	if (A == B)
		A.show();

	if (A > C)
		cout << "A > C" << endl;

	
	cout << "D = B + C = "; D.show();
	return 0;
	}


