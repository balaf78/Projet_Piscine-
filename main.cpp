#include "grman/grman.h"
#include <iostream>

#include "graph.h"


int main()
{
    int saisie;

    /// A appeler en 1er avant d'instancier des objets graphiques etc...
    grman::init();

    /// Le nom du répertoire où se trouvent les images à charger
    grman::set_pictures_path("pics");

    /// Un exemple de graphe

    /// Un exemple de graphe
    std::cout << "Bonjour a tous, bienvenue dans ce nouveau cours sur la biodiversite" << std::endl;
    std::cout << "Nous allons etudier dans ce cours 3 graphes de dependance parmis 3 ecosystemes" << std::endl;
    std::cout << "Quel graphe voulez-vous etudier ?" << std::endl;
    std::cout << "Pour etudier un graphe de la savane tapez 1, pour un graphe forestier taper 2, pour un graphe aquatique taper 3" << std::endl;
    std::cin >> saisie;

    Graph g;
    g.Initialiser_graphe(saisie);
    g.afficher_graphe();
    /// Vous gardez la main sur la "boucle de jeu"
    /// ( contrairement à des frameworks plus avancés )
    while ( !key[KEY_ESC] )
    {

        /// Il faut appeler les méthodes d'update des objets qui comportent des widgets
        g.update();


        /// Mise à jour générale (clavier/souris/buffer etc...)
        grman::mettre_a_jour();


    }



    ///sauvegarde
    g.sauvegarderGraphe(saisie);

    grman::fermer_allegro();

    return 0;
}
END_OF_MAIN();


