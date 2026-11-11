#pragma once
#include <vector>
#include "compte.hpp"

void ajouteCompte(int& id,std::vector<Compte>& principal);
void verification_id(int& num, const int& identi);
void verification_solde(double& solde);
void afficherComptes(const std::vector<Compte>& principal);
void rechercherCompte(const std::vector<Compte>& principal, const int& identifiant);
void deposerArgent(std::vector<Compte>& principal , const int& identifiant);
void retierArgent(std::vector<Compte>& principal , const int& identifiant );
void verification_solde(double& solde, const std::vector<Compte>& reference, const int& id);
void compte_a_compte(std::vector<Compte>& compte , const int& identifiant);