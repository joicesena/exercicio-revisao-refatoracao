#include "Empregado.hpp"

#define HORAS_JORNADA_TRABALHO_PADRAO 8
#define ADICIONAL_HORA_EXTRA 0.5

Empregado::Empregado(std::string nome, double salarioHora, double horasTrabalhadas) {
  this->nome = nome;
  this->salarioHora = salarioHora;
  this->horasTrabalhadas = horasTrabalhadas;
}

std::string Empregado::getNome() {
  return this->nome;
}

double Empregado::getSalarioHora() {
  return this->salarioHora;
}

double Empregado::getHorasTrabalhadas() {
  return this->horasTrabalhadas;
}

double Empregado::getPagamentoMes() {
  if (empregadoFezHoraExtra()) { 
    this->horasTrabalhadas = calcularHoraExtra(); 
  }

  return this->horasTrabalhadas * this->salarioHora;
}

bool Empregado::empregadoFezHoraExtra() {
  return this->horasTrabalhadas > HORAS_JORNADA_TRABALHO_PADRAO;
}

double Empregado::calcularHoraExtra() {
  double totalHoraExtra = this->horasTrabalhadas - HORAS_JORNADA_TRABALHO_PADRAO;
  return this->horasTrabalhadas + (totalHoraExtra * ADICIONAL_HORA_EXTRA);
}