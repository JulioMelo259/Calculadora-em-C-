#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <math.h>
#include <conio.h>
#include <windows.h>

using namespace std;

void bhaskara();
void regradetres();
int still = 1;
#define carx std::cout <<"\nDeseja executar outra operacao?: --[1] para sim -- [0] para sair\n";
#define varx cin >> still;



int main(void){
//	system("color f9");
HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_SCREEN_BUFFER_INFO consoleInfo;
    WORD saved_attributes;
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED+10);
   
	cout <<"Calculadora - Created by Julio Melo" <<endl;
	_sleep(2000);
while (still != 0){
 
	int escolha = -1;
	float x = 0 ;
	float y = 0 ;
	int z = 0 ;
	int n = 0 ;
	float a = 0;
	float b = 0;
	float c = 0;
	double pi = 3.14159265358979323;
	float raio = 0.0;;
	double result = 0.0;
	int expoente = 0;
	
		
	system("cls");
	cout <<"DIGITE O NUMERO CORRESPONDENTE A FUNCAO QUE DESEJA REALIZAR:\n" <<endl;
	cout <<"OPERACOES BASICAS:" <<endl;
	cout <<"-------------------\n";
	cout <<"ADICAO[0]" <<endl;
	cout <<"SUBTRACAO[1]" <<endl;
	cout <<"MULTIPLICACAO[2]" <<endl;
	cout <<"DIVISAO[3]" <<endl;
cout <<"-------------------";
cout <<"\nAREA DE OBJETOS GEOMETRICOS PLANOS:" <<endl;
cout <<"-------------------";
cout <<"\nRETANGULO[4]" <<endl;
cout <<"QUADRADO[5]" <<endl;
cout <<"PARALELOGRAMO[6]" <<endl;
cout <<"TRIANGULO[7]" <<endl;
cout <<"CIRCULO[8]" <<endl;
cout <<"-------------------";
cout <<"\nFUNCOES E EQUACOES:" <<endl;
cout <<"-------------------" <<endl;
cout <<"EQUACAO 2 GRAU[9]" <<endl;
cout <<"REGRA DE TRES[10]" <<endl;
cout <<"\n>";
cin >>escolha;

if (escolha ==0){
//	ADICAO
	cout <<"Digite o X : " <<endl;
	cin >>x;
	cout <<"Digite o Y: " <<endl;
	cin >>y;
	result = (x+y);
	cout <<"O Resultado da soma e de: " <<result <<endl;
//	system("pause");
//	funcex()
	carx;
	varx;
}
if (escolha ==1){
//SUBTRACAO
	cout <<"Digite o X : " <<endl;
	cin >>x;
	cout <<"Digite o Y: " <<endl;
	cin >>y;
	result = (x-y);
	cout <<"O Resultado da subtracao e de: " <<result <<endl;
//	system("pause");
		carx;
	varx;
}
if (escolha ==2){
//MULTiPLICaCAO
	cout <<"Digite o X : " <<endl;
	cin >>x;
	cout <<"Digite o Y: " <<endl;
	cin >>y;
	result = (x*y);
	cout <<"O Resultado da multiplicacao e de: " <<result <<endl;
//	system("pause");
		carx;
	varx;
}
if (escolha ==3){
//DIVISAO
	cout <<"Digite Um numero inteiro para dividir : " <<endl;
	cin >>x;
	cout <<"Digite o Dividendo: " <<endl;
	cin >>y;
	result = (x/y);
	cout <<"O Resultado da divisao e de: " <<result <<endl;
//	system("pause");
		carx;
	varx;
}
if (escolha ==4){
//RETANGULO
	cout <<"Digite o Valor da BASE " <<endl;
	cin >>x;
	cout <<"Digite o Valor da ALTURA" <<endl;
	cin >>y;
	result = (x*y);
	cout <<"O valor da area foi de: " <<result <<" m2" <<endl;
//	system("pause");
		carx;
	varx;
}
if (escolha ==5){
//QUADRADO
	cout <<"Digite o valor do LADO 1: " <<endl;
	cin >>x;
	//y = x;
	result = (x*x);
	cout <<"O Resultado da area foi de: " <<result <<" m2" <<endl;
//	system("pause");
		carx;
	varx;
}
if (escolha ==6){
//PARALELOGRAMO
	cout <<"Digite o valor da BASE : " <<endl;
	cin >>x;
	cout <<"Digite o valor da ALTURA " <<endl;
	cin >>y;
	result = (x*y);
	cout <<"O Resultado da area foi de: " <<result <<" m2" <<endl;
//	system("pause");
		carx;
	varx;
}
if (escolha ==7){
//TRIANGULO
	cout <<"Digite o valor da BASE: " <<endl;
	cin >>x;
	cout <<"Digite o valor da ALTURA:" <<endl;
	cin >>y;
	result = (x*y)/2;
	cout <<"A area do triangulo e de: " <<result <<endl;
//	system("pause");
		carx;
	varx;
}
if (escolha ==8){
//CIRCULO
	cout <<"Digite o valor do RAIO" <<endl;
	cin >>x;
	
	result = (x*x)*pi;
	cout <<"\natencao, pi esta considerado em: " <<pi <<endl;
	cout <<"A area do cirulo e de: " <<result <<" cm2" <<endl;
//	system("pause");
		carx;
	varx;
}
if (escolha ==9){
//SEGUNDO GRAU
system("cls");
bhaskara();
}
if (escolha ==10){
//regra de 3
system("cls");
regradetres();
}



}  //WHILE ENDS HERE
return 0;

}






