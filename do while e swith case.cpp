#include <iostream>

using namespace std;

main(){
	setlocale(LC_ALL, "Portuguese");
	
	int mes;
	
	do {
		cout << "Informe o digito do mes: ";
		cin >> mes;
		
		switch(mes){
			case 0: cout << "Saindo do programa";
			break;
			case 1: cout << "Janeiro\n";
			break;
			case 2: cout << "Fevereiro\n";
			break;
			case 3: cout << "Mar�o\n";
			break;
			default: cout << "Informe um mes valido seu energ�meno burro\n";
		}
	}while(mes != 0);
}
