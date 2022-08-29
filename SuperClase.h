#ifndef SUPERCLASE_H
#define SUPERCLASE_H

#include <string>

class SuperClase {
public:
	int ID;
	std::string nombre;
	short precio;
	short existencia;
	std::string marca;
	bool estado;

	virtual void mostrarDatos();

	SuperClase();
	SuperClase(int, const std::string&, short, short, const std::string&, bool);

	~SuperClase();
};

SuperClase::SuperClase()
	: ID(0)
	, nombre("")
	, precio(0)
	, existencia(0)
	, marca("")
	, estado(true)
{
}

SuperClase::SuperClase(int _ID, const std::string& _nombre, short _precio, short _existencia, const std::string& _marca, bool _estado): 
	ID(_ID),
	nombre(_nombre),
	precio(_precio),
	existencia(_existencia),
	marca(_marca),
	estado(_estado){

}

SuperClase::~SuperClase() { 

}

void SuperClase::mostrarDatos() {
	if (estado) {
		std::cout << "Esta casilla está vacía." << std::endl;
	}
	else {
		std::cout << "*******MOSTRAR DATOS*******" << std::endl;
		std::cout << "ID:			" << ID << std::endl;
		std::cout << "Nombre:		" << nombre << std::endl;
		std::cout << "Precio:		" << precio << " pesos." << std::endl;
		std::cout << "Existencia:	" << existencia << std::endl;
		std::cout << "Marca:		" << marca << std::endl;
	}
}

#endif // !SUPERCLASS