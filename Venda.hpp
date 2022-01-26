
#ifndef VENDA_HPP
#define VENDA_HPP

#include "Funcionario.hpp"
#include "Cliente.hpp"
#include "Especialista.hpp"


class Venda{

    public:
        void print();
        std::string getDescricao();
        std::string getCliente();
    
    private:
        double VALOR;
        std::string Descricao;
        std::Especialista Esp;
        std::string Cliente;
};

#endif
