#include <iostream>

int main() {
  double pesos, reais, soles;
  double dollars;
  
  std::cout << "Enter number of Colombian Pesos: ";
  std::cin >> pesos;

  std::cout << "Enter number of Brazilian Reais: ";
  std::cin >> reais;

  std::cout << "Enter number of Peruvian Reais: ";
  std::cin >> soles;

  dollars = (0.0002 * pesos) + (0.184 * reais) + (0.262 * soles);
  std::cout << "US Dollars = $" << dollars << "\n";

  return 0;
}