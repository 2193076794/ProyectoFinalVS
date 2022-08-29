#include "decoraciones.h"

class decoraciones_Cuadros : public decoraciones{
	public:
        std::string TdeBase;
       	bool colgable;
        
	void mostrarDatos();
	decoraciones_Cuadros(int, const std::string&, short, short, const std::string&, bool, float, float, float, const std::string&, const std::string&, const std::string&, bool);
	~decoraciones_Cuadros();
};

decoraciones_Cuadros::decoraciones_Cuadros(int _ID, const std::string& _nombre, short _precio, short _existencia, const std::string& _marca, 
	bool _estado, float _alto, float _largo, float _ancho, const std::string& _material, const std::string& _color, const std::string& _TdeBase, bool _colgable):
	TdeBase(_TdeBase), colgable(_colgable){
	}

decoraciones_Cuadros::~decoraciones_Cuadros(){
}

void decoraciones_Cuadros::mostrarDatos(){
	decoraciones::mostrarDatos();
	std::string colga;
	if (colgable) {
		colga = "Sí";
	}
	else {
		colga = "No";
	}
	std::cout << " TdeBase: " << TdeBase << std::endl;
	std::cout << " colgable: " << colga << std::endl;
}

