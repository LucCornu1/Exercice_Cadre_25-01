#pragma once
#include <ostream>

using namespace std;

class cadre
{
private:
	float m_fX;
	float m_fY;

	float m_fHeight;
	float m_fWidth;

	char m_cMotif;


public:
	// Constructeur
	cadre();

	cadre(float x, float y, float Height, float Width);

	// Destructeur
	~cadre();


	// Fonctions membres
	void showCarac() const;

	float mathArea() const;

	float mathPerimeter() const;

	bool isCarre() const;

	void drawCadre() const;

	void rotateCadre(float angle);
	

	// Fonctions amies
	friend ostream& operator<<(ostream& os, const cadre& C);


	// Setters (mutateurs)
	void set_fX(float fX);

	void set_fY(float fY);

	void set_fHeight(float fHeight);

	void set_fWidth(float fWidth);

	// Getters (assesseurs)
	float get_fX() const;

	float get_fY() const;

	float get_fHeight() const;

	float get_fWidth() const;
};
