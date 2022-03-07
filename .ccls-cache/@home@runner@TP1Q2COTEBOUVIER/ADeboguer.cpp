/*
author : V. Tourre
date : 26-09-2017
file name : ADeboguer.cpp

ENONCÉ
Vous ne devez retirer aucune instruction de ce programme.
Vous devez ajouter les éléments nécessaires pour que la compilation
et l'éxécution se déroulent correctement

*/

#include <cstdlib>


void main(void){



	std::cout << "A votre avis, combien est-ce que je contiens de bogues ?" << std::endl
	std::cin >> nbBug;

	while(nbbug < 0) {
		std::cout << "Le nombre de bogues doit être positif ou nul" << std::endl;
		std::cin >> nbBug;
	}

	cout << "Vous avez dit que je contiens ";

	if(nbBug = 0 || nbBug == 1) {
		std::cout << nBug << " bogue" << std::endl;
	} else {
		std::cout << nbBug << " bogues" << std::endl;
	}

	return (EXIT_SUCCESS);
}

