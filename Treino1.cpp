#include <iostream>

using namespace std;

main(){
	setlocale(LC_ALL, "Portuguese");
	
	int carro, pe, po, tc;
	
	string bag;
	
	float g, a;
	
	
	
	cout << "************************"<<endl;
	cout << "*******Bem-vindo********"<<endl;
	cout << "************************"<<endl;
	
	cout << "escolha um modelo de carro: "<<endl;
	cout << "digite 1 para BMW"<<endl;
	cout << "digite 2 para AUDI"<<endl;
	cout << "digite 3 para FIAT"<<endl;
	cout << "digite 4 para FERRARI"<<endl;
	cout << "digite o modelo escolhido: ";
	cin >> carro;
	
	if (carro == 1){
		cout << "Você escolheu BMW";
		g = 9.8;
		a = 8.9;
	} else if (carro == 2){
		cout << "Você escolheu AUDI";
		g = 12.8;
		a = 10.9;
	} else if (carro == 3){
		cout << "Você escolheu FIAT";
		g =  26.8L;
        a = 24.9;
	} else if (carro == 4){
		cout << "Você escolheu FERRARI";
		g = 13.8;
        a = 12.9;
	}else {
		 cout << "digite de 1 a 4 seu energúmeno";
	}
	
	system ("cls");
	
	cout << "Informe o número de pessoas: ";
	cin >> pe; 
	
	if (pe>2){
		g = g - 1.2;
		a = a - 1.2;
	}
	

	system ("cls");
	
	cout << "Infome o número de portas do carro: ";
	cin >> po;
	
	if (po>4){
		g = g - 0.5;
		a = a - 0.5;
	}
	
	system ("cls");
	
	cout << "Informe se o bagageiro está cheio: ";
	cin >> bag;
	
	if (bag == "sim"){
		g = g - 0.2;
		a = a - 0.2;
	}
	
	
	system ("cls");
	
	cout << "escolha um combustível para o carro: "<<endl;
	cout << "digite 1 para gasolina"<<endl;
	cout << "digite 2 para álcool"<<endl;
	cout << "digite o combustível escolhido: ";
	cin >> tc;
	
	if (tc == 1){
		cout << "Você escolheu gasolina e o L/km é: " <<g;
		
	} else if (tc == 2){
		cout << "Você escolheu álcool e o L/km é: " <<a;
		
    } else {
    	cout << "Digite 1 ou 2 seu energúmeno";
	}
	
	
	
	
	
	
	
}
