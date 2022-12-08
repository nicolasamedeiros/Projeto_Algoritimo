//Nicolas Almeida - UC22103171 - Engenharia de software / Marcos Vinicius Gon�alves da Silva - UC22200517 - Engenharia de Software / Ronaldo Cavalcante Vicente - UC22200227  - Engenharia de Software / Erik Daniel Silva de Souza - UC22200407

//utilizar a iso 8859-15 no lugar da utf-8

//Bibliotecas
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>

int main (){
  //Declaraclara��o das variaveis
  int sessao, qdapessoas, sexoM = 0, sexoF = 0, idade, i, ingresso, custoTotal=0, count=1, crianca=0, adolescente=0, adulto=0, idoso=0,quantidadepipoca=1, tamanho = 0, l, k, j, qntPessoasSessao=1;
  const pipocaP = 10, pipocaM = 15, pipocaG = 20;
  float valorpipoca = 0.0;
  char sexo;
  
  //Fun��o para aceitar caracteres especiais
  setlocale(LC_ALL, "Portuguese");

  //Pergunta a quantidade de sess�es enquanto o valor for diferente de 2
  do
  { setlocale(LC_ALL, "Portuguese");
    printf("Digite a quantidade de sess�es: ");
    scanf("%d",&sessao);
    system("cls");
  } while (sessao != 2);

  //enquanto j for menor que sessao ele executa o codigo e no final acresenta mais um no j
  for(j=0;j<sessao;j++){

  //pergunta a quantidade de pessoas na sessao enquanto a quantidade de pessoas for menor que 10  
  do 
  { 
    setlocale(LC_ALL, "Portuguese");
    printf("Digite a quantidade de pessoas na %d� sessao: ",qntPessoasSessao);
    scanf("%d", &qdapessoas);
    system("cls");
  } while(qdapessoas < 2);

    //enquanto i for menor que a quantidade de pessoas ele executa o codigo e no final acresenta mais um no i
    for(i=0;i<qdapessoas;i++){

      //pergunta o sexo do cliente e armazena na variavel sexo
      setlocale(LC_ALL, "Portuguese");
      printf("Qual o sexo do %d� cliente (M) Masculino (F) Feminino: ",count);
      fflush(stdin);
      scanf("%c", &sexo);

    //se sexo for igual a M acresecnta 1 na variavel sexoM e pergunta qual a idade do cliente
    if (sexo == 'M' || sexo=='m') {
          sexoM = sexoM + 1;
        do{
        setlocale(LC_ALL, "Portuguese");
        printf("Qual a idade do %d� cliente: ",count);
        scanf("%d", &idade);
        }while(idade<3 && idade>100);
    }
    //se sexo for igual a F acresecnta 1 na variavel sexoF e pergunta qual a idade do cliente
    else if (sexo == 'F' || sexo =='f') {
      sexoF =  sexoF + 1;
        do{
        setlocale(LC_ALL, "Portuguese");  
        printf("Qual a idade do %d� cliente: ",count);
        scanf("%d", &idade);
        }while(idade<3 && idade>100);
    }
    
    if(idade>=3 && idade<14){ //se idade for maior ou igual a 3 e idade menor que 14 acrescenta um na variavel crian�a
        	crianca = crianca + 1;
		} else if(idade < 18){ //se idade for menor que 18 acrescenta um na variavel adolescnete
			adolescente = adolescente + 1;
		} else if(idade <65){ //se idade for menor que 65 acrescenta um na variavel adulto
			adulto = adulto + 1;
		} else { //se idade for maior que 65 acrescenta um em idoso
			idoso = idoso + 1;
		}

    //pergunta se o ingresso ser� meia ou interira enquanto o valor for diferente de 1 e 2
    do{
    printf("O ingresso sera meia ou inteira (1)Meia (2)Inteira : ");
    scanf("%d", &ingresso);
    system("cls");
    } while(ingresso!= 1 && ingresso!=2);

    //se ingresso for igual a 1, recebe ele + 25 porem se ingresso for igual a 2, recebe ele + 50
    if(ingresso==1){
        custoTotal = custoTotal + 25;
    } else{
        custoTotal = custoTotal + 50;
    }
}

          //enquanto i for menor que a quantidade de pessoas ele executa o codigo e no final acresenta mais um no i
        for (i=0; i<qdapessoas; i++){
            setlocale(LC_ALL, "Portuguese");
            printf("Informe quantas pipocas o %d� Cliente deseja: ", count);
            scanf("%d", &quantidadepipoca);
            
            for(k=0;k<quantidadepipoca;k++){ //enquanto k for menor que quantidade de pipoca ele executa o codigo e no final acresenta mais um no i
            setlocale(LC_ALL, "Portuguese");
            printf("Escolha o tamanho da pipoca (1)pequena, (2)M�dia, (3)Grande para a pessoa %d�: ", count);
            scanf("%d", &tamanho);
            
            switch(tamanho)//como abre um  lek de op��es para o cliente decidir 
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
            printf("valor da pipoca: R$%.2f\n", valorpipoca);
            system("pause");
          }

     system("cls");system("pause");
  } 

  // Sa��da de dados da primeira e segunda sess�o
  setlocale(LC_ALL, "Portuguese");
	printf("Sexo Feminino = %d\n",sexoF);
	printf("Sexo Masculino = %d\n",sexoM);
	printf("Crian�as = %d\n",crianca);
	printf("Adolescentes = %d\n",adolescente);
	printf("Adulto = %d\n",adulto);
	printf("Idoso = %d\n",idoso);
  printf("Valor total arrecadado na sess�o R$ = %d\n", custoTotal);

  system("pause");

  

  qntPessoasSessao++;
  system("cls");
  }
}