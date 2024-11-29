#include <iostream>
#include "Stack.h" 

int main() {
    try {
       
        Stack<int> pileInt(2);
        
        
        cout << "Ajout de 5, 10, et 15 a la pile :\n";
        pileInt.push(5);
        pileInt.push(10);
        pileInt.push(15);

        cout << "Pile apres ajout : ";
        pileInt.Afficher();


        
        cout << "Suppression d'un element...\n";
        pileInt.pop();

        cout << "Pile apres suppression : ";
        pileInt.Afficher();

        
        cout << "Element a l'index 0 : " << pileInt[0] << endl;

        
        Stack<string> pileString(3);

        cout << "Ajout de chaines de caracteres a la pile de chaines :\n";
        pileString.push("Bonjour");
        pileString.push("Monde");

        cout << "Pile de chaines apres ajout : ";
        pileString.Afficher();

        
        pileString.pop();
        cout << "Pile de chaines apres suppression : ";
        pileString.Afficher();

    }
    catch (const exception& e) {
        cout << "Erreur : " << e.what() << endl;
    }

    return 0;
}
