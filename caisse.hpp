#ifndef DEF_CAISSE
#define DEF_CAISSE


#include <stdio.h>
#include <string>
#include <vector>
#include "produit.h"


//using namespace std;



class Caisse
{
    private :
    
    std::vector<Produit> tablistclient;
    
    
    public :
    
    int prix(std::vector<Produit> tabProduit);
    void pay(std::vector<Produit> tabproduit, std::vector<Produit> tablisteclient);
    void scan(std::vector<Produit> tabproduit, std::vector<Produit> *tablisteclient);
    void rajoutsctock(std::vector<Produit> tabProduit);

    
};

#endif
