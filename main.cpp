#include <iostream>
#include <vector>
#include <stdio.h>
#include "produit.h"
#include "caisse.h"
#include "ajout.h"

using namespace std;





int main()
{
    vector<Produit> tabproduit, tablisteclient;
    Caisse caisse1;
    int nbrproduit;
    
    cout << "Combien d'article voulez vous rentrer : " ;
    cin >> nbrproduit;
    for (int i=0;i<nbrproduit; i++)
    {
        ajoutProduit(&tabproduit);
    }
    caisse1.pay(tabproduit, tablisteclient);
    
    
    
    
    return 0;
}
