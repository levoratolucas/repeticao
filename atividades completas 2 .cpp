#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <cctype>
#include <time.h>
	void limpaBuffer() {//limpa buffer//
	    int c;
	    while ((c = getchar()) != '\n' && c != EOF); 
	}
	void data_(){
		
		time_t tempoAtual;
	    struct tm *infoTempo;
	
	    time(&tempoAtual);  
	    infoTempo = localtime(&tempoAtual); 
	
	   
	    int ano = infoTempo->tm_year + 1900;
	    int mes = infoTempo->tm_mon + 1;     
	    int dia = infoTempo->tm_mday;    
		printf("Data atual: %02d/%02d/%02d \n",dia, mes, ano);
	}	
	
	int resultado;
	
	void validador(){//verifica numero ****a variavel resultado retorna oque digitou verificado****
		int inteiro,  retorno = -1;
		retorno=	scanf ("%d", &inteiro);	   
		   if (retorno == 1 ) {
	        resultado=inteiro;
	    } else {
	        printf("invalido \n");
	    }
	}

/*1. Escreva um algoritmo que leia dois números e efetue a adição dos mesmos. Caso o valor somado seja
menor que 20, este deverá ser apresentado somando-se a ele mais 8; caso o valor somado seja igual
ou maior que 20, este deverá ser apresentado subtraindo-se 5.*/

	void soma_atividade1(){
	float num1 , num2, soma;
	printf("escreva dois numeros \n");
	
	scanf("%f%f", &num1 , &num2);
	
	soma = num1 + num2;
	

	if( soma < 20){		
		printf("a soma foi %f , e como foi menor que vinte, 8 foram acrescidos, então seu numero agora é %f \n",soma ,soma + 8);
	}
	
	else{		
		printf("a soma foi %f , e como foi maior que vinte, 5 foram subtraidos, então seu numero agora é %f \n",soma ,soma - 5);
	}
	

}


/*2. Escreva um algoritmo que leia dois números inteiros e os apresente em ordem crescente.*/
	 void crescente(){
	 	int NUM1, NUM2, NUM3;
	 	
	 	printf("escreva dois numeros inteiros.\n");
	 	scanf("%d%d",&NUM1,&NUM2);
	 	
	 	if( NUM1 > NUM2 ){
		  NUM3=NUM1;
		  NUM1=NUM2;
		  NUM2=NUM3;
		 }
		 printf("a ordem crescente é \n%d\n%d",NUM1,NUM2);
	 }


/*3. Escreva um algoritmo que leia um número inteiro e apresente o seu valor absoluto.*/
	void absoluto(){
		float num;
		printf("digite um numero, em seguida sera mostrado como absoluto.");
		scanf("%f",&num);
		
		if(num < 0){ num = num * -1;}
		printf("\n seu numero absoluto é: %f",num);
	}

/*4. Tendo como dados de entrada a altura e o gênero de uma pessoa, construa um algoritmo que calcule
o seu peso ideal, de acordo com as seguintes fórmulas:
Para homens: 72.7 x altura - 58
Para mulheres: 62.1 x altura - 44.7*/
	void peso(){
		char nome[20], genero;
		float altura, peso, pIdeal;
		
		printf("qual seu genero? (M/F)");
		scanf(" %c",&genero);
		printf("qual seu nome?");
		scanf(" %s",nome);
		printf("qual sua altura?");
		scanf(" %f",&altura);
		printf("qual seu peso?");
		scanf(" %f",&peso);
		
		if (genero == 'm' || genero == 'M'){ 
		pIdeal = 72.7 * altura - 58;
		printf("seu peso ideal %.2f",pIdeal);
		}
		else if (genero == 'f' || genero == 'F'){ 
		pIdeal = 62.1 * altura - 44.7;
		printf("seu peso ideal %.2f",pIdeal);}
		else {printf("genero não cadastrado no calculo, desculpe o transtorno");}
		
	}

/*5. Escreva um algoritmo que mostre se um número digitado está compreendido entre 20 e 90 (inclusive)
ou não.*/
	void intervalo(){
		float num;
		printf("escreva um numero entre 20 e 90\n");
		scanf("%f",&num);
		
		if(num >= 20 || num <= 90){printf("seu numero esta seguindo a intrução, você digitou: %f",num);
		}
		else if (printf("você não segiu a regra, digitou: %f",num));
		
	}


