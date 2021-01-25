#include "cadre.h"
#include <iostream>


/*
	Le static_cast permet plusieurs choses :
		- Explicite les conversions implicites supprimant du m�me fait tout avertissement que donnerait le compilateur si la conversion peut entrainer un risque (exemple : double vers int)
		- Converti vers et depuis n'importe quel type point� � partir d'un void* (exemple : void* vers char*)
		- Converti au travers d'une hi�rarchie de classe sans effectuer de v�rifications du lien explicite entre les classes (exemple : un classe de base vers une classe d�riv�e)

		-> Si vous ajoutez l'attribut const au type converti, il devient constant (exemple : char* vers const char*)
*/

/*
	Le seul r�le du dynamic_cast est de tester � l'execution si un pointeur d'un type de base est en fait un pointeur vers un type d�riv�
*/

/*
	Le const_cast permet de supprimer l'attribut constant ou volatile d'une r�f�rence d'un type point� (exemple : const char* vers char*)
*/

/*
	Le reinterpret_cast permet de convertir n'importe quel type point� en un autre m�me lorsque ceux-ci n'ont aucun rapport (exemple : int* vers double*) 
	ou de convertir un type point� en sa repr�sentation int�grale et vice-versa (exemple : int* vers int ou int vers int*)
*/

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