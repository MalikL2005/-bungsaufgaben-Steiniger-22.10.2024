#include <stdio.h>
#include <stdlib.h>
#define arr_size 2


int main(){
    double v1[arr_size] = {1., 2.};
    double v2[arr_size] = {1., 2.};

    printf("Via statischer Arrays\n");
    double skalarProdukt=0;
    for (int i=0; i<arr_size; i++){
        skalarProdukt += v1[i] * v2[i];
    }
    printf("%lf\n", skalarProdukt);

    printf("Via pointer\n");
    skalarProdukt=0;
    double *pV1 = v1;
    double *pV2 = v2;
    for (int i=0; i<arr_size; i++){
        skalarProdukt += *(pV1+i) * *(pV2+i);
    }
    printf("%lf\n", skalarProdukt);


    printf("Via pointer im Heap\n");
    skalarProdukt=0;
    // pointer im heap allocieren
    double *pV1zwei = calloc(arr_size, sizeof(double));
    double *pV2zwei = calloc(arr_size, sizeof(double));

    // pointer "Arrays" füllen
    for (int i=0; i<arr_size; i++){
        *(pV1zwei+i) = i+1;
        *(pV2zwei+i) = i+1;
    }

    // skalarProdukt kalkulieren
    for (int i=0; i<arr_size; i++){
        skalarProdukt += *(pV1zwei+i) * *(pV2zwei+i);
    }
    printf("%lf\n", skalarProdukt);

    return 0;
}
