#include "SuperClase.h"

class Electronica : public SuperClase{
    public:
        short ConsumoEnergia;
        std::string Material;
        short Alto;
        short Ancho;
        short Largo;


        void mostrarDatos();
                   //int, const std::string&, short, short, const std::string&, bool
        Electronica(int, const std::string&, short, short, const std::string&, bool, short, std::string, short, short, short);

        ~Electronica();
};

Electronica::Electronica(int _ID, const std::string& _nombre, short _precio, short _existencia, const std::string& _marca, 
    bool _estado, short _ConsumoEnergia, std::string _Material, short _Alto, short _Ancho, short _Largo):
    ConsumoEnergia (_ConsumoEnergia),
    Material(_Material),
    Alto(_Alto),
    Ancho(_Ancho),
    Largo(_Largo){

}

Electronica::~Electronica(){
    
}

void Electronica::mostrarDatos(){
    SuperClase::mostrarDatos();
    std::cout<<"Consumo de energia: " <<ConsumoEnergia<<std::endl;
    std::cout<<"Material: " <<Material<<std::endl;
	std::cout<<" Alto: "<<Alto<<std::endl;
	std::cout<<" Ancho: "<<Ancho<<std::endl;
	std::cout<<" Largo: "<<Largo<<std::endl;
}