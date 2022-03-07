#include <iostream>
using namespace std;

int main3(void) {
  //déclaration des variables
  int nbLancers, nb1, nb2, nb3, nb4, nb5, nb6;
  //Initialisation des variables
  nbLancers = 0;
  nb1 = 0; nb2 = 0; nb3 = 0; nb4 = 0; nb5 = 0; nb6 = 0;

  int valeur;
  cin >> valeur;
  while (valeur > 0 && valeur < 7) {
    // Traitement de la valeur lue
    switch (valeur) {
      case 1:
        nb1++;
        break;
      case 2:
        nb2++;
        break;
      case 3:
        nb3++;
        break;
      case 4:
        nb4++;
        break;
      case 5:
        nb5++;
        break;
      case 6:
        nb6++;
        break;
    }
    nbLancers=nbLancers+1;
    cin >> valeur;
  }
  cout << endl;
  if (nbLancers != 0) {
    //Calcul des fréquences
    cout << "f1 = " << float(nb1)/nbLancers << endl;
    cout << "f2 = " << float(nb2)/nbLancers << endl;
    cout << "f3 = " << float(nb3)/nbLancers << endl;
    cout << "f4 = " << float(nb4)/nbLancers << endl;
    cout << "f5 = " << float(nb5)/nbLancers << endl;
    cout << "f6 = " << float(nb6)/nbLancers << endl;
  } else {
    cout << "Aucune valeur entre 1 et 6";
  }
  return 0;
}