#include <iostream>
#include <cmath>

int main() {
  double pesos, reais, soles, dollars;
  std::cout<<"Enter number of Colombian Pesos: ";
  std::cin>>pesos;
  std::cout<<"Enter number of Brazilian Reais: ";
  std::cin>>reais;
  std::cout<<"Enter number of Peruvian Soles: ";
  std::cin>>soles;
  
  //usd to cop: 1 usd = 3398 pesos 
  //usd to reais: 1 usd = 4.12 reais
  //usd to soles: 1 usd = 3.37 soles
  dollars = (pesos/3398)+(reais/4.12)+(soles/3.37);
  std::cout<<"US Dollars = $ "<<dollars<<"\n";
return 0;  
}
