void setup() {

}

//programa principal
void loop(){

}

//función de movimiento de motores
void drive(int L, int R, int t) //velocidad de las ruedas izquierda y derecha, positivo hacia delante, tiempo en milisegundos
{
//Arduino UNO y driver TB6612/DRV8833
  const int AIN2 = 9; // PWMA
  const int AIN1 = 8;
  const int BIN1 = 7;
  const int BIN2 = 6; // PWMB

//iniciar el modo de los pines para los motores
  pinMode(AIN1,OUTPUT);
  pinMode(AIN2,OUTPUT);
  pinMode(BIN1,OUTPUT);
  pinMode(BIN2,OUTPUT);

// evitar valores no válidos para el PWM
  L=constrain(L,-255,255);
  R=constrain(R,-255,255);

// poner valores a los pines
  digitalWrite(AIN1, L<0);
  analogWrite(AIN2, L+255*(L<0));
  digitalWrite(BIN1, R<0);
  analogWrite(BIN2, R+255*(R<0));

  delay(t);
}
