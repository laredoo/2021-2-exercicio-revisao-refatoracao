
#ifndef VENDA_HPP
#define VENDA_HPP

#include "Funcionario.hpp"
#include "Cliente.hpp"
#include "Especialista.hpp"


class Venda{

    public:
        void print();
    private:
        double VALOR;
        std::string descricao;
        std::Especialista esp;
        std::string cliente;
};

#endif
