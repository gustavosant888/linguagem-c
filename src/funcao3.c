#include <stdio.h>
void mensagem();
void linha();

int main(){

    mensagem();
    linha();

return 0;
}
void mensagem(){
    printf("ola,seja bem vindo!");
}
void linha(){
int x = 1;
printf("\n");
for(x ; x <= 20 ; x++){
    printf("-");
}
printf("\n");
}