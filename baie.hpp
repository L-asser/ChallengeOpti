#ifndef BAIE_HPP
#define BAIE_HPP


#define NB_CONTENEURS 100
#define NB_PILES 30
#define HAUTEUR_MAX 10
 
// Includes ------------------------------------------------------------------
#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime> 



#include "pile.hpp"
#include "conteneur.hpp"
// Constants -------------------------------------------------------------------



// structures-----------------------------------------------------------------------





//class baie-----------------------------------------------------------------------

class baie{
    public:
        baie();
        ~baie();
        
    private:
        int _tabConteneurs[NB_CONTENEURS][2];// tableau des conteneurs avec les positions dans la baie
        pile* _tabPiles[NB_PILES];//tableau des piles de la baie
};

#endif