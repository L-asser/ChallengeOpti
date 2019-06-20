#include "pile.h"

pile::pile(){
    _indicePile = 0;
    _hauteur = 0;
}


pile::pile(int indicePile, int tabConteneur[NB_CONTENEURS][2]){
    _indicePile = indicePile;
    _hauteur = 0;

    int tabInt[NB_CONTENEURS][2];
    for (int i=0; i<NB_CONTENEURS; i++)
    {
    	tabInt[i][0]=0;
    	tabInt[i][1]=0;
    }

   	int max=0;
   	int indMax=-1;
    for (int i=0; i<NB_CONTENEURS; i++)
    {
    	if(tabConteneur[i][0] == _indicePile+1)
    	{
    		tabInt[i][0]=tabConteneur[i][0];
    		tabInt[i][1]=tabConteneur[i][1];
    		if(tabConteneur[i][1]>max)
    		{
    			max = tabConteneur[i][1];
    			indMax = i;
    		}
    	}
    }

    if(indMax != -1)
    {
    	_hauteur = max;
		conteneur nouveau(indMax, tabConteneur[indMax][1], tabInt);
    	_dernier = &nouveau;
    }
    else
    {
    	_dernier = NULL;
    }
	std::cout << "hauteur : " << _hauteur << std::endl;

    //std::cout << "id : " << _dernier->get_id() << std::endl;
}

pile::~pile(){}

int pile::get_indicePile(){
	return _indicePile;
}


int pile::get_hauteur(){
	return _hauteur;
}

void pile::newDernier(){
	std::cout << "hauteur : " << _hauteur << std::endl;
	_hauteur--;
	_dernier = _dernier->get_suivant();
}

void pile::fprint(){
	std::cout << "id pile : " << _indicePile << std::endl;
	_dernier->fprint();
}