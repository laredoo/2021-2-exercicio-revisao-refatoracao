#include <iostream>
#include <string>
#include "Especialista.hpp"

double Especialista::getEspecialidade() {
  return this->Especialidade;
}

void print() {

   std::cout << "[Especialista]" << endl;
   Funcionario::print();

   std::cout << "  Nome: " << getNome() << endl
         << "  SalarioBase: R$ " << fixed << setprecision(2) << getSalarioBase() <<endl;
 }
