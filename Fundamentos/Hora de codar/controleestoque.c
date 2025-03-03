#include <stdio.h>

int main(){
    //Declara varáveis Produto, estoque, valor e estoque minimo e valor total.

    char produtoA[30] = "Sapato";
    char produtoB[30] = "Camisa";

    unsigned int estoqueA = 1000;
    unsigned int estoqueB = 100;

    float valorA = 10.50;
    float valorB = 20.40;

    unsigned int estoqueMinimoA = 500;
    unsigned int estoqueMinimoB = 3500;

    double valorTotalA;
    double valorTotalB;

    int resultadoA, resultadoB;


    //Exibir informações do produtos

    printf("\n\nProduto %s tem estoque %u e o valor unitario é R$ %.2f\n\n", produtoA, estoqueA, valorA);
    printf("Produto %s tem estoque %u e o valor unitario é R$ %.2f\n\n", produtoB, estoqueB, valorB);

    //Comparação do valor minimo do estoque

    resultadoA = estoqueA > estoqueMinimoA;
    resultadoB = estoqueB > estoqueMinimoB;

    printf("o produto %s tem estoque mínimo %d\n", produtoA, resultadoA);
    printf("o produto %s tem estoque mínimo %d\n\n\n", produtoB, resultadoB);

    //Compara~ções entre os valores totais em estoque dos produtos

    valorTotalA = valorA*estoqueA;
    valorTotalB = valorB*estoqueB;

    if (valorTotalA>valorTotalB)
    {
        printf("O valor Total de  %s (R$ %.2lf) é maior que o de %s (R$ %.2lf)", produtoA, valorTotalA, produtoB, valorTotalB);
    }else{
        printf("O valor Total de  %s (R$ %.2lf) é maior que o de %s (R$ %.2lf)", produtoB, valorTotalB, produtoA, valorTotalA);
    }
     


}