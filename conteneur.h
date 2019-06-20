#ifndef CONTENEUR_HPP
#define CONTENEUR_HPP

#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <fstream>

#include "constantes.h"

// Includes ------------------------------------------------------------------


//class baie-----------------------------------------------------------------------

class conteneur{
    public:
        conteneur();
        conteneur(int id, int indiceHauteur, int tabConteneur[NB_CONTENEURS][2]);
        ~conteneur();
        int get_id();
        conteneur* get_suivant();
        void fprint();
        
    private:
    	int _id;
        int _indiceHauteur;
        conteneur* _suivant;
};

#endif