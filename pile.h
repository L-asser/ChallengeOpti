#ifndef PILE_HPP
#define PILE_HPP

#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <fstream>

#include "conteneur.h"
//#include "main.hpp"
#include "constantes.h"

//class baie-----------------------------------------------------------------------

class pile{

    public:
        pile();
        pile(int indicePile, int tabConteneur[NB_CONTENEURS][2]);
        ~pile();
        int get_indicePile();
        int get_hauteur();
        void newDernier();
        void fprint();
        
    private:
        int _indicePile;
        int _hauteur; // hauteur de la pile
        conteneur* _dernier;
};

#endif