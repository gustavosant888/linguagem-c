#include <stdio.h>

int main(){
// declaração de conjunto de dados num quem guarda 
// quatro números inteiros
int num[] = {23,8,11,52,9};
int pos = 4;
while(pos >= 0){
    printf("%d\n",num[pos]);
    pos--;
}

return 0;

}