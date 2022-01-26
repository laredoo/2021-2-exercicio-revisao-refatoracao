#ifndef GERENTE_HPP
#define GERENTE_HPP

#include <iostream>
#include <iomanip>

const ble ValorBONIFICACAO = 15.0;

class Gerente {
    public:
        void print();

        double calcula_BONIFICACAO_GERENTE(int numTOTALVendas);
    
    private:
        double SalarioBase; // valor mínimo recebido pelo funcionário
        string IDADE;
        string nome;
        int rgFunc;
        double bonificacao;
};

#endif

