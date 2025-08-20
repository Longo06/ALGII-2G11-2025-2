#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL));
    int resp;
    printf("Digite sua resposta (1 para Pedra, 2 para Papel e 3 para Tesoura):");
    scanf("%d", &resp);
    int comp = (rand() % 3) + 1;
    printf("Computador: %d \n", comp);
    if (resp == 1 && comp == 3 || resp == 2 && comp == 1 || resp == 3 && comp == 2){
        printf("Você venceu!\n");
    } else if (resp == 1 && comp == 2 || resp == 2 && comp == 3 || resp == 3 && comp == 1){
        printf("Você perdeu!\n");
    } else {
        printf("Vocês empataram! \n");
    } return 0;
}