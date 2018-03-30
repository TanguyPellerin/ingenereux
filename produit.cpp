#include <iostream>
#include <vector>
#include <stdio.h>
#include "produit.hpp"
#include "caisse.hpp"

using namespace std;


void ajoutProduit(vector<Produit> *tabproduit);
void afficherlisteproduit(vector<Produit> tabproduit);
void supprimerproduit(vector<Produit> *tabproduit);
int trouverelement(vector<Produit> tabproduit, string Psupprimer);


int main()
{
    //vector<Produit> tabproduit, tablisteclient;
    //Caisse caisse1;
    //caisse1.pay(tabproduit, tablisteclient);
    
    
    return 0;
}


void ajoutProduit(vector<Produit> *tabproduit)
{
    int prix, quantite, codebarre;
    string categorie, detail, nomProduit;
    cout << "Quel est le nom du produit : ";
    cin >> nomProduit;
    cout << "Quel est le prix du produit : ";
    cin >> prix;
    cout << "Quelle est la quantité du produit : ";
    cin >> quantite;
    cout << "Quelle est le codebarre du produit : ";
    cin >> codebarre;
    cout << "Quelle est la catégorie du produit : ";
    cin >> categorie;
    cout << "quel est le detail du produit : ";
    cin >> detail;
    
    Produit newproduit(prix, quantite, codebarre, categorie, detail, nomProduit);
    tabproduit->push_back(newproduit);

}


void afficherlisteproduit(vector<Produit> tabproduit)
{
    for (int i=0; i<tabproduit.size(); i++)
    {
        tabproduit[i].affichage();
    }
    
}


void supprimerproduit(vector<Produit> *tabproduit)
{
    string Psupprimer;
    cout << "Quel élément voulez vous supprimer ? : ";
    cin >> Psupprimer;
    int position = trouverelement(*tabproduit, Psupprimer);
    *tabproduit->erase(tabproduit->begin()+position);
}
