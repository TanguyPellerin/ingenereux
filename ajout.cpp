#include <iostream>
#include <vector>
#include "produit.h"
#include "caisse.h"

using namespace std;


void afficherlisteproduit(vector<Produit> tabproduit)
{
    for (int i=0; i<tabproduit.size(); i++)
    {
        tabproduit[i].affichage();
    }
    
    
}


int trouverElementCodebarre(vector<Produit> tabproduit, int element)
{
    
    int i=0;
    for (i=0; i<tabproduit.size(); i++)
    {
        if (tabproduit[i].codebarre()==element)
        {
            break;
        }
    }
    
    return i;
}


int trouverElementNom(vector<Produit> tabproduit, string element)
{
    
    int i=0;
    for (i=0; i<tabproduit.size(); i++)
    {
        if (tabproduit[i].p_nomProduit==element)
        {
            break;
        }
    }
    
    return i;
}



void supprimerproduit(vector<Produit> *tabproduit)
{
    string Psupprimer;
    cout << "Quel élément voulez vous supprimer ? : ";
    cin >> Psupprimer;
    int position = trouverElementNom(*tabproduit, Psupprimer);
    *tabproduit->erase(tabproduit->begin()+position);
}


void ajoutProduit(vector<Produit> *tabproduit)
{
    int prix, quantite, codebarre;
    string categorie, detail, nomProduit;
    cout << endl;
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
