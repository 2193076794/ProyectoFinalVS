#include "SuperClase.h"

class empleados : public SuperClase{
private:
    std::string nombres; 
    std::string apellidos;
    std::string rfc; 
    std::string noseguro;
    std::string curp;
    
public: 
    empleados(int, const std::string&, short, short, const std::string&, bool, 
    std::string, std::string, std::string, std::string, std::string );
        
    void mostrarDatos();
    ~empleados();   
};

empleados::empleados(int _ID, const std::string& _nombre, short _precio, short _existencia, 
const std::string& _marca, bool _estado, 
std::string _nombres, std::string _apellidos, std::string _rfc, std::string _noseguro, 
std::string _curp): 
nombres(_nombres), 
apellidos(_apellidos),
rfc(_rfc), 
noseguro(_noseguro), 
curp(_curp)
{}

void empleados::mostrarDatos(){
    SuperClase::mostrarDatos();
    std::cout<<"nombre: "<<nombre<<std::endl;
    std::cout<<"apellidos: "<<apellidos<< std::endl;
    std::cout<<"rfc: "<<rfc<< std::endl;
    std::cout<<"noseguro: "<<noseguro<< std::endl;
    std::cout<<"curp: "<<curp<< std::endl;
}

empleados::~empleados(){}