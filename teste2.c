#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main (){
    setlocale(LC_ALL,"");

    float a, b ,resultado;

    printf("Digite o primeiro valor: \n");
    scanf("%f", &a);

    printf("Digite o segundo valor: \n");
    scanf("%f", &b);

    resultado=(a / b);
    printf("A media entre %f e %f é = %f \n", a, b,(resultado));

    system("pause");

}
