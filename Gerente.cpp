#include <iostream>
#include <string>
#include "Gerente.hpp"

double Gerente::getSalarioBase() {
  return this->SalarioBase;
}

std::string Gerente::getIdade() {
  return this->Idade;
}

std::string Gerente::getNome() {
  return this->Nome;
}

int Gerente::getRgFunc() {
  return this->RgFunc;
}

double Gerente::getBonificacao() {
  return this->Bonificacao;
}

void Gerente::print(){
	cout << "[Funcionario]" << endl
            << "[Gerente]" << endl
            << "  Nome: " << getNome() << endl
            << "  Idade: " << getIdade() << endl
            << "  RGFunc: " << getRgFunc() << endl
            << "  SalarioBase: R$ " << fixed << setprecision(2) << getSalarioBase() <<endl;
}

double calcula_BONIFICACAO_GERENTE(int numTOTALVendas){
   return numTOTALVendas*ValorBONIFICACAO;
}
