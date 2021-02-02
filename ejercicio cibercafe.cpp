#include <iostream>
#include <conio.h>

using namespace std;

struct equipos{
	int numero_equipo;
	string nombre_cliente;
	int tiempo_en_horas;
}e[100];

int main(){
	
	int fin = 1;
	int i=0;
	
	while(fin != 0){
		cout << "Que equipo desea usar?: ";
		cin >> e[i].numero_equipo;
		cin.ignore();
		cout << "Nombre: ";
		getline(cin, e[i].nombre_cliente);
		cout << "Tiempo de uso en horas: ";
		cin >> e[i].tiempo_en_horas;
		
		cout << "\nnumero de equipo: " << e[i].numero_equipo << endl;
		cout << "nombre del cliente: " << e[i].nombre_cliente << endl;
		cout << "horas de uso: " << e[i].tiempo_en_horas << endl;
		
		cout << "Desea terminar la funcion?\0- si\n1- no : ";
		cin >> fin;
	}
	
	getch();
	return 0;
}
