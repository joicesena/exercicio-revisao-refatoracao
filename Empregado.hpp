#ifndef EMPREGADO_H
#define EMPREGADO_H

#include <iostream>
#include <string>

class Empregado {
  protected:
    Empregado(std::string nome, double salarioHora, double horasTrabalhadas);
    std::string getNome();
    double getSalarioHora();
    double getHorasTrabalhadas();
    double getPagamentoMes();
    
  private:
    std::string nome; 
    double salarioHora;
    double horasTrabalhadas; 

    bool empregadoFezHoraExtra();
    double calcularHoraExtra();
};

#endif