/*6. Escreva um algoritmo que efetue a leitura de um número inteiro e apresente se esse número é
divisível por 2 e divisível por 3.*/

		void divisivel_2e3(){
			
			int num;
			
			printf("digite um numero inteiro\n");
			scanf("%d",&num);
			
			if ( num % 6 == 0){
				printf("\neste numero e divisivel por 2 e 3\n ");
				
			}
			
			else if ( num % 3 == 0){
				printf("\neste numero e divisivel por 3\n");
				printf("voce digitou %d",num);
			}
			else if ( num % 2 == 0){
				printf("\n este numero é divisivel por 2.\n");
				printf("voce digitou %d",num);
			}
			else {
				printf("voce digitou um numero que não é divisivel por 2 ou 3\n");
				printf("voce digitou %d",num);
			}
			
		}


/*7. Escreva um algoritmo que efetue a leitura de um número inteiro e apresente se esse número é
divisível por 2 ou divisível por 7.*/
			void divisivel_2ou7(){
			
			int num;
			
			printf("digite um numero inteiro \n");
			scanf("%d",&num);
			
			if ( num % 2 == 0){
				printf("\neste numero e divisivel por 2\n");
				printf("voce digitou %d",num);
			}
			
			else if ( num % 7 == 0){
				printf("\neste numero e divisivel por 7\n");
				printf("voce digitou %d",num);
			}
			else{
				printf("\n caraca não e divisivel por 2 ou 7 hahaha, voce digitou %d",num);
			}
			
		}


/*8. Escreva um algoritmo que leia um número inteiro e, caso este número seja positivo, apresente uma
mensagem indicando se ele é par ou ímpar. Caso o número seja negativo, apresente o seu valor
absoluto.*/
	
 	void positivoNegativo(){
			int num; 
			printf("Digite um numero positivo ou negativo.\n");
			scanf("%d",&num);
			
			if( num < 0){
				num = abs(num);
				printf("o numero absoluto e %d",num);				
			}
			else if(num % 2 == 0){
				printf("voce digitou %d, um numero par",num);
			}
			else {
				printf("voce digitou %d, um numero impar",num);
			}
}

/*9. Escreva um algoritmo que, dada a idade de uma pessoa, determine sua classificação como menor de
idade (menos de 18 anos), maior de idade ou terceira idade (idade igual ou superior a 65 anos).*/

		void idade_(){
			time_t tempoAtual;
	    struct tm *infoTempo;
	
		    time(&tempoAtual);  
		    infoTempo = localtime(&tempoAtual); 
	
	   
		    int anoN, ano = infoTempo->tm_year + 1900;
		    int mesN, mes = infoTempo->tm_mon + 1;     
		    int diaN, dia = infoTempo->tm_mday;
			char nome[20];
			int dataNasc, idade, caso, mesidade;
			printf("qual seu nome?");
			scanf(" %s: ",&nome);
			printf("qual sua data de nascimento?");
			printf("\ndia: ");
			scanf("%d",&diaN);
			printf("mes: ");
			scanf("%d",&mesN);
			printf("ano: ");
			scanf("%d",&anoN);
			
			mesidade = mes - mesN;
			if( anoN < ano - 2000 && anoN >= 0){
				anoN = anoN + 2000;
			}
			if( anoN < 100 && anoN > ano - 2000){
				anoN = anoN + 1900;
			}
			if( mesN > mes){
				anoN = anoN +1;
			mesidade =	12 -(mesN - mes)  ;
			}
			
			idade = ano-anoN;
			if(idade < 18){
        		caso = 1;
			}
			else if (idade >= 18 && idade <60){
				caso = 2;
			}
			else{ 
				caso = 3;
			}
			switch(caso){
				case   1: printf("\n%s voce é menor de 18 anos, voce tem %d anos %d meses %d dias",nome, idade, mesidade,dia-diaN );break;
				case   2: printf("\n%s voce tem mais de 18 anos, voce tem %d anos %d meses %d dias",nome, idade, mesidade,dia-diaN);break;
				default: printf("\n%s voce tem mais de 60 anos, voce tem %d anos %d meses %d dias",nome, idade, mesidade,dia-diaN);break;
			}
			
			
		}
  

