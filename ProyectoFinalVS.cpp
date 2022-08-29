#include <iostream>
#include "Iluminacion.h"
#include "PuertaClase.h"
#include "decoraciones_Cuadros.h"
#include "decoraciones_Figura.h"
#include "decoraciones_Florero.h"
#include "empleados.h"

using namespace std;

void mostrarDatos() {

}

int main() {
	short opcion = 0;
	SuperClase lista[short(50)];
	do {
		cout <<"********UAM DEPOT*******" << endl
			<< "*****BASE DE DATOS******" << endl << endl
			<< "****MENÚ DE OPCIONES****" << endl
			<< "Elija la opción deseada:" << endl
			<< "1 -> Mostrar datos" << endl
			<< "2 -> Agragar datos" << endl
			<< "3 -> Eliminar datos" << endl
			<< "0 -> Cerrar programa" << endl << endl
			<< "Introduzca su opción: ";

		cin >> opcion;

		cout << endl << endl;
	} while( opcion != 0 );
}