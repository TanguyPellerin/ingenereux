#include "produit.h"
#include "ajout.h"
#include <string.h>
#include <iostream>


using namespace std;

void Produit::modif_prix(int newPrix)
{
    p_prix = newPrix;
}

int Produit::infoquantite()
{
    return p_quantite;
}


void Produit::modif_quantite(int Vquantite, vector<Produit> tabProduit, int position)
{
    p_quantite -= Vquantite;
    if (p_quantite<0)
    {
        p_quantite=0;
    }
}

void Produit::ajoutquantite(int nbrProduit)
{
    p_quantite += nbrProduit;
}


void Produit::affichage()
{
    cout << endl;
    cout << "Nom produit : " << p_nomProduit << endl;
    cout << "Prix : " << p_prix << "€" << endl;
    cout << "Quantite : " << p_quantite << endl;
    cout << "Codebarre : " << p_codebarre <<endl;
    cout << "Catégorie : " << p_categorie <<endl;
    cout << endl;
}


int Produit::codebarre()
{
    return p_codebarre;
}

int Produit::infoPrix()
{
    return p_prix;
}


Produit::Produit(int prix, int quantite, int codebarre, string categorie, string detail, string nomProduit) : p_prix(prix), p_quantite(quantite), p_codebarre(codebarre), p_categorie(categorie), p_detail(detail), p_nomProduit(nomProduit)
{
    
}

