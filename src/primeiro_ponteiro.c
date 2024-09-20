# include <stdio.h>

void exibir(int v,int *p){
    v+=30;
    *p+=30;
    printf("%d  -> %p\n",v, &v);
    print ("%d -> %p\n",*p, p);
}
int main(){
    int n = 40;
    printf("%d -> %p\n",n,&n);
}