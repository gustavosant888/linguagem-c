#include <stdio.h>

float main()
{
   float n1,n2,n3,n4,media; 

    printf("digite a primeira nota do aluno:\n");
    scanf("%f", &n1);
    
     printf("digite a segunda do aluno:\n");
     scanf("%f", &n2);
     
    printf("digite a terceira nota do aluno\n");
    scanf("%f", &n3);

     printf("digite a quarta nota do aluno\n");
    scanf("%f", &n4);

 media=(n1+n2+n3+n4 )/ 4;
 // para alunos com nota maior ou igual a 6, aprovado
 // para alunos com nota menor ou igual a 4, reprovado
 // para os demais com notas entre maior 4 e menor, recuperação 
  if(media >=6){ 
    printf("o aluno foi aprovado é:\n");
    }
     else if(media <=4){    
    printf("a aluno esta reprovado é:\n");
     }
    


    else{  
    printf("a nota media do é\n e esta de recuperação");
    }



 return 0;
  
}
          

     

       



    




