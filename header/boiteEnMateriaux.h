//
// Created by Arthur Mathis on 10/10/2023.
//

#ifndef TD3_BOITEENMATERIAUX_H
#define TD3_BOITEENMATERIAUX_H

#include "boite.h"
#include <string>

using std::string;

/**
 * @brief Class boiteEnMateriaux héritant de la class boite et contenant le materiau utilisé pour la conception de la boite
 */
class boiteEnMateriaux : public boite {
public:
    boiteEnMateriaux(int taille, const string &materiaux);
    boiteEnMateriaux(int largeur, int hauteur, int profondeur, const string &materiaux);

    /**
     * @brief Méthode retournant le materiau utilisé dans la construction de la boite
     * @return
     */
    string materiaux() const;

private :
    string d_materiaux;
};


#endif //TD3_BOITEENMATERIAUX_H
