#include "decoraciones.h"

class decoraciones_Florero : public decoraciones{
        std::string TdeBase;
       	std::string Diseno;
        
	void mostrarDatos();
	decoraciones_Florero(int, const std::string&, short, short, const std::string&, bool, float, float, float, const std::string&, const std::string&, const std::string&, const std::string&);
	~decoraciones_Florero();
};

decoraciones_Florero::decoraciones_Florero(int _ID, const std::string& _nombre, short _precio, short _existencia, const std::string& _marca, bool _estado, float _alto, float _largo, float _ancho, const std::string& _material, const std::string& _color, const std::string& _TdeBase, const std::string& _Diseno):
	TdeBase(_TdeBase), Diseno(_Diseno){
	}

decoraciones_Florero::~decoraciones_Florero(){
}

void decoraciones_Florero::mostrarDatos(){
	decoraciones::mostrarDatos();
	std::cout << " TdeBase: " << TdeBase << std::endl;
	std::cout << " Diseno: " << Diseno << std::endl;
}
