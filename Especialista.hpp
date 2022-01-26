#ifndef Especialista_HPP
#define Especialista_HPP

#include "Funcionario.hpp"
#include "Cliente.hpp"

const double perc = 0.1;
const double percWanda = 0.1;


class Especialista : public Funcionario {

    public:
    
        std::string getEspecialidade();
    
        double comissao(double ValorVenda);

        void print();
        
    private:
     
        std::string especialidade;

};

#endif
