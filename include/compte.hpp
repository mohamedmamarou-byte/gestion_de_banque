#pragma once
#include<string>
#include<vector>

class Compte
{
private:
    int num_compte;
    std::string titulaire;
    double solde;
    std::vector<std::string> historique;
public:
    Compte();
    Compte(int numero, std::string nom, double solde_compte);
    ~Compte();

    int getNum_Compte() const;
    std::string getTitulaire() const;
    double getSolde() const;

    void setTitulaire(std::string  nom);
    void setSolde(double nouveau_solde);
    void compte_a_compte(Compte& deposant, double montant );
    void deposer(double valeur);
    void retirer(double montant);
    //
    void retierArgent(std::vector<Compte>& principal , const int& identifiant );
    void ajouteCompte(int& id,std::vector<Compte>& principal);
    void afficherComptes(const std::vector<Compte>& principal);
    void rechercherCompte(const std::vector<Compte>& principal, const int& identifiant);
    void deposerArgent(std::vector<Compte>& principal , const int& identifiant);
    void compte_a_compte(std::vector<Compte>& compte , const int& identifiant);

    
};

