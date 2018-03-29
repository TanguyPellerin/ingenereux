#include <iostream>
#include <vector>

#include "produit.hpp"

using namespace std;


void ajoutProduit(vector<Produit> tabproduit);
void afficherlisteproduit(vector<Produit> tabproduit);


int main()
{
    vector<Produit> tabproduit;
    ajoutProduit(tabproduit);
    afficherlisteproduit(tabproduit);
    
    
    return 0;
}


void ajoutProduit(vector<Produit> tabproduit)
{
    int prix, quantite, codebarre;
    string categorie, detail, nomProduit;
    cout << "Quel est le nom du produit : " << endl;
    cin >> nomProduit;
    cout << "Quel est le prix du produit : " << endl;
    cin >> prix;
    cout << "Quelle est la quantité du produit : " << endl;
    cin >> quantite;
    cout << "Quelle est le codebarre du produit : " << endl;
    cin >> codebarre;
    cout << "Quelle est la catégorie du produit : " << endl;
    cin >> categorie;
    cout << "quel est le detail du produit : " << endl;
    cin >> detail;
    
    Produit newproduit(prix, quantite, codebarre, categorie, detail, nomProduit);
    tabproduit.push_back(newproduit);

}

void afficherlisteproduit(vector<Produit> tabproduit)
{
    for (int i=0; i<tabproduit.size(); i++)
    {
        tabproduit[i].affichage();
        cout << "yo";
    }
    
}
