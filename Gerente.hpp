#ifndef GERENTE_HPP
#define GERENTE_HPP

#include <iostream>
#include <iomanip>

const ble ValorBONIFICACAO = 15.0;

class Gerente {
    public:
        
        double getSalarioBase();
        std::string getIdade();
        std::string getNome();
        int getRgFunc();
        double getBonificacao();
        
        void print();

        double calcula_BONIFICACAO_GERENTE(int numTOTALVendas);
    
    private:
        double SalarioBase; // valor mínimo recebido pelo funcionário
        std::string Idade;
        std::string Nome;
        int rgFunc;
        double bonificacao;
};

#endif

