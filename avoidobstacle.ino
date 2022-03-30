// Configuración
void setup()
{
}

// Programa común
void loop()
{
  unsigned long distL = sonar(3);    // invocamos a función de medir distancia
  unsigned long distR = sonar(2);    // invocamos a función de medir distancia
  unsigned long dist = min(distL, distR);

  if (dist<200)
  {
    if (distL<distR)
    {
      drive(200,-200,50);
    }
    else
    {
      drive(-200,200,50);
    }
  }
  else
  {
    drive(200,200,10);
  }
  
}

//función de movimiento de motores con Arduino UNO y driver TB6612/DRV8833
void drive(int L, int R, int t) //velocidad de las ruedas izquierda y derecha, positivo hacia delante, tiempo en milisegundos
{
  const int AIN2 = 9; // PWMA
  const int AIN1 = 8;
  const int BIN1 = 7;
  const int BIN2 = 6; // PWMB
  
  pinMode(AIN1,OUTPUT);
  pinMode(AIN2,OUTPUT);
  pinMode(BIN1,OUTPUT);
  pinMode(BIN2,OUTPUT);
  
  L=constrain(L,-255,255); // evitar valores no válidos para el PWM
  R=constrain(R,-255,255);

  digitalWrite(AIN1, L<0);
  analogWrite(AIN2, L+255*(L<0));
  digitalWrite(BIN1, R<0);
  analogWrite(BIN2, R+255*(R<0));  
  
  delay(t);
}

// funcion de lectura del sensor de ultrasonidos
unsigned long sonar(int trig)
{
  pinMode(trig, OUTPUT);
  digitalWrite(trig,LOW); // trigger envia un pulso ultrasónico
  delayMicroseconds(5);
  digitalWrite(trig, HIGH);     
  delayMicroseconds(10);
  pinMode(trig, INPUT);
  unsigned long tiempo=pulseIn(trig, HIGH);    // echo espera a recibir la respuesta
  unsigned long distancia= int(0.17*tiempo);  // fórmula para calcular la distancia
  return distancia;
}

