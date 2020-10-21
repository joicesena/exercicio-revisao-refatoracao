#include "Engenheiro.hpp"
#include "Vendedor.hpp"

int main() {
  Engenheiro engenheiroJoao("Joao Snow", 35, 9.5, 3);
  Engenheiro engenheiraDaniela("Daniela Targaryen", 30, 8, 1);
  Engenheiro engenheiroBruno("Bruno Stark", 30, 8, 2);

  Vendedor vendedorTonho("Tonho Lannister", 20, 6, 5000);
  Vendedor vendedorJose("Jose Mormont", 25, 8, 3000);
  Vendedor vendedoraSonia("Sonia Stark", 30, 8, 4000);

  engenheiroJoao.print();
  engenheiraDaniela.print();
  engenheiroBruno.print();

  vendedorTonho.print();
  vendedorJose.print();
  vendedoraSonia.print();
  
  return 0;	
}