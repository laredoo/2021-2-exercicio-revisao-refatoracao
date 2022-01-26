#include <iostream>
#include <string>
#include "Cliente.hpp"

std::string Cliente::getNome(){
	return this->Nome;
}

std::string Cliente::getEndereco(){
	return this->Enderecco;
}

std::string Cliente::getCep(){
	return this->Cep;
}

std::string Cliente::getAlturaDosPais(){
	return this->AlturaDosPais;
}

void Cliente::print(){
	std::cout << "[Cliente]" << endl << "  Nome: " << this->getNome() << endl << "  Endereco: " << this->getEndereco << endl << "  CEP: " << this->getCep() << endl;
}

