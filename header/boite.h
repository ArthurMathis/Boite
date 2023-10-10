//
// Created by Arthur Mathis on 10/10/2023.
//

#ifndef TD3_BOITE_H
#define TD3_BOITE_H

/**
 * @brief Class représentant l'objet boite
 */
class boite {
public:
    boite(int largeur, int hauteur, int profondeur);
    boite(int taille); //boîte cubique

    /**
     * @brief Méthode retournant la largeur de la boite
     * @return
     */
    int largeur() const;
    /**
     * @brief Méthode retournant la hauteur de la boite
     * @return
     */
    int hauteur() const;
    /**
     * @brief Méthode retournant la profondeur de la boite
     * @return
     */
    int profondeur() const;

private:
    int d_largeur, d_profondeur, d_hauteur;
};


#endif //TD3_BOITE_H
