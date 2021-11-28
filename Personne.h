#pragma once
#include"Header.h"
class Personne
{
private:
	string nom;
	string prenom;
	Date date;
public:
	Personne();
	Personne(string, string, Date);
	Personne(Personne const&);
	~Personne();
	void setNom(string);
	void setPrenom(string);
	void setDate(Date);
	string getNom();
	string getPrenom();
	Date getDate();
	Personne& operator=(Personne const&);
	bool operator==(Personne const&);
	bool operator!=(Personne const&);
	bool operator>(Personne const&);
	bool operator>=(Personne const&);
	bool operator<(Personne const&);
	bool operator<=(Personne const&);
	void afficherPersonne();
	friend ostream& operator<<(ostream&, Personne&);
};