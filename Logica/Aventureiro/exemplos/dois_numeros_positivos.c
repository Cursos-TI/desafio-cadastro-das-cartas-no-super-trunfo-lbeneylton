#include <stdio.h>

int main(){
    int a=0, b=-2;

    printf("\n\n");
    if (a>0 && b>0){
        printf("Os dois números são positivos.");
    }

    if( a>0 || b>0){
        printf("Pelo menos um dos números é positivo.");
    }
    
    if (!a){
        printf("A é 0.");
    }

    if (!b){
        printf("B é 0.");
    }
    
    printf("\n\n\n");
    
}