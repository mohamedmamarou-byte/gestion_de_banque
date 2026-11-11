#include "menu.hpp"
#include "fonction.hpp"
#include <iostream>
#include <vector>
#include <cstdlib>
#include <string>
int id = {};
std::vector<Compte> banque;

int main(){
    std::system("clear");
    std::string saisieprinc{};
    std::cout <<"\t\t\t\t=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+==+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=++=+=+=+=+=+=+" << std::endl; 
    std::cout <<"\t\t\t\t||                     Bienvenue ! Dans le projet de gestion d'une banque                   ||" << std::endl; 
    std::cout <<"\t\t\t\t=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+==+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=++=+=+=+=+=+=+" << std::endl; 
    do {
        std::string saisie1{} , saisie{};
        menu:
        menuPrincipal();
        std::cout << "\t\t\t\t\tVotre choix : ";
        std::getline(std::cin, saisieprinc);
        if (saisieprinc == "1")  {
            std::string login {}, pass {};
            int tantative {1};
            std::cout<<std::endl << "\t\t\t\t\t\t\t *********** MODE ADMINISTRATEUR **************" << std::endl;

            do {
                std::cout<< std::endl << "\t\t\t\t\t\t Entrez vos information d'Authentification !! :" << std::endl;
                std::cout << "\t\t\t\t\t\t Tantative  : " << tantative << std::endl;
                std::cout << "\t\t\t\t\t\t\tVotre Login : ";
                std::getline(std::cin, login);
                std::cout << "\t\t\t\t\t\t\tVotre Mot de passe : ";
                std::getline(std::cin, pass);
                tantative++;
                if (tantative > 3) {
                    std::cout << "\t\t\t\t\t\t Trop de tentative réessayer !! :" << std::endl; 
                
                }
            }while ((login != "login" || pass != "admin") && tantative <= 3);
            if (tantative > 3) {
                    goto menu;
            }
            do {
                menuAdministrateur();
                std::cout << "\t\t\t\t\tVotre choix : ";
                std::getline(std::cin, saisie1);
                if (saisie1 == "1") {
                    ajouteCompte(id, banque);
                } else if (saisie1 == "2") {
                    afficherComptes(banque);
                }else if (saisie1 == "3") {
                    rechercherCompte(banque, id);
                }else if (saisie1 == "4") {
                
                }else if (saisie1 == "5") {
                
                }else if (saisie1 == "6") {
                
                }else if (saisie1 == "7") {
                    std::cout << "\t\t\t\t Bye Bye " << std::endl;
                } else {
                    std::cout << "\t\t\t\t Choix invalide reesaiyer !!! " << std::endl;

                }
                
            }while ( saisie1 != "7");

        } else if (saisieprinc == "2") {
            int tantative {1};
            std::string login {}, pass {};
            std::cout<<std::endl << "\t\t\t\t\t\t\t *********** MODE CONSULTATION **************" << std::endl;

            do {
                std::cout<< std::endl << "\t\t\t\t\t\t Entrez vos information d'Authentification !! :" << std::endl;
                std::cout << "\t\t\t\t\t\t Tantative  : " << tantative << std::endl;
                std::cout << "\t\t\t\t\t\t\tVotre Login : ";
                std::getline(std::cin, login);
                std::cout << "\t\t\t\t\t\t\tVotre Mot de passe : ";
                std::getline(std::cin, pass);
                tantative++;
                if (tantative > 3) {
                    std::cout << "\t\t\t\t\t\t Trop de tentative réessayer !! :" << std::endl; 
                
                }
            }while ((login != "login" || pass != "consult") && tantative <= 3);
            if (tantative > 3) {
                    goto menu;
            }
            do {
                menuConsultation();
                std::cout << "\t\t\t\t\tVotre choix : ";
                std::getline(std::cin, saisie);
                if (saisie == "1") {
                    afficherComptes(banque);
                } else if (saisie == "2") {
                    rechercherCompte(banque, id);
                }else if (saisie == "3") {
                    std::cout << "\t\t\t\t Bye Bye " << std::endl;
                } else {
                    std::cout << "\t\t\t\t Choix invalide reesaiyer !!! " << std::endl;

                }
            }while (saisie != "3");
        }
    }while (saisieprinc != "3" );
    
    affichagefin();
    return 0;
}