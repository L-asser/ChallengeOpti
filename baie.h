#ifndef BAIE_HPP
#define BAIE_HPP

// Includes ------------------------------------------------------------------
#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <fstream>

#include "pile.h"
//#include "main.hpp"
#include "constantes.h"
// Constants -------------------------------------------------------------------



// structures-----------------------------------------------------------------------





//class baie-----------------------------------------------------------------------

class baie{
    public:
        baie();
        baie(int a);
        ~baie();
        void ajout(int idConteneur, int idPile);
        int retrait(int idPile);
        void fprintPile(int idPile);
        
    private:
        int _tabConteneurs[NB_CONTENEURS][2];// tableau des conteneurs avec les positions dans la baie
        pile _tabPiles[NB_PILES];//tableau des piles de la baie
};

#endif