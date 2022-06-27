void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:
  drive(50,50,400);
  drive(50,-50,400);
}

// Drive permite manejar los motores
// Izquierda y derecha admite valores de -100 a 100
// Tiempo en milisegundos
void drive(int izquierda, int derecha, int tiempo) 
{
  //Arduino UNO y driver TB6612/DRV8833
  const int AIN2 = 9; // PWMA
  const int AIN1 = 8;
  const int BIN1 = 7;
  const int BIN2 = 6; // PWMB

  pinMode(AIN1,OUTPUT);
  pinMode(AIN2,OUTPUT);
  pinMode(BIN1,OUTPUT);
  pinMode(BIN2,OUTPUT);

  izquierda=map(constrain(izquierda,-100,100),-100,100,-255,255);
  derecha=map(constrain(derecha,-100,100),-100,100,-255,255);

  digitalWrite(AIN1, izquierda<0);
  analogWrite(AIN2, izquierda + 255 * (izquierda < 0));
  digitalWrite(BIN1, derecha < 0);
  analogWrite(BIN2, derecha + 255 * (derecha < 0));

  delay(tiempo);
}
