#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>
 //salve
int main (){
  int sessao, qdapessoas, sexoM = 0, sexoF = 0, idade, i,ingresso,custoTotal=0,count=1,crianca=0,adolescente=0,adulto=0,idoso=0;
  char sexo;

  setlocale(LC_ALL, "Portuguese");

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

    for(i=0;i<qdapessoas;i++){
      idade = 0;
      printf("Qual o sexo do %d° cliente: ",i+1);
      fflush(stdin);
      scanf("%c", &sexo);

      if (sexo == 'M' || sexo =='m') {
        sexoM = sexoM + 1;
        do{
          printf("Qual a idade do %d° cliente: ",count);
          scanf("%d", &idade);
        }while(idade<=3 && idade>=100);
      }
      else if (sexo == 'F' || sexo =='f') {
        sexoF =  sexoF + 1;
        do{
          printf("Qual a idade do %d° cliente: ",i+1);
          scanf("%d", &idade);
        }while(idade<=3 && idade>=100);

            if(idade>=3 && idade<14){
                crianca = crianca + 1;
            } else if(idade >= 14 && idade < 18){
                adolescente = adolescente + 1;
            } else if(idade >= 18 && idade < 65){
                adulto = adulto + 1;
            } else {
                idoso = idoso + 1;
            }
        }
    }



    do{
      printf("O ingresso sera meia ou inteira (1)Meia (2)Inteira : ");
      scanf("%d", &ingresso);
    } while(ingresso != 1 || ingresso !=2);

    if(ingresso == 1){
        custoTotal = custoTotal + 25;
    } else{
        custoTotal = custoTotal + 50;
    }
    count++;

	printf("\nSexo Feminino = %d",sexoF);
	printf("\nSexo Masculino = %d",sexoM);
	printf("\nCrianças = %d",crianca);
	printf("\nAdolescentes = %d",adolescente);
	printf("\nAdulto = %d",adulto);
	printf("\nIdoso = %d",idoso);
	printf("\nValor Total =  %d", custoTotal);
}
