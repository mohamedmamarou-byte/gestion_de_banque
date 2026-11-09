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
    void compte_a_compte(Compte deposant);
    void deposer(double valeur);
    void retirer(double montant);
    
};

