#include <Arduino.h>




void duplicar(int *punteroNumero);

int numero = 10;


/*
* funcion que inicializa el dispositivo 
* puerto serialvelocidad 
* direcciones de pines de entrada y salida
* se pueden crear objetos que representan sensores, dispositivos wifi y objetivos de libreias externas 
*/
void setup (){
  Serial.begin(115200);
}



/**
 * esta es la funcion principal
 * 
 * 
*/
void loop() {

  Serial.print("En loop(): numero =");
  Serial.println(numero);
  duplicar( &numero );
} 

void duplicar( int* punteroNumero){
*punteroNumero=*punteroNumero * 2;
Serial.print("En duplicar(): punteroNumero = ");
Serial.println(*punteroNumero);
}