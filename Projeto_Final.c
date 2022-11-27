//Nicolas Almeida - UC22103171 - Engenharia de software / Marcos Vinicius Gonçalves da Silva - UC22200517 - Engenharia de Software / Ronaldo Cavalcante Vicente - UC22200227  - Engenharia de Software

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main (){
  int sessao, qdapessoas, sexo = 0, idade;
  const cheia = 50, meia = 25;
          
  do
  { 
    printf("Digite a quantidade de sessoes: ");
    scanf("%d",&sessao);
    system("cls");
  } while (sessao != 2);

  do 
  {
    printf("Digite a quantidade de pessoas na sessao: ");
    scanf("%d", &qdapessoas);
    system("cls");
  } while(qdapessoas < 10);   

  for (int i = 0; i <= qdapessoas; i++) {
    do
    {
      printf("Digite o sexo do cliente: ");
      scanf("%c", &sexo);
    } while (sexo == 'M' || sexo == 'F');
  }
                       
}