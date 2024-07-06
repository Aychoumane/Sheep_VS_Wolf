#include "main.h"

void jouer(Plateau plateau) {
	plateau.init_plateau();
    while (true) {
    	if(plateau.nb_moutons != 0 && plateau.nb_loups != 0){
	        plateau.jouer_tour();
	        plateau.afficher_plateau();
	        std::this_thread::sleep_for(std::chrono::milliseconds(100));
	    	plateau.nb_tour++;
	    } else {
	        plateau.afficher_plateau();
	    	cout << "---------------| Simulation terminée, elle aura durée " << plateau.nb_tour << " tours. |---------------" << endl;
	    	break;
	    }
    }
}

int main(void){
	// Création du plateau de jeu.
	Plateau plateau_de_jeu;
	jouer(plateau_de_jeu);

	return 0;
}