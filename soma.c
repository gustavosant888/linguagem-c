#include <stdio.h>

int main(){
 int v1,v2, rs; 

    printf("digite um número:\n");
    scanf("%d",&v1);
    //o comando scanf, realiza a captura do numero que o usuario ira digitar
    // após capturar o numero sera alocado na variavel v1   
     printf("digite outro número:\n");
     scanf("%d",&v2);
     
     printf("o valor de v1 é %d e esta em %p \n", v1, &v1);
     printf("o valor de v2 é %d e esta em %p \n", v2, &v2);

rs = v1 + v2;
printf("o resultado da soma é %d \n",rs);


 return 0;
}