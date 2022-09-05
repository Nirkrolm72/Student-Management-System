#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "fonction.h"

int main(int argc, char const *argv[])
{
    Etudiant etudiant;
    int choix = 0;

    do{
        printf("****************************\n");
        printf("*Student Management System *\n");
        printf("****************************\n");

        printf("1 - Ajouter un etudiant\n");
        printf("2 - Supprimer un etudiant\n");
        printf("3 - Rechercher un etudiant\n");
        printf("4 - Afficher tous les etudiants\n");

        printf("Votre choix : ");
        scanf("%d", &choix);

        if(choix < 1 || choix > 4)
        {
            printf("Vous devez entrer un chiffre entre 1 et 4 \n");
        }
        

    }while(choix < 1 || choix > 4);

    switch (choix)
    {
    case 1: ajouterEtudiant(etudiant); break;
    // case 2: supprimerEtudiant(); break;
    case 3: chercherEtudiant(etudiant); break;
     case 4: afficherEtudiants(); break;
    
    default: printf("Rien a ajouter\n\n"); break;
    }
    
    return 0;
}
