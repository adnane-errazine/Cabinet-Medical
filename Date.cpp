#include "Header.h"

Date::Date()
{
	jour = 1;
	mois = 1;
	annee = 2000;
}
Date::Date(int a, int b, int c)
{
	jour = a;
	mois = b;
	annee = c;
}
Date::Date(Date const& D)
{
	this->jour = D.jour;
	mois = D.mois;
	annee = D.annee;
}
Date::~Date()
{

}
Date& Date::operator=(Date const& D)
{
	this->jour = D.jour;
	mois = D.mois;
	annee = D.annee;
	return *this;
}
void Date::setJour(int jour)
{
	(*this).jour = jour;
}
void Date::setMois(int M)
{
	this->mois = M;
}
void Date::setAnnee(int A)
{
	annee = A;
}
int Date::getJour()
{
	return jour;
}
int Date::getMois()
{
	return mois;
}
int Date::getAnnee()
{
	return annee;
}

bool Date::operator==(Date const& X)
{
	if (annee == X.annee && mois == X.mois && jour == X.jour)
	{
		return true;
	}
	return false;
}
bool Date::operator!=(Date const& X) // const& x diff const &x 
{
	if (*this == X)
	{
		return false;
	}
	return true;
}
bool Date::operator>(Date const& X)
{
	if (annee > X.annee)
	{
		return true;
	}
	else if (annee < X.annee)
	{
		return false;
	}
	else {
		if (mois > X.mois)
		{
			return true;
		}
		else if (mois < X.mois)
		{
			return false;
		}
		else
		{
			if (jour > X.jour)
			{
				return true;
			}
			else { return false; }

		}
	}

}
bool Date::operator>=(Date const& X)
{
	if (*this > X || *this == X)
	{
		return true;
	}
	return false;
}
bool Date::operator<(Date const& X)
{
	if (*this >= X)
	{
		return false;
	}
	return true;
}
bool Date::operator<=(Date const& X)
{
	if (*this > X)
	{
		return false;
	}
	return true;
}

void Date::afficherDate()
{
	cout << this->jour << "/" << this->mois << "/" << this->annee << endl;
}
ostream& operator<<(ostream& F, Date& D)
{
	F << D.getJour() << "/" << D.mois << "/" << D.annee;
	return F;
}

