#include "compte.hpp"
#include <iostream>


Compte::Compte (){
    num_compte = 0;
    nom {};
    solde {0};
}
Compte::Compte(int numero, std::string nom, double solde_compte){

}

Compte::~Compte(){

}

void Compte::setTitulaire(std::string  nom){

}
void Compte::setSolde(double nouveau_solde){

}
void Compte::compte_a_compte(Compte deposant){

}

void Compte::deposer(double montant){

}

void Compte::retirer(double montant){

}