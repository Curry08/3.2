#include <stdio.h>

int main() {
    int num;
    printf("Inserisci un numero: ");
    scanf("%d",&num);
    if(num==0){
        printf("Il numero è nullo, cioè 0");
    }
    else{
        if(num>0) {printf("Il numero è positivo");}
        else{printf("Il numero è negativo");}}
        return 0;
    }

