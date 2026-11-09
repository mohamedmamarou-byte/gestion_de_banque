#include "fonction.hpp"
#include <iostream>
#include <print>
#include <vector>
#include <string>

void ajouteCompte(int& id, std::vector<Compte>& principal) {
    id++;
    std::string nom {};
    double solde {};
    std::cout << std::endl << "\t\t\t\t\t\t\t *********** Ajouter un nouveau compte **************" << std::endl;
    std::cout << "\t\t\t\t\t\t\t Le numero attribué est              : " << id << std::endl ;
    std::cout << "\t\t\t\t\t\t\t Veillez entrez le nom du titulaire  : " ;
    std::getline(std::cin , nom);
    std::cout << "\t\t\t\t\t\t\t Veillez entrez le solde initiale    : " ;
    std::cin >> solde;
    while (solde < 0 || std::cin.fail()) {
        std::cin.clear();
        std::cin.ignore(1000, '\n');
        std::cout << "\t\t\t\t\t\t\t\t Erreur ! Veillez entrez un solde valide : " ;
        std::cin >> solde;
    }
    std::cin.ignore(1000, '\n');
    Compte nouveau(id, nom, solde);
    principal.push_back(nouveau);
    std::cout << "\t\t\t\t\t\t\t\t ************ Ajouter avec succes **************" << std::endl;
}

void afficherComptes(const std::vector<Compte>& principal){
    std::cout << std::endl << "\t\t\t\t\t\t\t *********** Affichage des comptes **************" << std::endl;
    std::println("\t\t\t\t=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+==+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=");
    std::println("\t\t\t\t||   Numero Compte  |               Titulaire             |         Solde             ||");
    std::println("\t\t\t\t=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+==+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=");
    for(auto i = 0; i < principal.size() ; i++ ){
        std::println("\t\t\t\t||{:^18}|{:^37}|{:^28}||", principal[i].getNum_Compte(), principal[i].getTitulaire(), principal[i].getSolde());
    }
    std::println("\t\t\t\t\t=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+==+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=");

}