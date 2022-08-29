#include "decoraciones.h"

class decoraciones_Figura: public decoraciones{
public:
	std::string figura;
        
	void mostrarDatos();
	decoraciones_Figura(int, const std::string&, short, short, const std::string&, bool, float, float, float, const std::string&, const std::string&, const std::string&);
	~decoraciones_Figura();
};

decoraciones_Figura::decoraciones_Figura(int _ID, const std::string& _nombre, short _precio, short _existencia, const std::string& _marca, bool _estado, float _alto, 
	float _largo, float _ancho, const std::string& _material, const std::string& _color, const std::string& _figura):
	figura(_figura){

	}

decoraciones_Figura::~decoraciones_Figura(){
}

void decoraciones_Figura::mostrarDatos(){
	decoraciones::mostrarDatos();
	std::cout << " Figura: " << figura << std::endl;
}
