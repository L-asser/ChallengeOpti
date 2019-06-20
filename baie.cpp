#include "baie.h"

using namespace std;

baie::baie(){
    for (int i=0; i<NB_CONTENEURS; i++)
    {
    	_tabConteneurs[i][0] = 0;
    	_tabConteneurs[i][1] = 0;
    }
}

baie::baie(int a){
	int conteneurId;

	string balec;
	char balec2;

	string const nomFichierPosition = "InstancesCRP/1_position.csv";

	ifstream fichier2(nomFichierPosition.c_str());

	if (fichier2)
	{
		getline(fichier2, balec);
		for (int i=0; i<NB_CONTENEURS; i++)
		{
			for(int i=0; i<2; i++)
			{
				fichier2.get(balec2);
			}
			fichier2 >> conteneurId;
			for(int i=0; i<3; i++)
			{
				fichier2.get(balec2);
			}
			fichier2 >> _tabConteneurs[conteneurId-1][0];
			for(int i=0; i<3; i++)
			{
				fichier2.get(balec2);
			}
			fichier2 >> _tabConteneurs[conteneurId-1][1];

			fichier2.get(balec2); //retour au debut de la ligne suivante
			fichier2.get(balec2);

			//cout << "conteneur" << conteneurId << " : (" << _tabConteneurs[conteneurId-1][0] << ", " << _tabConteneurs[conteneurId-1][1] << ")" << endl;
		}
	}
	else
	{
		cout << "ERREUR: Impossible d'ouvrir le fichier." << endl;
	}

    for (int i=0; i<NB_PILES; i++)
    {
    	pile nouveau(i, _tabConteneurs);
    	_tabPiles[i] = nouveau;//(pile*) malloc(sizeof(pile));

    	cout << "id pile : " << _tabPiles[i].get_indicePile() << endl << endl;
    }
}




baie::~baie(){}

void baie::ajout(int idConteneur, int idPile){

}

int baie::retrait(int idPile){
	if(idPile<NB_PILES && idPile>=0 && _tabPiles[idPile].get_hauteur()>0)
	{
		_tabPiles[idPile].newDernier();
		return 0;
	}
	else
	{
		cout << "retrait impossible : " << idPile << endl;
		return -1;
	}
}

void baie::fprintPile(int idPile){
	_tabPiles[idPile].fprint();
}