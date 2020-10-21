#include <string>
#include "Vendedor.hpp"

#define ADICIONAL_QUOTA_MENSAL_VENDAS 12

Vendedor::Vendedor(std::string nome, double salarioHora, double horasTrabalhadas, int quotaMensalVendas) : Empregado(nome, salarioHora, horasTrabalhadas) {
  this->quotaMensalVendas = quotaMensalVendas;
}

int Vendedor::getQuotaMensalVendas() {
  return this->quotaMensalVendas;
}

void Vendedor::print() {
  std::cout << "Nome: " << this->getNome() << std::endl;
  std::cout << "Salario Mes: " << this->getPagamentoMes() << std::endl;  
  std::cout << "Quota vendas: " << this->getQuotaTotalAnual() << std::endl;
  std::cout << std::endl;
}

double Vendedor::getQuotaTotalAnual() {
	return this->quotaMensalVendas * ADICIONAL_QUOTA_MENSAL_VENDAS;
}