/// FUNCOES ABAIXO
void bhaskara(){
	int a=0;
	int b=0;
	int c=0;
	float delta = 0.0;
	float x1 = 0.0;
	float x2 = 0.0;
	
	cout <<"Digite o termo A: ";
	cin >>a;
	cout <<"\nDigite o termo B: ";
	cin >>b;
	cout <<"\nDigite o termo C: ";
	cin >>c;
	cout <<endl;
	// delta = 
	delta = (b*b) -4*a*c; // calcular delta
	float raizdelta = sqrt(delta);
	x1 = (-b + raizdelta)/(2*a);
	x2 = (-b - raizdelta)/(2*a);
	
	cout <<"O delta foi de: " <<delta <<" o x1 foi de: " <<x1 <<" o X2 foi de: " <<x2 <<"\n"<<endl;
		carx;
	varx;
}

void regradetres(){
	float a = 0;
	float b = 0;
	float y = 0;
	float z = 0;
	float result = 0;
	int answer = 0;
	cout <<"      A esta para Y" <<endl;
	cout <<"assim A esta para Z"<<endl;
	cout <<"\nExemplo de uso 1:" <<endl;
	cout <<"\n      300 esta para 5"<<endl;
	cout <<"assim 150 esta para Z"<<endl;
	cout <<"\nExemplo de uso 2:" <<endl;
	cout <<"\nEm uma construcao, 20 engenheiros fazem uma casa em 1 Uma semana." <<endl;
	cout <<"10 Engenheiros fariam esta mesma casa em quanto tempo?"<<endl;
	cout <<"\n      20 esta para 7" <<endl;
	cout <<"assim 10 esta para Z" <<endl;
	cout <<"\nDigite o valor de A: ";
	cin >>a;
	cout <<"\nDigite o valor de Y: ";
	cin >>y;
	cout <<"\nDigite o valor de B: ";
	cin >>b;
	cout <<"Regra de 3 direta ou indireta?" <<endl;
	cout <<"Digite 1 para inversas proporcionais, digite 2 para diretas proporcionais" <<endl;
	cin >>answer;
	if (answer == 1){
 	result = (b*y)/a;// DIRETA //INDIRETA (a*y)/b
	cout <<"\nO Resultado da operacao inversa foi de: " <<result <<endl;
			carx;
	varx;
	}
	else if (answer == 2){
	 	result = (a*y)/b;// DIRETA //INDIRETA (a*y)/b
	cout <<"\nO Resultado foi da operacao direta foi de: " <<result <<endl;
//	system("pause");
		carx;
	varx;
	}else {
		cout <<"\nUsuario deve digitar um numero entre 1 e 2 para escolher o tipo da operacao."<<endl;
//		system("pause");

			carx;
	varx;
	}
	
}

