#include <iostream>

using namespace std;

void impremeMensagem(){
	cout << "Ola, mundo!";
}

float somar(float a, float b){
	return a + b;
}

main(){
	impremeMensagem();
	
	float numero, numero2;
	
	cout << "Informe o primeiro numero: ";
	cin >> numero;
	
	cout << "Informe o segundo numero: ";
	cin >> numero2;
	
	cout << somar(numero, numero2);
}
