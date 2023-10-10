#include <iostream>
#include "header/boiteEnMateriaux.h"

using std::cout, std::cin, std::endl;

void testBoite(){
    boite b{3};
    cout<<b.largeur()<<' '<<b.hauteur()<<' '<<b.profondeur()<<endl;

    boite b1{1,2,3};
    cout<<b1.largeur()<<' '<<b1.hauteur()<<' '<<b1.profondeur()<<endl;
}

void testBoiteEnMateriaux(){
    boiteEnMateriaux b{3, "bois"};
    cout<<b.largeur()<<' '<<b.hauteur()<<' '<<b.profondeur()<<' '<<b.materiaux()<<endl;

    boiteEnMateriaux b1{1,2,3,"chène"};
    cout<<b1.largeur()<<' '<<b1.hauteur()<<' '<<b1.profondeur()<<' '<<b1.materiaux()<<endl;
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    testBoiteEnMateriaux();
    return 0;
}
