#include <iostream>
#include <cstdio>
#include <locale.h>

int main() {
            setlocale(LC_ALL, "Portuguese");
    int i,f,t;
    
    printf ("digite a hora de inicio do jogo: ");
    scanf ("%d", &i);
    
    printf ("digite a hora de fechamento do jogo: ");
    scanf("%d", &f);
    
    if (f >= i) {
        t = f - i;
        printf (" a duraçâo do jogo foi de %d horas\n", t);
    } else {
        t = (24 - i) + f; 
    }
   printf (" a duraçâo do jogo foi de  %d horas\n", t);
    return 0;
}
