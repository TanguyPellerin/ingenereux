#define produit_hpp

#include <stdio.h>
#include <string>

using namespace std;



class Produit
{
    private :
    
    int p_prix;
    int p_quantite;
    int p_codebarre;
    string p_categorie;
    string p_detail;
    string p_nomProduit;
    
    
    public :
    
    Produit(int prix, int quantite, int codebarre, string categorie, string detail, string nomProduit);
    void affichage();
    void modif_prix(int newPrix);
    void modif_quantite(int Vquantite);
};
