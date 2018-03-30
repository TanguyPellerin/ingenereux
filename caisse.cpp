#include "caisse.h"
#include "produit.h"
#include "ajout.h"
#include <string.h>
#include <vector>
#include <iostream>

using namespace std;


int Caisse::prix(vector<Produit> tablisteclient)
{
    int prixtot = 0;
    for (int i=0; i<tablisteclient.size(); i++)
    {
        prixtot += tablisteclient[i].infoPrix()*tablisteclient[i].infoquantite();
    }
    cout << "Le prix total est : " << prixtot << " €" << endl;
    return prixtot;
}


void Caisse::pay(vector<Produit> tabproduit, vector<Produit> tablisteclient)
{
    int nbrArticle;
    string choix;
    cout << "Combien d'article avez vous a scanner : ";
    cin >> nbrArticle;
    for (int i=0; i<nbrArticle; i++)
    {
        scan(tabproduit, &tablisteclient);
    }
    afficherlisteproduit(tablisteclient);
    cout << "Voulez vous rescanner un article ? oui ou non " ;
    cin >> choix;
    while (choix=="oui")
    {
        scan(tabproduit, &tablisteclient);
        cout << "Voulez vous rescanner un article ? oui ou non " ;
        cin >> choix;
    }
    prix(tablisteclient);
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


void Caisse::rajoutsctock(vector<Produit> tabProduit)
{
    int codebarre, position, nbrProduit;
    cout << "Quelle est le produit rajouter codebarre  : ";
    cin >> codebarre;
    position = trouverElementCodebarre(tabProduit, codebarre);
    cout << "Combien de ce Produit voulez vous rajouter : ";
    cin >> nbrProduit;
    tabProduit[position].ajoutquantite(nbrProduit);
    
}




