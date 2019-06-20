#ifndef PILE_HPP
#define PILE_HPP



 
// Includes ------------------------------------------------------------------
#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime> 

// Constants -------------------------------------------------------------------



// structures-----------------------------------------------------------------------


#include "conteneur.hpp"


//class baie-----------------------------------------------------------------------

class pile{

    public:
        pile();
        pile(int indicePile, int hauteur, conteneur pileConteneurs[3]);
        ~pile();
        
    private:
        int _indicePile;
        int _hauteur; // hauteur de la pile
        conteneur* dernier;
};

#endif