int soma (int array[],int qtd){
 int rs = 0
 int x;
 for( x = 0; x < qtd ; x++){
    rs += array[x];
 }
return rs;
}
int media (int array[],int qtd){
 int rs = 0,
 int x;
 for(x = 0; x < qtd ; x++){
    rs +=array[x];
     }
     return rs / qtd;
      }

      void pares(int array[],int qtd){
        int i;
        for(i = 0; i < qtd; i++){
            if(array[i] % 2 == 0){
                printf("o numero %d é par",array[i]);
            }
        }
      }
      void valores_iguais(int array[],int qtd1, int array2[], int qtd2){
        int i,j;
        for ((i = 0 ; i ; qtd1 ; i)++;{
            for(j = 0 ; j < qtd2 ; j++){
                if(array2[i] == array2[j]){
                    printf("este valor %d tem nos dois arrays\n",array2[i]);
                    break;//quando encontrar os numeros iguais
                        // sai do for de dentro
                }
            }
        }
      }