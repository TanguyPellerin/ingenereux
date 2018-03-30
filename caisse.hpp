#include <stdio.h>
#include <string>
#include <iostream>

using namespace std;


class Produit
{
    
    public :
    
    Produit(int prix, int quantite, int codebarre, string categorie, string detail, string nomProduit); //constructeur
    
    string p_nomProduit;
    void affichage(); //permet d'afficher
    void modif_prix(int newPrix); //permet de modifier la prix d'un produit
    void modif_quantite(int Vquantite); //permet de modifier la quantité d'un produit
    int codebarre(); //permet de récuper le codebarre d'un produit
    
    
    private :
    
    int p_prix;
    int p_quantite;
    int p_codebarre;
    string p_categorie;
    string p_detail;
    
};

