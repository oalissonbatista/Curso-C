#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL,""); //(para por acento)
    //printf("Alisson");
    int a = 90;
    printf("O valor de 'a' � = %d \n", a);
    scanf("%d", &a);
    printf("o valor de a mudou para = %d \n", a);
    int b = 45;
    printf("o valor de 'b' � = %d \n", b);
    printf("A soma de a + b = %d", a + b);

    float c = 90.50;
    printf("O valor de 'a' � = %f \n", c);
    scanf("%f", &c);
    printf("o valor de a mudou para = %f \n", c);

    char d = 'a';
    printf("O valor de 'a' � = %c \n", d);
    fflush(stdin);
    scanf("%c", &d);
    printf("o valor de a mudou para = %c \n", d);
}
