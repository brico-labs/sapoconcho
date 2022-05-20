void setup() {

}

void loop() {
  long int distancia = sonar(2);
  if (distancia<10){
    drive(75,75,50);
  }
  else {
    drive(-75,-75,50);
  }
}

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

unsigned long sonar(int pin)
{
  double calibracion = 0.017; // Calibración del sensor
  pinMode(pin, OUTPUT);
  digitalWrite(pin,LOW); // Envía un pulso ultrasónico
  delayMicroseconds(5);
  digitalWrite(pin, HIGH);
  delayMicroseconds(10);
  pinMode(pin, INPUT);
  unsigned long tiempo=pulseIn(pin, HIGH); // Espera a recibir la respuesta
  unsigned long distancia= int(calibracion*tiempo); // Calcula la distancia
  return distancia;
}
