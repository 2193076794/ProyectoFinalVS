#include "SuperClase.h"

class Iluminacion : public SuperClase {
	short watts;
	int temperatura;

	void mostrarDatos();
	std::string temperature();
	Iluminacion(int, const std::string&, short, short, const std::string&, bool, short, int);
	~Iluminacion();
};

Iluminacion::Iluminacion(int _ID, const std::string& _nombre, short _precio, short _existencia, 
	const std::string& _marca, bool _estado, short _watts, int _temperatura):
	watts(_watts),
	temperatura(_temperatura){

}

Iluminacion::~Iluminacion() { }

std::string Iluminacion::temperature() {
	if (temperatura <= 5000) {
		return("luz cálida");
	}
	else {
		return("luz fría");
	}
}

void Iluminacion::mostrarDatos() {
	SuperClase::mostrarDatos();
	std::cout << "Watts: " << watts << std::endl;
	std::cout << "Temperatura: " << temperature() << std::endl;
}