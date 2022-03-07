/*
BOUVIER Axel
CÔTE Geoffrey
07/03/2022
fichier mon1erprog.c

ce que fait le programme : calcul des n premiers termes u(n)
de la suite de Fibonacci (telle que u(n+1) = u(n) + u(n-1))
définie par u(0) = 1 et u(1) = (1-racine(5))/2
*/
// pour la librairie standard
#include <cstdlib> 
#include <iostream> // pour lecture/écriture
#include <cmath> // pour la racine carrée sqrt et la puissance pow

using namespace std;

int main2(void)
{
	// déclaration des constantes et variables
	const float r = (1-sqrt(5))/2;
	int i,n;
	float uprec, ucour, usuiv; // pour u(n-1), u(n), u(n+1)

	// initialisations
	cout << "calcul des n premiers termes de la suite de Fibonacci" << endl;
	cout << "avec u0=1 et u1=(1-racine(5))/2" << endl;
	cout << "n = ? " << endl;
    cin >> n;
	uprec = 1;
	ucour = r;

	// calcul de u(2), ..., u(n)
	for (i=2;i<=n;i=i+1)
	{
		usuiv = ucour + uprec;
		uprec = ucour;
		ucour = usuiv;
		cout << "u(" << i << ") = " << ucour << endl;
		// compléter avec l'affichage de la puissance i de r : pow(r,i)
    cout << "r^" << i << " = " << pow(r,i)<<endl;
		cout << endl; // pour passer à la ligne
	}

	return (EXIT_SUCCESS);
}
