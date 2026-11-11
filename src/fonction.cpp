#include "fonction.hpp"
#include <iostream>
#include <ostream>
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
        std::cout << "\t\t\t\t\t\t\t\t Erreur ! Veillez entrez un solde valide  " ;
        std::cin >> solde;
    }
    std::cin.ignore(1000, '\n');
    Compte nouveau(id, nom, solde);
    principal.push_back(nouveau);
    std::cout << "\t\t\t\t\t\t\t\t ************ Ajouter avec succes **************" << std::endl;
}

void afficherComptes(const std::vector<Compte>& principal){
    std::cout << std::endl << "\t\t\t\t\t\t *********** Affichage des comptes **************" << std::endl;
    std::println("\t\t\t\t=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+==+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=");
    std::println("\t\t\t\t||   Numero Compte  |               Titulaire             |         Solde             ||");
    std::println("\t\t\t\t=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+==+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=");
    for(auto element : principal ){
        std::println("\t\t\t\t||{:^18}|{:^37}|{:^27}||", element.getNum_Compte(), element.getTitulaire(), element.getSolde());
    }
    std::println("\t\t\t\t=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+==+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=");

}

void rechercherCompte(const std::vector<Compte>& principal, const int& identifiant ){
    if (principal.size() == 0) {
        std::cout << "\t\t\t\t\t\t\t\t ************Aucun Compte enregistre  **************" << std::endl;
        return;
    }
    std::string choix{}, nom {};
    int id {};
    do {
    
        std::cout << std::endl << "\t\t\t\t\t\t ***********Rechercher un compte **************" << std::endl;
        std::cout << "\t\t\t\t\t\t\t\t -------------------------------------------"<< std::endl ;
        std::cout << "\t\t\t\t\t\t\t\t|   1. Rechercher par Numero du compte      |"<< std::endl ;
        std::cout << "\t\t\t\t\t\t\t\t|   2. Rechercher par Nom                   |"<< std::endl ;
        std::cout << "\t\t\t\t\t\t\t\t|   0. Quiter                               |"<< std::endl ;
        std::cout << "\t\t\t\t\t\t\t\t -------------------------------------------"<< std::endl;
        std::cout << "\t\t\t\t\t\t\t\t     Choix : ";
        std::getline(std::cin , choix);
        if (choix == "1") {
            std::cout << std::endl << "\t\t\t\t\t\t ---------- Rechercher Par Numero -----------" << std::endl;
            std::cout << "\t\t\t\t\t\t\t\t  Entrez votre Numero du compte : ";
            std::cin >> id;
            while (id  < 0 || std::cin.fail() || id > identifiant) {
                std::cin.clear();
                std::cin.ignore(1000, '\n');
                std::cout << "\t\t\t\t\t\t\t\t Erreur ! Veillez entrez un numero valide " ;
                std::cin >> id;
            }
            std::cin.ignore(1000, '\n');
            
            std::println("\t\t\t\t\t\t\t\t --------------- COMPTE {}  ----------------", id);
            std::println("\t\t\t\t\t\t\t\t|   Numero du compte   : {:^20}|", principal[id -1].getNum_Compte());
            std::println("\t\t\t\t\t\t\t\t|   Titula             : {:^20}|", principal[id-1].getTitulaire());
            std::println("\t\t\t\t\t\t\t\t|   Solde              : {:^20}|", principal[id-1].getSolde());
            std::println("\t\t\t\t\t\t\t\t --------------------------------------------");
            
        }
        
        else if (choix == "2") {
            int j {};
            std::cout << std::endl << "\t\t\t\t\t\t ---------- Rechercher Par Nom -----------" << std::endl;
            std::cout << "\t\t\t\t\t\t\t\t     Choix : ";
            std::getline(std::cin , nom);
            for (auto recherche : principal) {
                if (recherche.getTitulaire() == nom) {
                    std::println("\t\t\t\t\t\t\t\t --------------- COMPTE {}  ----------------", recherche.getNum_Compte());
                    std::println("\t\t\t\t\t\t\t\t|   Numero du compte   : {:^20}|", recherche.getNum_Compte());
                    std::println("\t\t\t\t\t\t\t\t|   Titula             : {:^20}|", recherche.getTitulaire());
                    std::println("\t\t\t\t\t\t\t\t|   Solde              : {:^20}|", recherche.getSolde());
                    std::println("\t\t\t\t\t\t\t\t --------------------------------------------");
                    j++; 
                }
            }
            if (j == 0) {
                std::cout << "\t\t\t\t\t\t\t\t Erreur ! Nom non trouver !!!! " << std::endl ;
                    
            }
        } else {
                std::cout << "\t\t\t\t\t\t\t\t Erreur ! CHoix invalide " << std::endl ;
        }
    }while (choix != "0");

}