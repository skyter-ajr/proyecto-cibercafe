#include <iostream>
#include <conio.h>

using namespace std;

int fin = 1;
int i=0, equipo[100];
int total;

struct Equipos{
	int numero_equipo;
	string nombre_cliente;
	int tiempo_en_horas;
}e[100];

int main(){
	
	cout << "Presione ENTER para empezar.";
	
	while(fin != 0){
		
		cin.ignore();
		cout << "Nombre: ";
		getline(cin, e[i].nombre_cliente);
		
		cout << "Tiempo de uso en horas: ";
		cin >> e[i].tiempo_en_horas;
		cin.ignore();
		cout << "Que equipo desea usar?: ";
		cin >> e[i].numero_equipo;
		
		while(equipo[e[i].numero_equipo] == 1){
			cout << "equipo ocupado, elija uno diferente: ";
			cin >> e[i].numero_equipo;
		}
		cin.ignore();
		
		if(equipo[e[i].numero_equipo] == 0){
			equipo[e[i].numero_equipo] = 1;
			cout << "\nSu equipo esta listo para su uso." << endl;
		}
		
		total = e[i].tiempo_en_horas * 10000;
		cout << "El total a pagar es de " << total << endl;
		
		i++;
		
		cout << "\nDesea terminar la funcion?: \n0- si\n1- no : ";
		cin >> fin;
	}
	
	cout << "Gracias por usar nuestros servicio." << endl;
	
	getch();
	return 0;
}
