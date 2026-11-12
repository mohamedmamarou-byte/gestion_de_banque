#pragma once
#include <vector>
#include "compte.hpp"

void verification_id(int& num, const int& identi);
void verification_solde(double& solde);
void verification_solde(double& solde, const std::vector<Compte>& reference, const int& id);
