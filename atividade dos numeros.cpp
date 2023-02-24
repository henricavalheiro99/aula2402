#include <iostream>

using namespace std;

main(){
	setlocale(LC_ALL, "Portuguese");
	
	int numero, result, count;
	
	do {
		cout << "Informe um numero inteiro positivo: ";
		cin >> numero;
		
		if (numero > 0){
			result += numero;
			count++;
		}
		
	}while(numero >= 0);
	
	if (count == 0){
		cout << "Nenhum numero foi digitado!" << endl;
	} else{
		cout << "A soma equivale a: " << result << endl;
	}
}
