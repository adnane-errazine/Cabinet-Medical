#pragma once
#include "Header.h"

class Date
{
private:
	int jour;
	int mois;
	int annee;

public:
	Date();
	Date(int, int, int);
	Date(Date const&);//constructeur de copie
	~Date();//destructeur
	void setJour(int);
	void setMois(int);
	void setAnnee(int);
	int getJour();
	int getMois();
	int getAnnee();
	Date& operator=(Date const&);//operateur d'affectation
	bool operator==(Date const&);
	bool operator!=(Date const&);
	bool operator>(Date const&);
	bool operator>=(Date const&);
	bool operator<(Date const&);
	bool operator<=(Date const&);

	void afficherDate();

	friend ostream& operator<<(ostream&, Date&);

};