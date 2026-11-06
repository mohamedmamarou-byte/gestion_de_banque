# Gestion de comptes bancaires (C++)

Application console de gestion de comptes bancaires, écrite en C++ pour apprendre la programmation orientée objet.

**Version actuelle : 1.0 (squelette)**

## Fonctionnalités prévues
- Authentification avec mot de passe masqué
- Mode **administrateur** : créer un compte, déposer, retirer, faire un virement, modifier, supprimer
- Mode **consultation** (lecture seule) : lister, rechercher, voir le solde et l'historique

## Structure du projet
- `include/` : fichiers d'en-tête (`compte.h`, `menu.h`)
- `src/` : implémentations (`compte.cpp`, `menu.cpp`, `main.cpp`)

## Compilation et exécution
```
g++ -std=c++23 -Wall -Wextra -I include src/*.cpp -o banque
./banque 
```
## Feuille de route
- [x] v1.0 : squelette du projet
- [x] v1.1 : authentification
- [ ] v1.2 : menus administrateur et consultation
- [ ] v1.3 : opérations sur les comptes

## Auteur
Mamarou Sadou Mohamed-Almoctar , étudiant en informatique, Université Islamique au Niger
