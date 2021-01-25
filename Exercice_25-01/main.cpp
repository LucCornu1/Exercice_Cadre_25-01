#include "cadre.h"
#include <iostream>

using namespace std;

int main()
{
	cadre C1(1, 1, 10, 15);

	// C1.showCarac();

	// cout << endl;

	cout << C1;

	cout << endl;

	cout << "La surface du cadre est egale a " << C1.mathArea() << endl;

	cout << endl;

	cout << "Le perimetre du cadre est egale a " << C1.mathPerimeter() << endl;

	cout << endl;

	if (C1.isCarre())
	{
		cout << "C'est un carre !" << endl;
	}
	else
	{
		cout << "Ce n'est pas un carre !" << endl;
	}

	cout << endl;

	C1.drawCadre();
}