#include <iostream>
#include <string>
#include "Funcionario.hpp"

double Funcionario::getSalarioBase() {
  return this->SalarioBase;
}

std::string Funcionario::getIdade() {
  return this->Idade;
}

std::string Funcionario::getNome() {
  return this->Nome;
}

int Funcionario::getRgFunc() {
  return this->RgFunc;
}

void Funcionario::print(){
	cout << "[Funcionario]" << endl
            << "  Idade: " << IDADE << endl
            << "  RGFunc: " << rgFunc << endl;
}

void Funcionario::print_oi(){
  cout << "Tchau" << endl;
}

