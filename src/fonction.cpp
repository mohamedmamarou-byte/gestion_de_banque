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
    verification_solde(solde);
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
            int k{};
            std::cout << std::endl << "\t\t\t\t\t\t ---------- Rechercher Par Numero -----------" << std::endl;
            std::cout << "\t\t\t\t\t\t\t\t  Entrez votre Numero du compte : ";
            std::cin >> id;
            verification_id(id, identifiant);
            for (const Compte& compt : principal) {
                if (id == compt.getNum_Compte()) {
                    std::println("\t\t\t\t\t\t\t\t --------------- COMPTE {}  ----------------", compt.getNum_Compte());
                    std::println("\t\t\t\t\t\t\t\t|   Numero du compte   : {:^20}|", compt.getNum_Compte());
                    std::println("\t\t\t\t\t\t\t\t|   Titulaire          : {:^20}|", compt.getTitulaire());
                    std::println("\t\t\t\t\t\t\t\t|   Solde              : {:^20}|", compt.getSolde());
                    std::println("\t\t\t\t\t\t\t\t --------------------------------------------");
                    k++;
                }
            }
            if (k == 0) {
                std::cout << "\t\t\t\t\t\t\t\t Erreur ! Numero compte non trouver !!!! " << std::endl ;
                    
            }
            
        }
        
        else if (choix == "2") {
            int j {};
            std::cout << std::endl << "\t\t\t\t\t\t ---------- Rechercher Par Nom -----------" << std::endl;
            std::cout << "\t\t\t\t\t\t\t\t     Choix : ";
            std::getline(std::cin , nom);
            for (const Compte& recherche : principal) {
                if (recherche.getTitulaire() == nom) {
                    std::println("\t\t\t\t\t\t\t\t --------------- COMPTE {}  ----------------", recherche.getNum_Compte());
                    std::println("\t\t\t\t\t\t\t\t|   Numero du compte   : {:^20}|", recherche.getNum_Compte());
                    std::println("\t\t\t\t\t\t\t\t|   Titulaire          : {:^20}|", recherche.getTitulaire());
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

void deposerArgent(std::vector<Compte>& principal , const int& identifiant){
    int id {};
    double solde{};
    std::cout << std::endl << "\t\t\t\t\t\t *********** faire un Depot  **************" << std::endl;
    if (principal.size() == 0) {
        std::cout << "\t\t\t\t\t\t\t\t ************Aucun Compte enregistre  **************" << std::endl;
        return;
    }
    std::cout << "\t\t\t\t\t\t\t\t  Entrez votre Numero du compte : ";
    std::cin >> id;
    verification_id(id, identifiant);
    std::println("\t\t\t\t\t\t\t\t le titulaire  est  : {:^20}|", principal[id -1].getTitulaire());
    std::cout << "\t\t\t\t\t\t\t\t Entrez le Montant du depôt : ";
    std::cin >> solde;
    verification_solde(solde);
    principal[id-1].deposer(solde);
    std::println("\t\t\t\t\t\t\t\t******* le Solde du compte aprés depôt est  : {:^10} ******** ", principal[id-1].getSolde());

}

void retierArgent(std::vector<Compte>& principal , const int& identifiant ){
    int id {};
    double solde{};
    std::cout << std::endl << "\t\t\t\t\t\t *********** faire un Retrait  **************" << std::endl;
    if (principal.size() == 0) {
        std::cout << "\t\t\t\t\t\t\t\t ************ Aucun Compte enregistre  **************" << std::endl;
        return;
    }
    std::cout << "\t\t\t\t\t\t\t\t  Entrez votre Numero du compte : ";
    std::cin >> id;
    verification_id(id, identifiant);
    std::println("\t\t\t\t\t\t\t\t le titulaire  est  : {:^20}|", principal[id -1].getTitulaire());
    std::cout << "\t\t\t\t\t\t\t\t Entrez le Montant du retrait : ";
    std::cin >> solde;
    verification_solde(solde, principal, id);
    principal[id-1].retirer(solde);
    std::println("\t\t\t\t\t\t\t\t******* le Solde du compte aprés retrait est  : {:^10} ******** ", principal[id-1].getSolde());

}
void compte_a_compte(std::vector<Compte>& compte , const int& identifiant){
    int id_d {}, id_R {};
    double solde {};
    std::cout << std::endl << "\t\t\t\t\t\t *********** faire un compte à compte  **************" << std::endl;
    if (compte.size() == 0) {
        std::cout << "\t\t\t\t\t\t\t\t ************ Aucun Compte enregistre  **************" << std::endl;
        return;
    }
    std::cout << "\t\t\t\t\t\t\t\t  Entrez le numero du compte deposant : ";
    std::cin >> id_d;
    verification_id(id_d, identifiant);
    std::println("\t\t\t\t\t\t\t\t le Nom du deposant est  : {:^20}|", compte[id_d -1].getTitulaire());
    std::cout << "\t\t\t\t\t\t\t\t        --------------------" << std::endl;
    std::cout << "\t\t\t\t\t\t\t\t  Entrez le numero du compte receveur : ";
    std::cin >> id_R;
    verification_id(id_R, identifiant);
    std::println("\t\t\t\t\t\t\t\t le Nom du recepteur est  : {:^20}|", compte[id_R -1].getTitulaire());
    std::cout << "\t\t\t\t\t\t\t\t Entrez le Montant du versement : ";
    std::cin >> solde;
    verification_solde(solde, compte, id_d);
    compte[id_R-1].compte_a_compte(compte[id_d-1], solde);
    std::println("\t\t\t\t\t\t******* le Solde du compte du deposant aprés versement est  : {:^10} ******** ", compte[id_d-1].getSolde());
    std::println("\t\t\t\t\t\t******* le Solde du compte du receveur aprés retrait est  : {:^10} ******** ", compte[id_R-1].getSolde());


}
void verification_id(int& num, const int& identi){
    while (num  < 0 || std::cin.fail() || num > identi) {
        std::cin.clear();
        std::cin.ignore(1000, '\n');
        std::cout << "\t\t\t\t\t\t\t\t Erreur ! Veillez entrez un numero valide " ;
        std::cin >> num;
    }
    std::cin.ignore(1000, '\n');

}
void verification_solde(double& solde) {
    while (solde < 0 || std::cin.fail()) {
            std::cin.clear();
            std::cin.ignore(1000, '\n');
            std::cout << "\t\t\t\t\t\t\t\t Erreur ! Veillez entrez un solde valide  " ;
            std::cin >> solde;
        }
    std::cin.ignore(1000, '\n');
}
void verification_solde(double& solde, const std::vector<Compte>& reference, const int& id) {
    while (solde < 0 || std::cin.fail() || solde > reference[id-1].getSolde()) {
            std::cin.clear();
            std::cin.ignore(1000, '\n');
            std::cout << "\t\t\t\t\t\t\t\t Erreur ! Veillez entrez un solde valide  " ;
            std::cin >> solde;
        }
    std::cin.ignore(1000, '\n');
}