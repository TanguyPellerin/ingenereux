#ifndef DEF_PRODUIT
#define DEF_PRODUIT

#include <stdio.h>
#include <string>
#include <iostream>
#include <vector>

//using namespace std;


class Produit
{
    public :
    
    Produit(int prix, int quantite, int codebarre, std::string categorie, std::string detail, std::string nomProduit); //constructeur
    
    std::string p_nomProduit;
    void affichage(); //permet d'afficher
    void modif_prix(int newPrix); //permet de modifier la prix d'un produit
    void modif_quantite(int Vquantite, std::vector<Produit> tabProduit, int position); //permet de modifier la quantité d'un produit
    int codebarre(); //permet de récuper le codebarre d'un produit
    int infoPrix();
    int infoquantite();
    void ajoutquantite(int nbrProduit);

    
    
    private :
    
    int p_prix;
    int p_quantite;
    int p_codebarre;
    std::string p_categorie;
    std::string p_detail;
};

#endif
