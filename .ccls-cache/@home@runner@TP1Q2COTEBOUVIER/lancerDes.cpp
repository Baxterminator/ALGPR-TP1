#include <iostream>
#include <array>
using namespace std;

int main3(void) {
  //déclaration des variables
  int nbLancers = 0;

  array<int,100> tab = {};

  int valeur;
  cin >> valeur;
  while (valeur > 0 && valeur < 101) {
    // Traitement de la valeur lue
    tab[valeur-1]=tab[valeur-1]+1;
    nbLancers=nbLancers+1;
    cin >> valeur;
  }
  cout << endl;
  if (nbLancers != 0) {
    //Calcul des fréquences
    for (int i=0; i<100; i=i+1)
      cout <<"f" << i+1 << " = " << float(tab[i])/nbLancers << endl;
  } else {
    cout << "Aucune valeur entre 1 et 6";
  }
  return 0;
}