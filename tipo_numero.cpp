#include <iostream>

int main() {
  int numero = 0;

  //Solicita al usuario ingresar un numero entero
  std::cout << "Ingresa un numero entero: ";
  std::cin >> numero;

  //Determina si el numero es positivo, negativo o cero
  if (numero > 0) {
    std::cout << "El numero ingresado es: Positivo" << std::endl;
  } else if (numero < 0) {
    std::cout << "El numero ingresado es: Negativo" << std::endl;
  } else {
    std::cout << "El numero ingresado es: Cero" << std::endl;
  }

  return 0;
}

