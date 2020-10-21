#ifndef ENGENHEIRO_H
#define ENGENHEIRO_H

#include <string>
#include "Empregado.hpp"

class Engenheiro : public Empregado {
  public:
    Engenheiro(std::string nome, double salarioHora, double horasTrabalhadas, int projetos);
    int getProjetos();
    void print();
  
  private:
    int projetos;
};

#endif
