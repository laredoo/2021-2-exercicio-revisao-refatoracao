#ifndef FUNCIONARIO_HPP
#define FUNCIONARIO_HPP

#include <iostream>
#include <iomanip>

class Funcionario {
    public:
        double getSalarioBase();
        std::string getIdade();
        std::string getNome();
        int getRgFunc();
        void print();
        void print_oi();
    
    private:
        double SalarioBase; // valor mínimo recebido pelo funcionário
        std::string Idade;
        std::string Nome;
        int rgFunc;
};

#endif
