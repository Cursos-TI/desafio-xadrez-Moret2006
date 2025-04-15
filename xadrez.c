#include <stdio.h>


int main() {

int torre = 1;
int rainha = 1;
int bispo = 1;
while (bispo <= 5)
{
    printf("Bispo se movel para cima, direita\n");
    bispo ++;
}


for (int torre = 0; torre < 5; torre++)
{
    printf("torre foi direita\n");
}


do
{
    printf("rainha andou para direita\n");
    rainha ++;
} while (rainha <= 8);



    return 0;
}
