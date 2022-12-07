//Nicolas Almeida - UC22103171 - Engenharia de software / Marcos Vinicius Gonçalves da Silva - UC22200517 - Engenharia de Software / Ronaldo Cavalcante Vicente - UC22200227  - Engenharia de Software / Erik Daniel Silva de Souza - UC22200407
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>

int main (){
  int sessao, qdapessoas, sexoM = 0, sexoF = 0, idade, i,ingresso,custoTotal=0,count=1,crianca=0,adolescente=0,adulto=0,idoso=0,quantidadepipoca, tamanho = 0, l, k, j, qntPessoasSessao=1;
  const pipocaP = 10, pipocaM = 15, pipocaG = 20;
  float valorpipoca = 0.0;
  char sexo;
  
  setlocale(LC_ALL, "Portuguese");

  do
  { 
    printf("Digite a quantidade de sessoes: ");
    scanf("%d",&sessao);
    system("cls");
  } while (sessao != 2);

  for(j=0;j<sessao;j++){

  do 
  {
    printf("Digite a quantidade de pessoas na %d° sessao: ",qntPessoasSessao);
    scanf("%d", &qdapessoas);
    system("cls");
  } while(qdapessoas < 3);

    for(i=0;i<qdapessoas;i++){

      printf("Qual o sexo do %d° cliente (M) Masculino (F) Feminino: ",count);
      fflush(stdin);
      scanf("%c", &sexo);

    if (sexo == 'M' || sexo=='m') {
          sexoM = sexoM + 1;
        do{
        printf("Qual a idade do %d° cliente: ",count);
        scanf("%d", &idade);
        }while(idade<3 && idade>100);
    }
    else if (sexo == 'F' || sexo =='f') {
      sexoF =  sexoF + 1;
        do{
        printf("Qual a idade do %d° cliente: ",count);
        scanf("%d", &idade);
        }while(idade<3 && idade>100);
    }
    
    if(idade>=3 && idade<14){
        	crianca = crianca + 1;
		} else if(idade <18){
			adolescente = adolescente + 1;
		} else if(idade <65){
			adulto = adulto + 1;
		} else {
			idoso = idoso + 1;
		}

    do{
    printf("O ingresso sera meia ou inteira (1)Meia (2)Inteira : ");
    scanf("%d", &ingresso);
    system("cls");
    } while(ingresso!= 1 && ingresso!=2);

    if(ingresso==1){
        custoTotal = custoTotal + 25;
    } else{
        custoTotal = custoTotal + 50;
    }
    count++;
}

count=1;

        for (i=0; i<qdapessoas; i++){
            
            printf("Informe quantas pipocas o %d° Cliente deseja: ", count);
            scanf("%d", &quantidadepipoca);
            
            for(k=0;k<quantidadepipoca;k++){
            printf("Escolha o tamanho da pipoca (1)pequena, (2)Média, (3)Grande para a pessoa %d: ", k);
            scanf("%d", &tamanho);
            
            switch(tamanho)
            {
                case 1 :
                {
                    valorpipoca =quantidadepipoca * pipocaP;
                    
                    break;
                }

                case 2 :
                {
                    valorpipoca = quantidadepipoca * pipocaM;
                    
                    break;
                }

                case 3 :
                {
                    valorpipoca = quantidadepipoca * pipocaG;
                    
                    break;
                }

                default:
                {
                    printf("\nNumero invalido!\n");
                }
            }
          }

            
    count++; system("cls");system("pause");
  } 


	printf("\nSexo Feminino = %d",sexoF);
	printf("\nSexo Masculino = %d",sexoM);
	printf("\nCrianças = %d",crianca);
	printf("\nAdolescentes = %d",adolescente);
	printf("\nAdulto = %d",adulto);
	printf("\nIdoso = %d\n\n",idoso);
	
  system("pause");

  

  qntPessoasSessao++;
  system("cls");
  }
}