#include <NewPing.h>

NewPing sonar (6,6,50);

#define IN1  2
#define IN2  3
#define IN3  4
#define IN4  5
#define IN5  8
#define IN6  9
#define IN7  10
#define IN8  11
 
void setup()
{
  // Todos los pines en modo salida
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);
  pinMode(IN5, OUTPUT);
  pinMode(IN6, OUTPUT);
  pinMode(IN7, OUTPUT);
  pinMode(IN8, OUTPUT);

Serial.begin(9600);

  
}
 
 
 
 void loop(){ 

  int dist = sonar.ping_cm();
  if (dist==0) dist=50;
  Serial.println(dist);
  if (dist>20){
    forward (100,5);
  }
  else { reverse (100,5);
  }

//Se coloco un delay para ver el cambio de una instruccion a otra
//girar_iz(400,5);
//delay (10000);
//
//girar_de(400,5);
//delay (10000);
//
//
//forward(400,5);
//delay (10000);
//
//reverse (400,5);
//delay (10000);




//ESTA INSTRUCCION ME FUNCIONO PARA QUE AVANCE 100 VECES CLARO, SE DEBE PONER DESPUES DEL FORWARD O REVERSE ETC.
//for (int i=1;i<100;i++){
//reverse ();
//}




}
