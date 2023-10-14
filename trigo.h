#include<stdlib.h>

char* trigo[] = {"","cos","sin","tan","cot"};
const char* ffonc;

void hangifonc(int a){
    if(a >= 1 && a <= 4){
        ffonc = trigo[a];
    } else {
        printf("Hatalı sonuc");
        exit(1);
    }
}