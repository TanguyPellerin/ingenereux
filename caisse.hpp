#ifndef DEF_CAISSE
#define DEF_CAISSE


#include <stdio.h>
#include <string>
#include <vector>
#include "produit.hpp"


using namespace std;



class Caisse
{
    private :
    
    vector<Produit> tablistclient;
    
    
    public :
    
    void pay(vector<Produit> tabproduit, vector<Produit> tablisteclient);
    void scan(vector<Produit> tabproduit, vector<Produit> *tablisteclient);
    int trouverElementNom(vector<Produit> tabproduit, string element);
    int trouverElementCodebarre(vector<Produit> tabproduit, int element);

    
};



#endif
