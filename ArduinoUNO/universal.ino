//Arduino UNO y driver TB6612/DRV8833
const int AIN2 = 9; // PWMA
const int AIN1 = 8;
const int BIN1 = 7;
const int BIN2 = 6; // PWMB

//iniciar el modo de los pines para los motores
void setup() {
  pinMode(AIN1,OUTPUT);
  pinMode(AIN2,OUTPUT);
  pinMode(BIN1,OUTPUT);
  pinMode(BIN2,OUTPUT);
}

//programa principal
void loop(){
  
}

//función de movimiento de motores
void drive(int L, int R, int t) //velocidad de las ruedas izquierda y derecha, positivo hacia delante, tiempo en milisegundos
{
  L=constrain(L,-255,255); // evitar valores no válidos para el PWM
  R=constrain(R,-255,255);
  
  if (L>0)
  {
    digitalWrite(AIN1, 0);
    analogWrite(AIN2, L));
  }
  else
  {
    digitalWrite(AIN1, 1);
    analogWrite(AIN2, 255-L);
  }
  
  if (R>0)
  {
    digitalWrite(BIN1, 0);
    analogWrite(BIN2, R));
  }
  else
  {
    digitalWrite(BIN1, 1);
    analogWrite(BIN2, 255-R);
  }
  
  delay(t);
}
