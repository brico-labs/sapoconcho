// Configuración
void setup()
{
  Serial.begin(9600);
}

// Programa común
void loop()
{
  unsigned long distancia = sonar(2);    // invocamos a función de medir distancia
  Serial.print("Distancia: ");  // imprimimos los valores en la consola
  Serial.print(distancia);
  Serial.println(" mm");
}

// Función
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
