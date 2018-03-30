#include "caisse.hpp"
#include "produit.hpp"
#include <string.h>
#include <stdio.h>
#include <vector>
#include <iostream>

using namespace std;


void afficherlisteproduit(vector<Produit> tabproduit)
{
    for (int i=0; i<tabproduit.size(); i++)
    {
        tabproduit[i].affichage();
    }
    
}


void Caisse::pay(vector<Produit> tabproduit, vector<Produit> tablisteclient)
{
    int nbrArticle;
    cout << "Combien d'article avez vous a scanner : ";
    cin >> nbrArticle;
    for (int i=0; i<nbrArticle; i++)
    {
        Caisse:scan(tabproduit, &tablisteclient);
    }
    afficherlisteproduit(tablisteclient);
    
    
}


int trouverElementCodebarre(vector<Produit> tabproduit, int element)
{
    
    //int i = find(tabproduit.begin(), tabproduit.back(), element)
    int i;
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


void Caisse::scan(vector<Produit> tabproduit, vector<Produit> *tablisteclient)
{
    int codebarre, nbrarticle;
    cout << "Rentrer le codebarre du produit : ";
    cin >> codebarre;
    
    int position = trouverElementCodebarre(tabproduit, codebarre);
    cout << "Combien de fois il y a cette article : ";
    cin >> nbrarticle;
    tablisteclient->push_back(tabproduit[position]);
}





