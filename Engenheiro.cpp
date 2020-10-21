#include <string>
#include "Engenheiro.hpp"

Engenheiro::Engenheiro(std::string nome, double salarioHora, double horasTrabalhadas, int projetos) : Empregado(nome, salarioHora, horasTrabalhadas) {
  this->projetos = projetos;
}

int Engenheiro::getProjetos() {
  return this->projetos;
}

void Engenheiro::print() {
  std::cout << "Nome: " << this->getNome() << std::endl;
  std::cout << "Salario Mes: " << this->getPagamentoMes() << std::endl;
  std::cout << "Projetos: " << this->getProjetos() << std::endl;
  std::cout << std::endl;
}

