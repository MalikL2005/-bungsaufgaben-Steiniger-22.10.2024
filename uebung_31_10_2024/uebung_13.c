#include <stdio.h>


float wurzel_via_heron(float num){
    float start = num;
    float save;
    do {
        save = start;
        start = (start +(num/start))/2;
        // printf("%f\n", start);
    } while(save != start);
    return start;
}


void main(){
    int beenden = 0;
    int befehl;
    int zahl1 = 0;
    int zahl2 = 0;
    
    do { 
        printf("Gib einen Befehl (1-9)\n");
        scanf("%d", &befehl);
        switch(befehl){
              case 1: printf("Zahl 1: \n"); scanf("%d", &zahl1); break;
              case 2: printf("Zahl 2: \n"); scanf("%d", &zahl2); break;
              case 3: printf("%d + %d = %d\n", zahl1, zahl2, (zahl1 + zahl2)); break;
              case 4: printf("%d * %d = %d\n", zahl1, zahl2, (zahl1 * zahl2)); break;
              case 5: printf("%d - %d = %d\n", zahl1, zahl2, (zahl1 - zahl2)); break;
              case 6:
                  if (zahl2 != 0){ printf("%d / %d = %d\n", zahl1, zahl2, (zahl1 / zahl2)); }
                  break;
              case 7:
                  for (int i=1; i<=zahl1; i++){
                      for (int j=1; j<=zahl2; j++){
                        printf("%d\t", i*j);
                    }
                    printf("\n");
                    }
                  break;
              case 8: 
		              if (zahl1 <= 0){continue;}
                  float wurzel = wurzel_via_heron(zahl1);
                  printf("%f\n", wurzel);
                  break;
              case 9: beenden = 1;
        }
    } while(beenden == 0);
}
