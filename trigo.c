#include<stdio.h>
#include <string.h>
#include <math.h>
#include"trigo.h"

int secim;

int main(int argc, char **argv) {
    printf("indirgeme uygulanacak fonk. sec\n1.cos\n2.sin\n3.tan\n4.cot\n==>");
    scanf("%d",&secim);
    hangifonc(secim);
    printf("%s(x)\n",ffonc);
    if (strcmp (argv[1], "-d") == 0) {
        int derece_d = 0;
        printf("x bir derece olmak üzere,\nx = ");
        scanf("%d",&derece_d);
        islem_d(derece_d,secim);

    } else {
        char radyan[10];
        printf("fonksiyonun icindeki deger örn. 2/3+a\n? ");
        scanf("%s",radyan);
        //double radyan = aci * M_PI / 180; // Dereceden radyana dönüşüm
        islem_r(radyan,secim);
        
        
    }
    return 0;
    
}