/*10. Em uma certa papelaria, até 100 folhas, a cópia do xerox custa R$ 0,25 e, acima de 100 folhas, cada
cópia adicional custa R$ 0,20. Escreva um algoritmo que dado o número total de cópias, informe o
valor a ser pago.*/
		void papelaria(){
			int copias, total;
			char nome[20];
			printf("qual seu nome?");
			scanf(" %s: ",&nome);
			printf("%s ,quantas copias vai querer?",nome);
			scanf("%d",&copias);
			if(copias <=100){
				printf("suas copias ficaram %.2f reias",copias * 0.25);
			}
			else{
				printf("suas copias ficaram %.2f reias",(copias - 100) * 0.20 +25);
			}
		}		

/*11. Escreva um algoritmo que leia o valor de dois números inteiros e a operação aritmética desejada.
Calcule então o resultado utilizando os símbolos da tabela a seguir como referência para o cálculo.*/
 
		void calculadora(){
			float num1 , num2;
			char caso;
			
			printf("\ndigite um numero?\n");
			scanf("%f", &num1);
			printf("deseja fazer qual operacao? \n + - soma. _ -subtracao. * - multiplicacao. / - divisao. ");
			scanf("%s", &caso);
			printf("\ndigite outro numero?\n");
			scanf("%f", &num2);
			switch(caso){
				
				case '+': 	printf("\n %.2f + %.2f = %.2f \n",num1, num2, num1 + num2 ); break;
				case '-': 	printf("\n %.2f - %.2f = %.2f \n",num1, num2, num1 - num2 ); break;
				case '*': 	printf("\n %.2f * %,2f = %.2f \n",num1, num2, num1 * num2 ); break;
				case '/': 	printf("\n %.2f / %.2f = %.2f \n",num1, num2, num1 / num2 ); break;
				default:	printf("\n !!!INVALIDO!!! \n" ); break;
				
			}
		}

/*12. Escreva um algoritmo que converta números inteiros, de sua representação numérica para
representação em extenso. O algoritmo deverá solicitar ao usuário um número inteiro (de 0 a 9) e
mostrar na tela o valor em extenso. Por exemplo, se o usuário digitar "7", o algoritmo deverá mostrar
"Sete". Se o usuário digitar um valor fora da faixa prevista (de 0 a 9), o algoritmo deverá mostrar "Valor
inválido".*/

		void extenso(){
			int num;
						
			printf("\ndigite um numero entre 0 e 9.\n");
			scanf("%d", &num);
			
			switch(num){
				case 0 : printf("\nvoce digitou: ZERO\n"); break;
				case 1 : printf("\nvoce digitou: UM\n");; break;
				case 2 : printf("\nvoce digitou: DOIS\n"); break;
				case 3 : printf("\nvoce digitou: TRES\n"); break;
				case 4 : printf("\nvoce digitou: QUATRO\n"); break;
				case 5 : printf("\nvoce digitou: CINCO\n"); break;
				case 6 : printf("\nvoce digitou: SEIS\n"); break;
				case 7 : printf("\nvoce digitou:SETE\n"); break;
				case 8 : printf("\nvoce digitou: OITO\n"); break;
				case 9 : printf("\nvoce digitou: NOVE\n"); break;
				default :printf("            %d\n!!!valor invalido!!!\n",num); break;
			}
		}


/*13. Escreva um algoritmo que leia três números inteiros e apresente na tela o menor valor.*/
		void menor_valor(){
			int rep;
			float num, menor;
			printf("quantos numeros tem sua lista\n");
			scanf("%d",&rep);
			printf("digite o 1° numero de sua lista\n ");
			
			scanf("%f",&num);
			menor = num;
					
			for (int i = 2; i <= rep && num > 0; i++) {
   						printf("digite o %d° numero de sua lista\n ", i);
						scanf("%f",&num);
   					if(num < menor && num >= 0 ){
   						menor = num;
   						 
				   }
   				else if(num  >= 0 || num == 0  ){
				   	num = num ;
				   }
				  
				    if(num < 0){
					   printf("numeros negativos nao sao permitidos.\n!!!!processo interrompido!!!! \n");	
					   }
					else {printf("caracteres ou letras nao sao permitidos.\n!!!!processo interrompido!!!! \n");
					}
					
					
				}
   				printf("o menor numero de sua lista e %.2f \n",menor);	
		}

