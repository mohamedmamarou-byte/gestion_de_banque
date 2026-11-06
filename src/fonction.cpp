#include "fonction.hpp"
#include "compte.hpp"
#include <iostream>
#include <string>

void ajouteCompte(int id ) {
    Compte nouveau = Compte();
    id++;
    std::string nom {};
    double solde {};
    std::cout << std::endl << "\t\t\t\t\t\t\t *********** Ajouter un nouveau compte **************" << std::endl;
    std::cout << "\t\t\t\t\t\t\t\t Le numero attribué est              : " << id << std::endl ;
    std::cout << "\t\t\t\t\t\t\t\t Veillez entrez le nom du titulaire  : " ;
    std::getline(std::cin , nom);
    do {
        std::cout << "\t\t\t\t\t\t\t\t Veillez entrez le solde initiale    : " ;
        std::cin << solde;
    }while (solde < 0);
    nouveau = Compte(id, nom , solde);

}