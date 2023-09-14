#include <stdio.h>

int main() {
    char mot [] = "chat";
    int longmot = 4;
    char lettredeviner [4];
    char lettrecacher[4];
    int error = 0;
    int lettrerestantes = longmot;

    for (int i = 0; i < longmot; ++i) {
        lettredeviner[i] = '-';
        lettrecacher[i] = mot [i];
    }
    while (error < 6){
        printf("Mot secret: ");
        for (int i = 0; i < longmot; ++i) {
            printf("%c", lettredeviner[i]);
        }
        char letter;
        printf("\nVeuillez sasir une lettre : ");
        scanf(" %c", &letter);

        int letterfind = 0;

        for (int i = 0; i < longmot; ++i) {
            if(lettrecacher[i] == letter){
                lettredeviner[i] = letter;
                letterfind = 1;
                lettrerestantes --;
            }

        }
        if(!letterfind){
            error ++;
            printf("Desolee la lettre ne fait pas partie du mot secret. Nombre d'erreur: %d", error);

        }
        if(lettrerestantes == 0){
                printf("Bravo, vous avez reussi a trouver le mot secret");
                break;
            }
        if(error >= 6){
                printf("\nVous avez perdu.");
            }


    }
    return 0;
}
