#include "menu.hpp"
#include <iostream>

void menuPrincipal(){
    std::cout <<std::endl <<std::endl <<"\t\t\t\t\t=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+==+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+" << std::endl; 
    std::cout <<"\t\t\t\t\t||                  ----------  Menu Principale  -----------                 ||" << std::endl; 
    std::cout << "\t\t\t\t\t=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+==+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+" << std::endl;  
    std::cout <<"\t\t\t\t\t||             1. Mode Administrateur                                        ||" << std::endl; 
    std::cout <<"\t\t\t\t\t||             2. Mode Consultation                                          ||" << std::endl;
    std::cout <<"\t\t\t\t\t||             3. Quitter                                                    ||" << std::endl; 
    std::cout <<"\t\t\t\t\t=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+==+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+" << std::endl;  
    std::cout <<"\t\t\t\t\t||                   ***** Faire votre choix (1 a 3) *****                   ||" << std::endl;  
    std::cout <<"\t\t\t\t\t=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+==+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+" << std::endl;   
}
void menuAdministrateur(){
    std::cout <<std::endl <<std::endl <<"\t\t\t\t\t=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+==+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+" << std::endl; 
    std::cout <<"\t\t\t\t\t||                  ----------  Menu Administrateure  -----------           ||" << std::endl; 
    std::cout << "\t\t\t\t\t=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+==+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+" << std::endl;  
    std::cout <<"\t\t\t\t\t||             1. Creer un nouveau compte                                    ||" << std::endl; 
    std::cout <<"\t\t\t\t\t||             2. Lister tous les comptes actifs                             ||" << std::endl; 
    std::cout <<"\t\t\t\t\t||             3. Rechercher un compte                                       ||" << std::endl; 
    std::cout <<"\t\t\t\t\t||             4. Deposer de l'argent                                        ||" << std::endl; 
    std::cout <<"\t\t\t\t\t||             5. Retirer de l'argent                                        ||" << std::endl; 
    std::cout <<"\t\t\t\t\t||             6. Effectuer un virement entre deux comptes                   ||" << std::endl;  
    std::cout <<"\t\t\t\t\t||             7. Quitter                                                    ||" << std::endl; 
    std::cout <<"\t\t\t\t\t=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+==+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+" << std::endl;  
    std::cout <<"\t\t\t\t\t||                   ***** Faire votre choix (1 a 7) *****                  ||" << std::endl;  
    std::cout <<"\t\t\t\t\t=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+==+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+" << std::endl;  
    
}
void menuConsultation(){
    std::cout <<std::endl <<std::endl <<"\t\t\t\t\t=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+==+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+" << std::endl; 
    std::cout <<"\t\t\t\t\t||                  ----------  Menu Consultation   -----------              ||" << std::endl; 
    std::cout << "\t\t\t\t\t=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+==+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+" << std::endl;  
    std::cout <<"\t\t\t\t\t||             1. Lister tous les comptes actifs                             ||" << std::endl; 
    std::cout <<"\t\t\t\t\t||             2. Rechercher un compte                                       ||" << std::endl;
    std::cout <<"\t\t\t\t\t||             3. Quitter                                                    ||" << std::endl; 
    std::cout <<"\t\t\t\t\t=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+==+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+" << std::endl;  
    std::cout <<"\t\t\t\t\t||                   ***** Faire votre choix (1 a 3) *****                   ||" << std::endl;  
    std::cout <<"\t\t\t\t\t=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+==+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+" << std::endl;  
}

void affichagefin(){
    std::cout<<std::endl <<"\t\t\t\t=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+==+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=++=+=+=+=+=+=+" << std::endl; 
    std::cout <<"\t\t\t\t||          Merci d'voir utiliser ce programme au plaisir de vous revoir !                   ||" << std::endl; 
    std::cout <<"\t\t\t\t=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+==+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=++=+=+=+=+=+=+" << std::endl; 
}