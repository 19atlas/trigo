#include<stdlib.h>

char* trigo[] = {"","cos","sin","tan","cot"};
const char* ffonc;

void hangifonc(int s){
    if(s >= 1 && s <= 4){
        ffonc = trigo[s];
    } else {
        printf("Hatalı secim");
        exit(1);
    }
}
void bolgeal(int aci){
    int abolge;
    if (aci >= 0 && aci < 90) {
        abolge = 1;
    } else if (aci > 90 && aci < 180) {
        abolge = 2;
    } else if (aci > 90 && aci < 180) {
        abolge = 3;
    }else if (aci > 90 && aci < 180) {
        abolge = 4;
    }
    printf("%d. bolgede",abolge);
}
//void isaret(){}

void islem_d(int n){

}
void islem_r(char deg){

}