//
// Created by Arthur Mathis on 10/10/2023.
//

#include "../header/boite.h"

boite::boite(int largeur, int hauteur, int profondeur)
    :d_largeur{largeur}, d_hauteur{hauteur}, d_profondeur{profondeur}{
}

boite::boite(int taille)
    :d_largeur{taille}, d_hauteur{taille}, d_profondeur{taille}{
}

int boite::largeur() const{
    return d_largeur;
}

int boite::hauteur() const{
    return d_hauteur;
}

int boite::profondeur() const{
    return d_profondeur;
}