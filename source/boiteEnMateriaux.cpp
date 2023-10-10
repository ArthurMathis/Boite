//
// Created by Arthur Mathis on 10/10/2023.
//

#include "../header/boiteEnMateriaux.h"

boiteEnMateriaux::boiteEnMateriaux(int taille, const string &materiaux)
    :boite{taille}, d_materiaux{materiaux}{
}

boiteEnMateriaux::boiteEnMateriaux(int largeur, int hauteur, int profondeur, const string &materiaux)
    :boite{largeur, hauteur, profondeur}, d_materiaux{materiaux}{
}


string boiteEnMateriaux::materiaux() const{
    return d_materiaux;
}