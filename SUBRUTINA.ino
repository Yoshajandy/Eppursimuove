#define IN1  2
#define IN2  3
#define IN3  4
#define IN4  5
#define IN5  8
#define IN6  9
#define IN7  10
#define IN8  11

void motori(int pos){


// Secuencia de pasos (par máximo)

int paso [4][4] =
{
  {1, 1, 0, 0},
  {0, 1, 1, 0},
  {0, 0, 1, 1},
  {1, 0, 0, 1}
};
      digitalWrite(IN1, paso[pos][0]);
      digitalWrite(IN2, paso[pos][1]);
      digitalWrite(IN3, paso[pos][2]);
      digitalWrite(IN4, paso[pos][3]);

}

void motord(int pos){
int paso [4][4] =
{
  {1, 1, 0, 0},
  {0, 1, 1, 0},
  {0, 0, 1, 1},
  {1, 0, 0, 1}
};
    
      digitalWrite(IN5, paso[pos][0]);
      digitalWrite(IN6, paso[pos][1]);
      digitalWrite(IN7, paso[pos][2]);
      digitalWrite(IN8, paso[pos][3]);
 
}

void girar_iz(int n,int d)
{
  for (int i=0 ; i<=n ; i++){
motori(3);
motord(1);
delay (d);
motori(2);
motord(2);
delay (d);
motori(1);
motord(3);
delay (d);
motori(0);
motord(0);
delay (d);
  
}
}

void girar_de(int n,int d)
{
  for (int i=0 ; i<=n ; i++){
motori(0);
motord(0);
delay (d);
motori(1);
motord(3);
delay (d);
motori(2);
motord(2);
delay (d);
motori(3);
motord(1);
delay (d);
  
}
}

void reverse (int n, int d)
{
  for (int i=0 ; i<=n ; i++){
motori(3);
motord(3);
delay (d);
motori(2);
motord(2);
delay (d);
motori(1);
motord(1);
delay (d);
motori(0);
motord(0);
delay (d);
  
}
}
void forward (int n, int d)
{
  for (int i=0 ; i<=n ; i++){
motori(0);
motord(0);
delay (d);
motori(1);
motord(1);
delay (d);
motori(2);
motord(2);
delay (d);
motori(3);
motord(3);
delay (d);
}
}
