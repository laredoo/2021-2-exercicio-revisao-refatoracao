#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>

class Cliente{
	
	public:
		std::string getNome();
		std::string getEndereco();
		std::string getCep();
		std::string getAlturaDosPais();
		
		void print(); // imprime na tela os dados de um cliente cadastrado
	private:
		std::string Nome;
		std::string Endereco;
		std::string Cep;
		std::string AlturaDosPais;


};

#endif
