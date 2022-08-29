#include "SuperClase.h"
class Puertas : public SuperClase{
	int ancho;
	int largo;
	
	void mostrarDatos();
	Puertas(int, const std::string&, short, short, const std::string&, bool, int, int);
	~Puertas();
};
Puertas::Puertas(int _ID, const std::string& _nombre, short _precio, short _existencia, const std::string& _marca, bool _estado, int _ancho, int _largo):
	ancho(_ancho),
	largo(_largo){
		
	}

Puertas::~Puertas(){
}

void Puertas::mostrarDatos(){
	SuperClase::mostrarDatos();
	std::cout<<" Ancho: "<<ancho<<std::endl;
	std::cout<<" Largo: "<<largo<<std::endl;
}

