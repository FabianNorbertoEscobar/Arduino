#include <Keypad.h>

const byte filas = 4;
const byte columnas = 4;
byte pinsFilas[filas] = {8, 7, 6, 5};
byte pinsColumnas[columnas] = {4, 3, 2, 1};

char teclas[filas][columnas] = {
  {'1', '2', '3', 'A'},
  {'4', '5', '6', 'B'},
  {'7', '8', '9', 'C'},
  {'*', '0', '#', 'D'}
};

Keypad teclado = Keypad(makeKeymap(teclas), pinsFilas, pinsColumnas, filas, columnas);

char tecla;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  tecla = teclado.getKey();
  // getKey retorna un char.
  // para operar con los numeros, convertirlos a int:
  // numero = tecla - 48
  if(tecla != NO_KEY){
    Serial.println(tecla);
  }
}
