#include "cadre.h"
#include <iostream>

using namespace std;

// Constructeur
cadre::cadre()
{
	this->m_fX = 10.0f;
	this->m_fY = 5.0f;

	this->m_fHeight = 5.0f;
	this->m_fWidth = this->m_fHeight*2;

	this->m_cMotif = '*';

	// cout << "Creation objet de type cadre" << endl;
}

cadre::cadre(float fX, float fY, float fHeight, float fWidth)
{
	this->m_fX = fX;
	this->m_fY = fY;

	this->m_fHeight = fHeight;
	this->m_fWidth = fWidth;

	this->m_cMotif = '*';

	// cout << "Creation objet de type cadre" << endl;
}

// Destructeur
cadre::~cadre()
{
	
}


// Fonctions membres
void cadre::showCarac() const
{
	cout << "Position en X : " << this->m_fX << endl;
	cout << "Position en Y : " << this->m_fY << endl;

	cout << "Hauteur : " << this->m_fHeight << endl;
	cout << "Largeur : " << this->m_fWidth << endl;
}

float cadre::mathArea() const
{
	return this->m_fHeight * this->m_fWidth;
}

float cadre::mathPerimeter() const
{
	return this->m_fHeight * 2 + this->m_fWidth * 2;
}

bool cadre::isCarre() const
{
	return this->m_fHeight == this->m_fWidth;
}

void cadre::drawCadre() const
{
	for (int i = 0; i < this->m_fHeight; i++)
	{
		for (int j = 0; j < this->m_fWidth; j++)
		{
			if (i == 0 || i == this->m_fHeight-1)
			{
				cout << this->m_cMotif << " ";
			}
			else if (j == 0 || j == this->m_fWidth-1)
			{
				cout << this->m_cMotif << " ";
			}
			else {
				cout << "  ";
			}
		}

		cout << endl;
	}
}

void cadre::rotateCadre(float angle)
{
	float fX1 = this->m_fX + this->m_fWidth;
	float fY1 = this->m_fY;

	float fX2 = this->m_fX;
	float fY2 = this->m_fY + this->m_fHeight;

	float fX3 = this->m_fX + this->m_fWidth;
	float fY3 = this->m_fY + this->m_fHeight;
}


// Fonctions amies
ostream& operator<<(ostream& os, const cadre& C)
{
	os << "X : " << C.get_fX() << ", Y : " << C.get_fY() << ", Hauteur : " << C.get_fHeight() << ", Largeur : " << C.get_fWidth() << endl;
	return os;
}


// Setters
void cadre::set_fX(float fX)
{
	this->m_fX = fX;
}

void cadre::set_fY(float fY)
{
	this->m_fY = fY;
}

void cadre::set_fHeight(float fHeight)
{
	this->m_fHeight = fHeight;
}

void cadre::set_fWidth(float fWidth)
{
	this->m_fWidth = fWidth;
}

// Getters
float cadre::get_fX() const
{
	return this->m_fX;
}

float cadre::get_fY() const
{
	return this->m_fY;
}

float cadre::get_fHeight() const
{
	return this->m_fHeight;
}

float cadre::get_fWidth() const
{
	return this->m_fWidth;
}
