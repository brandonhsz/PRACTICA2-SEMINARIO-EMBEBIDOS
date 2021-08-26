/*
  SEMINARIO DE PROGRAMACION DE SISTEMAS EMBEBIDOS D01
  Prof. Jesus Ramos
  Alumnos: Hernandez Salinas Brandon Eduardo
  Codigo: 215509503
  Ejercicio: 2
  Fecha: 24/08/2021
*/

#define HIGH 1
#define LOW 0

#define B0 PORTD.F0
#define L0 PORTD.F1


void configMicro();

void main() {
  
  configMicro();

  while(HIGH){


    L0 = (B0 != HIGH)? HIGH : LOW;
    
  }
  
}

void configMicro() {

  ANSEL = LOW;
  ANSELH = LOW;
  C1ON_BIT = LOW;
  C2ON_BIT = LOW;
  
  TRISA = LOW;
  TRISB = LOW;
  TRISC = LOW;
  TRISD = LOW;
  TRISE = LOW;

  PORTA = LOW;
  PORTB = LOW;
  PORTC = LOW;
  PORTD = LOW;
  PORTE = LOW;
  
  TRISD.F0 = HIGH;
  TRISD.F1 = LOW;


}