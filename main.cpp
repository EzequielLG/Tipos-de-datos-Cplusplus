// Autor: LozanoSoft

#include <iostream>

using namespace std;

int main(){

  // Tipos de variables

  string cadenaCaracteres = "hola mundo 12345"; // Uno o más caracteres
  char caracter = 'h'; // Un solo caracter
  int numEntero = 5; // Número entero
  float numFlotante = 3.1415926535; // Número con punto decimal
  double floatPresicionDoble = 3.1415926535; // Número con punto decimal, con doble presición
  bool varBooleana = false; // Indicador/Switch -> 0, 1

  // Impresiones
  
  cout << "Flotante: " << numFlotante << endl; // Float
  cout << "Double: " << floatPresicionDoble << endl; // Double

  printf("Pi con float, 7 decimales: %.7f\n", numFlotante);
  printf("Pi con float, 10 decimales: %.10f\n", numFlotante);
  printf("Pi con double: %.10f\n", floatPresicionDoble);

  cout << cadenaCaracteres << endl;
  cout << caracter << endl;
  cout << numEntero << endl;
  cout << varBooleana << endl;

  return 0;

}
