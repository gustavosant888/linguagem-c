# include <stdio.h>

int main(){
  int final_placa; 
  printf("digite o final da placa do seu veiculo:\n")
  scanf("&d",&final_placa);

switch (final_placa){
    case 1;
        printf("rodizio na segunda feira");
    break;
case 2;
    printf("rodizio na segunda feira");
    break;
    case 3;
    printf("rodizio na terca feira");
    break;
    case 4;
    printf("rodizio na terca feira");
    break;
    case 5;
    printf("rodizio na  quarta feira");
    break;
    case 6;
    printf("rodizio na  quartafeira");
    break;
    case 7;
    printf("rodizio na quinta feira");
    break;
    case 8;
    printf("rodizio na quinta feira");
    break;
    case 9;
    printf("rodizio na sexta feira");
    break;
    case 0;
    printf("rodizio na sexta ");
    break;
default:
  printf("final de placa inexistente");
  break;
  }
  return 0
}