// Based on mClon project

//
 
int trig = 12;        // trigger PIN
int echo = 12;        // echo PIN
long time;
long dist;
 
void setup(){
  Serial.begin(9600);

}

// Programa:
 
void loop(){
  
  dist = us_read();
  
  Serial.print(dist);
  Serial.println(" cm");
  delay(200);
}

lond dist = us_read(){
  digitalWrite(trig,LOW); 
  delayMicroseconds(5);
  pinMode(trig, OUTPUT);
  digitalWrite(trig, HIGH);     // ultrasonic pulse
  delayMicroseconds(10);
  pinMode(echo, INPUT);
  time=pulseIn(echo, HIGH,200);    // time to echo. 200 microseconds limit
  dist= int(0.017*time);  // distance calculation
}
 
