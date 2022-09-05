#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "fonction.h"

int ajouterEtudiant(Etudiant etudiant){

    FILE *fichier = NULL;

    fichier = fopen("Etudiant.txt", "a");

    if(fichier == NULL){
        printf("Un problème est survenu à l'ouverture du fichier\n\n");
        return EXIT_FAILURE;
    }

    printf("Ajouter un etudiant\n\n");

    printf("Entrez le nom de l'etudiant : ");
    scanf("%s", etudiant.nom);
    fprintf(fichier, "Nom : %s\n", etudiant.nom);
    
    printf("Entrez le prenom de l'etudiant : ");
    scanf("%s", etudiant.prenom);
    fprintf(fichier, "Prenom : %s\n", etudiant.prenom);

    printf("Entrez l'age de l'etudiant : ");
    scanf("%d", &etudiant.age);
    fprintf(fichier, "Age : %d ans\n", etudiant.age);

    printf("Entrez la date de naissance de l'etudiant (JJ/MM/YYYY) : ");
    scanf("%s", etudiant.dateDeNaissance);
    fprintf(fichier, "Date de naissance : %s\n", etudiant.dateDeNaissance);

    fprintf(fichier, "\n****************************\n");
    
    

    fclose(fichier);

    return EXIT_SUCCESS;
}
int supprimerEtudiant(){
    
}
int chercherEtudiant(Etudiant etudiant){
    char nom[20];
    char prenom[20];
    int trouve;

    FILE *fichier = NULL;   

    fichier = fopen("Etudiant.txt", "r");

    if(fichier == NULL){
        printf("Une erreur est survenu a l'ouverture du fichier\n\n");
        return EXIT_FAILURE;
    }

    rewind(fichier);

    printf("Entrez le nom de l'etudiant : ");
    scanf("%s", etudiant.nom);

    printf("Entrez le prenom de l'etuduant : ");
    scanf("%s", etudiant.prenom);

    do{ // Tant que la fin du fichier n'a pas été atteint
        if(nom){ // Si un nom a été saisie
            if(prenom){ // si un prenom a été saisie
                trouve = (strcmp(nom, etudiant.nom));
            }
            
        }
    }while(!EOF);

    if(trouve){
        printf("Trouve !");
        fscanf(fichier, "%s\n %s\n %d\n %s\n", etudiant.nom, etudiant.prenom, etudiant.age, etudiant.dateDeNaissance);
    }

    fclose(fichier);
}
int afficherEtudiants(){
    
    printf("Afficher tous les etudiants\n\n");
    
    FILE *fichier = NULL;
    fichier = fopen("Etudiant.txt", "r");
    
    if(fichier == NULL){
        printf("Une erreur est survenu a l'ouverture du fichier\n\n");
        return EXIT_FAILURE;
    }

    char c;

    while((c=fgetc(fichier)) != EOF){
        printf("%c", c);
    }
    fclose(fichier);

}