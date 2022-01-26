#include <iostream>
#include <string>
#include "Venda.hpp"

std::string Venda::getDescricao() {
  return this->Descricao;
}

Especialista Venda::getEspecialista(){
  return this->Esp.nome;
}

std::string Funcionario::getCliente() {
  return this->Cliente;
}

 void Venda::print() {

        std::cout << "Especialista: ";
        cout << Esp.nome;

        std::cout << " Cliente: ";
        cout << getCliente();
   
    }
}

