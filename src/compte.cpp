#include "compte.hpp"
#include <iostream>


Compte::Compte() : num_compte {0} ,titulaire {} , solde {0.0} {
    
}
Compte::Compte(int numero, std::string nom, double solde_compte) : num_compte {numero }, titulaire {nom}, solde {solde_compte} {

}

Compte::~Compte(){

}

void Compte::setTitulaire(std::string  nom){

}
void Compte::setSolde(double nouveau_solde){

}
void Compte::compte_a_compte(Compte& deposant, double montant){
    solde += montant;
    deposant.retirer(montant);
}

void Compte::deposer(double montant){
    solde += montant;
}

void Compte::retirer(double montant){
    solde -= montant;
}
int Compte::getNum_Compte() const {
    return num_compte;
}
std::string Compte::getTitulaire() const{
    return titulaire;
}
double Compte::getSolde() const{
    return solde;
}