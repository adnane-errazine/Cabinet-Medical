#include "Personne.h"


Personne::Personne()
{
	nom = "NOM";
	prenom = "PRENOM";
	Date X;
	date = X;
}
Personne::Personne(string n, string p, Date X)
{
	this->nom = p;
	prenom = n;
	date = X;
}
Personne::Personne(Personne const& P)
{
	nom = P.nom;
	prenom = P.prenom;
	date = P.date;
}
Personne::~Personne()
{
}
void Personne::setNom(string a)
{
	this->nom = a;
}
void Personne::setPrenom(string a)
{
	this->prenom = a;
}
void Personne::setDate(Date D)
{
	date = D;
}
string Personne::getNom()
{
	return this->nom;
}
string Personne::getPrenom()
{
	return this->prenom;
}
Date Personne::getDate()
{
	return this->date;
}
Personne& Personne::operator=(Personne const& P)
{
	nom = P.nom;
	prenom = P.prenom;
	date = P.date;
	return *this;
}
bool Personne::operator==(Personne const& P)
{
	return date == P.date && nom == P.nom && prenom == P.prenom;
}
bool Personne::operator!=(Personne const& P)
{
	return !(*this == P);
}
bool Personne::operator>(Personne const& P)
{
	return date > P.date;
}
bool Personne::operator>=(Personne const& P)
{
	return date >= P.date;
}
bool Personne::operator<(Personne const& P)
{
	return date < P.date;
}
bool Personne::operator<=(Personne const& P)
{
	return date <= P.date;
}
void Personne::afficherPersonne()
{
	cout << "[" << this->prenom << "],[" << this->nom << "]" << endl;
	this->date.afficherDate();
}
ostream& operator<<(ostream& F, Personne& P)
{
	return F << "Personne[" << P.nom << ',' << P.getPrenom() << ',' << P.date << ']' << endl;
}