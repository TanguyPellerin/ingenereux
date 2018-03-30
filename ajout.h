#ifndef ajout_h
#define ajout_h


int trouverElementNom(std::vector<Produit> tabproduit, std::string element);
int trouverElementCodebarre(std::vector<Produit> tabproduit, int element);
void ajoutProduit(std::vector<Produit> *tabproduit);
void supprimerproduit(std::vector<Produit> *tabproduit);
void afficherlisteproduit(std::vector<Produit> tabproduit);


#endif /* ajout_h */
