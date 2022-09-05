#ifndef _MAIN_H
#define _MAIN_H

// Structure de donnée
typedef struct Etudiant Etudiant;
struct Etudiant{
    char nom[100];
    char prenom[100];
    int age;
    char dateDeNaissance[20];
};


int ajouterEtudiant(Etudiant etudiant);
int supprimerEtudiant();
int chercherEtudiant(Etudiant etudiant);
int afficherEtudiants();

#endif