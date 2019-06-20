#include "conteneur.h"


conteneur::conteneur(){
	_id = 0;
    _indiceHauteur = 0;

}

conteneur::conteneur(int id, int indiceHauteur, int tabInt[NB_CONTENEURS][2]){
	_id = id;
	_indiceHauteur = indiceHauteur;

	tabInt[id][1]=0;

	int max=0;
   	int indMax=-1;
    for (int i=0; i<NB_CONTENEURS; i++)
    {
    	if(tabInt[i][1]>max)
    	{
    		max = tabInt[i][1];
    		indMax = i;
    	}
    }

    std::cout << "conteneur. id : " << _id << std::endl;

    if(indMax!=-1)
    {
    	conteneur nouveau(indMax, tabInt[indMax][1], tabInt);
    	_suivant = &nouveau;
    }
    else
    {
    	_suivant = NULL;
    	std::cout << "fin" << std::endl;
    }

}

conteneur::~conteneur(){}

int conteneur::get_id(){
	return _id;
} 

conteneur* conteneur::get_suivant(){
	std::cout << "gets : " << _suivant->get_id() << std::endl;
	return _suivant;
}

void conteneur::fprint(){
	std::cout << "idConteneur : " << get_id() << std::endl;
	if(_suivant!=NULL)
		_suivant->fprint();
	else
		std::cout << std::endl;
}