#include <iostream>
#include <conio.h>

using namespace std;

struct equipos{
	int numero_equipo;
	string nombre_usuario;
	int tiempo_en_horas;
}e[100];

int main(){
	
	int fin = 0;
	int i=0;
	
	while(fin != 1){
		cout << "Que equipo desea usar?: ";
		cin >> e.numero_equipo[i];
		cout << "Nombre: ";
		cin >> e.nombre_usuario[i];
		cout << "Tiempo de uso en horas: ";
		
	}
	
	getch();
	return 0;
}
