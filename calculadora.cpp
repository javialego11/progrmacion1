#include <iostream>

// Definir namespace
using namespace std;

//Definir las clases
class Calculadora {
	//Dedfinir metodos publicos
	public:
		int Calcular (int, char, int);
};

//Definir el metodo main
int main() {
	//Definir variables
	char operador;
	int Num1, Num2, resultado;
	Calculadora objCalculadora;
	
	//Solicitar los valores
	cout<<"Ingrese los valores, por ejemplo (1 + 1)"<<endl;
	cout<<"-------------------------------- (1 - 1)"<<endl;
	cout<<"-------------------------------- (1 * 1)"<<endl;
	cout<<"-------------------------------- (1 / 1)"<<endl;
	cin>>Num1>>operador>>Num2;
	
	//Se retorna en resultado la operacion del objeto
	resultado=objCalculadora.Calcular(Num1,operador,Num2);
	
	cout<<"Este resultado es: "<<resultado<<endl;
}

//Define metodo publico de la clase
int Calculadora::	Calcular(int intNum1, char chrOperador, int intNum2) {
	switch(chrOperador){
		case'+':
			return intNum1+intNum2;
		case'-':
			return intNum1-intNum2;
		case'*':
			return intNum1*intNum2;
		case'/':
			return intNum1/intNum2;
		default:
			return 0;
	}
}
