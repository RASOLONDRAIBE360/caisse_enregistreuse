#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    double mtt_donne;
    srand(time(NULL));
    double v_payer = rand()%2000;
    printf("Le montant donner par le client :\n");
    do{
    printf("=> ");
    scanf("%lf", &mtt_donne);
    if(mtt_donne<v_payer){
        printf("Veuillez resaisir une nouvelle montant!!!");
                        }
      }
    while(mtt_donne<v_payer);
    
}
