#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main(){
 // while (1){
int weiter = 1;
do {
    time_t sec;
    sec = time(NULL);
    srand(sec);
    int random = (rand() %15)+1;
    int aktuell;
    int gewonnen = 0;
    int versuche = 3;
    while (versuche > 0){
      printf("Gib eine Zahl: ");
      scanf("%d", &aktuell);
      if (aktuell == random){
        printf("Richtig.\n");
        gewonnen = 1;
        break;
      } else if (aktuell > random) {
        printf("Falsch... \nZahl ist zu groß.");
        versuche --;
      } else {
        printf("Falsch... \nZahl ist zu klein.");
        versuche --;
      }
    }

    if (gewonnen){
      if (versuche == 3){
        printf("Spieler hat gewonnen. Du hast nur einen Versuch gebraucht\n");
      } else{
        printf("Spieler hat gewonnen. Du hast %d Versuche gebraucht\n", (4-versuche));
      }
    } else {
      printf("Leider verloren...\n");
    }
    char spiel_beenden;
    printf("Nochmal spielen? (j/n)");
    scanf(" %c", &spiel_beenden);
    switch (spiel_beenden){
      case 'j':
      case 'J': weiter = 1; break;
      case 'n':
      case 'N': weiter = 0; break;
      default: ; //leere Anweisung 
    }
    //if (!weiter){
     // break;
  } while (weiter == 1);
  printf("Tschüss\n");
}
