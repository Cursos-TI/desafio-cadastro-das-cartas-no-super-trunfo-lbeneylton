#include <stdio.h>
#include <stdlib.h>


int main(){
    double nota1, nota2, nota3, media;
    printf("Entre com a primeira nota do aluno\n");
    scanf(" %lf", &nota1);

    printf("\nEntre com a segunda nota do aluno\n");
    scanf(" %lf", &nota2);

    printf("\nEntre com a terceira nota do aluno\n");
    scanf(" %lf", &nota3);

    media = (nota1 + nota2 + nota3)/3;
    printf("A  média do aluno é %.2lf\n\n", media);

    return 0;
}



