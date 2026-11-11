#pragma once
#include <vector>
#include "compte.hpp"

void ajouteCompte(int& id,std::vector<Compte>& principal);
void afficherComptes(const std::vector<Compte>& principal);
void rechercherCompte(const std::vector<Compte>& principal, const int& identifiant);
