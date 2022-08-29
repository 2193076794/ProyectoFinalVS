#ifndef S_DECORACIONES_H
#define S_DECORACIONES_H

#include "SuperClase.h"

class decoraciones : public SuperClase{
public:
	float alto, largo, ancho;
    std::string material;
    std::string color;
        
	virtual void mostrarDatos();

	decoraciones();
	decoraciones(int, const std::string&, short, short, const std::string&, bool, float, float, float, const std::string&, const std::string&);
	~decoraciones();
};

decoraciones::decoraciones() :
	alto(0),
	largo(0),
	ancho(0),
	material(""),
	color("") {

}

decoraciones::decoraciones(int _ID, const std::string& _nombre, short _precio, short _existencia, const std::string& _marca, bool _estado, float _alto, float _largo, 
	float _ancho, const std::string& _material, const std::string& _color):
	ancho(_ancho), largo(_largo), material(_material), color(_color){
	}

decoraciones::~decoraciones(){
}

void decoraciones::mostrarDatos(){
	SuperClase::mostrarDatos();
	std::cout<<" Alto: "<<alto<<std::endl;
	std::cout<<" Largo: "<<largo<<std::endl;
	std::cout<<" Ancho: "<<ancho<<std::endl;
	std::cout<<" Material: "<<material<<std::endl;
	std::cout<<" Color: "<<color<<std::endl;
}

#endif // !S_DECORACIONES_H