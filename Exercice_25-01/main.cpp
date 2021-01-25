#include "cadre.h"
#include <iostream>


/*
	Le static_cast permet plusieurs choses :
		- Explicite les conversions implicites supprimant du même fait tout avertissement que donnerait le compilateur si la conversion peut entrainer un risque (exemple : double vers int)
		- Converti vers et depuis n'importe quel type pointé à partir d'un void* (exemple : void* vers char*)
		- Converti au travers d'une hiérarchie de classe sans effectuer de vérifications du lien explicite entre les classes (exemple : un classe de base vers une classe dérivée)

		-> Si vous ajoutez l'attribut const au type converti, il devient constant (exemple : char* vers const char*)
*/

/*
	Le seul rôle du dynamic_cast est de tester à l'execution si un pointeur d'un type de base est en fait un pointeur vers un type dérivé
*/

/*
	Le const_cast permet de supprimer l'attribut constant ou volatile d'une référence d'un type pointé (exemple : const char* vers char*)
*/

/*
	Le reinterpret_cast permet de convertir n'importe quel type pointé en un autre même lorsque ceux-ci n'ont aucun rapport (exemple : int* vers double*) 
	ou de convertir un type pointé en sa représentation intégrale et vice-versa (exemple : int* vers int ou int vers int*)
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