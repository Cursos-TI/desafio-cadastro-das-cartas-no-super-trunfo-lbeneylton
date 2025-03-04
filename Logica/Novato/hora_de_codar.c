#include <stdio.h>
/*
Programa que analisa a segurança de um galpão
Verificando 3 atributos de segurança: Temperatura, Umidade, Nivel de estoque
Se alguma desses atributos estiverem fora do padrão de segurança
o programa deve emitir um alerta
*/

int main(){
    //Declaração de variaveis
    float temperatura, umidade, temperaturaMaxima=30, umidadeMaxima=50;
    unsigned int estoque, estoqueMinimo=1000;

    //Entrada das informações
    printf("\n\n");
    printf("Entre com a temperatura em °C\n");
    scanf(" %f", &temperatura);

    printf("\n\n");
    printf("Entre com a umidade (em g/m³)\n");
    scanf(" %f", &umidade);

    printf("\n\n");
    printf("Entre com a quantidade de estoque\n");
    scanf(" %u", &estoque);

    //Verificação de temperatura
    printf("\n\n");
    if(temperatura >= temperaturaMaxima){
        printf("A temperatura está alta");
    }else{
        printf("A temperatura está dentro dos parametros");
    }
    
    //Verificação da umidade
    printf("\n\n");  
    if (umidade >= umidadeMaxima){
        printf("A umidade está elevada");
    }else{
        printf("A umidade está dentro dos parametros");
    } 
    
    //Verificação do estoque
    printf("\n\n");  
    if (estoque <= estoqueMinimo){
        printf("O estoque abaixo do minimo");
    }else{
        printf("O estoque está com o volume adequado");
    }

    printf("\n\n");   

}