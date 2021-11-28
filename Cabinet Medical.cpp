#include "Header.h"

int main()
{
	Date A, C, B(9, 8, 2001);
	Personne X("adnane", "errazine", B), Y, Z = X;
	Y = X;
	cout << Y << X << Z;

}
