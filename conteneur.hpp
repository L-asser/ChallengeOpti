#ifndef CONTENEUR_HPP
#define CONTENEUR_HPP



 
// Includes ------------------------------------------------------------------
#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime> 



// Constants -------------------------------------------------------------------



// structures-----------------------------------------------------------------------





//class baie-----------------------------------------------------------------------

class conteneur{
    public:
        conteneur();
        conteneur(int id, int indiceHauteur);
        ~conteneur();
        
    private:
    	int _id;
        int _indiceHauteur;
        conteneur* suivant;

};

#endif