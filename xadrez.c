#include <stdio.h>

int main() {

int torre = 1;

int rainha = 1;

int bispo = 1;
int bispomov;
char bispodir;

int cavalo;

int i = 1;
printf("quantas casa na diagonal vc quer q seu bispo ande?\n");
scanf("%d", &bispomov);

printf("em qual direção?\ndireita = D\nesquerda = E \n");
scanf("%c \n", &bispodir);

if (bispodir = 'D')
{
    while (bispo <= bispomov)
    {
    printf("Bispo se movel para cima, Direita \n");
    bispo ++;
    } 
}else if (bispodir = 'E')
{
    while (bispo <= bispomov)
    {
    printf("Bispo se movel para cima, Esquerda \n");
    bispo ++;
    } 
}


/*     while (bispo <= bispomov)
    {
    printf("Bispo se movel para cima, %c \n", bispodir);
    bispo ++;
    }
*/

    for (int torre = 0; torre < 5; torre++)
    {
    printf("torre foi direita\n");
    }


    do
    {
    printf("rainha andou para direita\n");
    rainha ++;
    }   while (rainha <= 8); 



    for(cavalo = 0; cavalo < 1; cavalo++)
    {
        for(i = 0; i < 2; i++)
        {
        printf("cima\n");
        }
    printf("direita");
    }


return 0;
}
