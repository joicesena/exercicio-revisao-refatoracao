#ifndef VENDEDOR_H
#define VENDEDOR_H

#include <string>
#include "Empregado.hpp"

class Vendedor : public Empregado {
  public:
    Vendedor(std::string nome, double salarioHora, double horasTrabalhadas, int quotaMensalVendas);
    int getQuotaMensalVendas();
    void print();

  private:
	  int quotaMensalVendas;
    double getQuotaTotalAnual();
};

#endif