/*14. Um posto está vendendo combustíveis com a seguinte tabela de descontos:
Escreva um algoritmo que leia o número de litros abastecidos, o tipo de combustível (codificado com 1 para
álcool e 2 para gasolina), o preço do litro do combustível e apresente o valor a ser pago pelo cliente.*/
		
		void gasolina(){
			int combustivel;
			float litros;
			
			printf(" Vamos de gasolina ou etanol?\n1 - Etanol 3,79 \n2 - Gasolina 5,59\n");
			scanf("%d",&combustivel);
			if(combustivel < 0 && combustivel > 3){
			printf("quantos litros abastecer?\n");
			scanf("%f",&litros);
			}
			
			switch (combustivel){
				
				case 1: printf("abastecimento concluido, sao %.2f de etanol e vai custar %.2f reais",litros, litros * 3.79); break;
				case 2: printf("abastecimento concluido, sao %.2f de gasolina e vai custar %.2f reais",litros, litros * 5.59); break;
				default: printf("combustivel indispinivel"); break;
			}
			
			
		}

/*15. Uma frutaria está vendendo frutas com a seguinte tabela de preços:
Se o cliente comprar mais de 10 kg em frutas ou se o valor total da compra ultrapassar R$ 50,00, receberá
ainda um desconto de 10% sobre este total. Escreva um algoritmo para ler a quantidade (em kg) de
morangos e a quantidade (em kg) de maças adquiridas e escreva o valor a ser pago pelo cliente.*/
	
	//Até 5 Kg Acima de 5 KgMorango R$ 6.50 por Kg R$ 6.20 por KgMaçã R$ 3.80 por Kg R$ 3.50 por Kg
	
	void frutaria(){
		
		float pesoTotal, maca , morango, precoMorango = 6.5, precoMaca = 3.8, precoTotal;
		
		printf("quantos quilos de maca quer comprar?\n");
		scanf("%f", &maca);
		printf("quantos quilos de morango quer comprar?\n");
		scanf("%f", &morango);
		pesoTotal = maca + morango;
		if( morango >= 5){
			precoMorango = 6.2;
		}
		if( maca >= 5){
			precoMaca = 5;
		}
		precoTotal = precoMaca * maca + precoMorango * morango;
		if(precoTotal > 50){
			precoTotal = precoTotal * 1.1;
		}
		printf("\nvoce comprou %.3f KG de frutas e vai custar %.2f reais", pesoTotal, precoTotal);
		
	}
	
	void idadedias(){
		
			time_t tempoAtual;
	    	struct tm *infoTempo;
	
		    time(&tempoAtual);  
		    infoTempo = localtime(&tempoAtual); 
	
	   
		    int anoN, ano = infoTempo->tm_year + 1900;
		    int mesN, mes = infoTempo->tm_mon + 1;     
		    int diaN, dia = infoTempo->tm_mday;
			char nome[20];
			int dataNasc, idade, caso, mesidade , diaIdade;
			printf("qual seu nome?");
			scanf(" %s: ",&nome);
			printf("qual sua data de nascimento?");
			printf("\ndia: ");
			scanf("%d",&diaN);
			printf("mes: ");
			scanf("%d",&mesN);
			printf("ano: ");
			scanf("%d",&anoN);
			mesidade = mes - mesN;
			diaIdade = dia-diaN;
			if(dia < diaN){
				diaIdade = 30 - dia; 
			}
			if( anoN < ano - 2000 && anoN >= 0){
				anoN = anoN + 2000;
			}
			if( anoN < 100 && anoN > ano - 2000){
				anoN = anoN + 1900;
			}
			if( mesN > mes){
				anoN = anoN +1;
			mesidade =	12 -(mesN - mes)  ;
			}
			
			idade = ano-anoN;
			
			int dias_vivo ;
			dias_vivo =  (idade*365) + (mesidade * 30) + diaIdade;
			if(idade < 18){
        		caso = 1;
			}
			else if (idade >= 18 && idade <60){
				caso = 2;
			}
			else{ 
				caso = 3;
			}
			switch(caso){
				case   1: printf("\n%s voce é menor de 18 anos, voce tem %d anos %d meses %d dias",nome, idade, mesidade,diaIdade );
						  printf("\n você viveu %d dias",dias_vivo );break;
				case   2: printf("\n%s voce tem mais de 18 anos, voce tem %d anos %d meses %d dias",nome, idade, mesidade,diaIdade);
						  printf("\n você viveu %d dias",dias_vivo );break;
				default: printf("\n%s voce tem mais de 60 anos, voce tem %d anos %d meses %d dias",nome, idade, mesidade,diaIdade);
						  printf("\n você viveu %d dias",dias_vivo );
						  break;
			}
			
			
			}
	void valor_carro(){
		float custo_empresa, custo_consumidor ;
		
		printf("quanto custou pra fabricar o carro? ");
		scanf("%f",&custo_empresa);
		
		custo_consumidor = custo_empresa + (custo_empresa * 0.45) + (custo_empresa * 0.28);
		
		printf("O valor final do veiculo é : R$ %.2f ", custo_consumidor);
	}	
	
	void diferenca(){
		
		int num1, num2, num3;
		printf("Digite um numero");
		scanf("%d",&num1);
		printf("Digite outro numero");
		scanf("%d",&num2);
		
		if(num1 < num2){
			num3 = num2;
			num2 = num1;
			num1 = num3;
		}
		printf(" numeros %d e %d digitados, a diferença entre eles é %d",num1 , num2 , num1 - num2);
	}
	
	int main(){
	setlocale(LC_ALL, "portuguese");
	char resposta;
	
	data_();
    do {	
    
	printf("\n\nescolha qual dos 15 exercicios quer executar. \n ");
	printf(" 1- soma (maior ou menor 20). \n ");
	printf(" 2- onder crescente. \n ");	
	printf(" 3- numero absoluto  \n ");
	printf(" 4- peso ideal. \n ");
	printf(" 5-intervalo. \n ");
	printf(" 6- divisivel por 2 e 3. \n ");
	printf(" 7- divisivel por 2 ou 7. \n ");
	printf(" 8- positivou ou negativo? \n ");
	printf(" 9- maior de 18 ou não. \n ");
	printf("10- valor de copias. \n ");
	printf("11- calculadora. \n ");
	printf("12- numero por extenso. \n ");
	printf("13- menor valor da lista. \n ");
	printf("14- Gasolina ou etanol. \n ");
	printf("15- frutaria. \n ");
	printf("16- quantos dias vivo\n ");
	printf("17- Valor do carro\n" );
	printf("18- diferença entre numeros \n ");
	printf("Digite um numero entre 1 e 15 \n\n");
	validador();

	    
        switch (resultado) {
	 
		case 1: soma_atividade1(); break;
		case 2: crescente(); break;	
		case 3: absoluto(); break;
		case 4: peso(); break;
		case 5: intervalo();break;
		case 6: divisivel_2e3(); break;
		case 7: divisivel_2ou7(); break;
		case 8: positivoNegativo(); break;
		case 9: idade_(); break;
		case 10: papelaria(); break;
		case 11: calculadora(); break;
		case 12: extenso(); break;
		case 13: menor_valor(); break;
		case 14: gasolina(); break;
		case 15: frutaria(); break;
		case 16: idadedias(); break;
		case 17: valor_carro(); break;
		case 18: diferenca(); break;
		default:           
			
			printf("\nDIGITO INVALIDO \n\n\n");
			printf("************************************\n");
			printf("******** SIGA AS INSTRUÇOES ********\n");
			printf("************************************\n\n");
        limpaBuffer();
	 	break;
		  
	 }
		//system("cls"); 
	 	printf("\n\n");
      
        printf("\n Deseja continuar nos exercicios? (S/N): ");
        scanf(" %c", &resposta); 
        resposta = toupper(resposta);
        int caso;
        if(resposta == 's'|| resposta == 'S'){
        	caso = 1;
			}
			else if (resposta == 'n'|| resposta == 'N'){
				caso = 2;
			}
			else{ 
				caso = 3;
			}
        
        switch (caso){
        	case 1 : resposta = 's'; break;
        	case 2 : resposta = 'n'; break;
        	default : 
        	do { limpaBuffer();
 			   printf("\n Deseja continuar nos exercicios? (S/N): ");
 			   scanf(" %c", &resposta);
 			   	limpaBuffer();
				} while (resposta != 's' && resposta != 'S' && resposta != 'n' && resposta != 'N');
				
			 break;
		}
	

    }     
    while (resposta == 's'|| resposta == 'S');
	 
	printf(" \n");
    printf("\n Encerrando o programa.\n");
    return 0;   
}

