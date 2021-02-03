int steppin = 3;
int dirpin = 2;
int stepdelay;
int speed_value;
int direction_value;


void setup() {
  Serial.begin(9600);
  pinMode(steppin, OUTPUT);
  pinMode(dirpin, OUTPUT);
  digitalWrite(dirpin, LOW); // direction pin either LOW or HIGH to move in either direction.


}
 
void loop() {
  int val = analogRead(A7);
  speed_value = val;

  stepdelay = map(speed_value,0,1023,50,0);
  //Serial.print(stepdelay);
  //Serial.println();


  if (speed_value > 20) {
     digitalWrite(dirpin, LOW);
     digitalWrite(steppin, HIGH);
     delayMicroseconds(stepdelay);
     digitalWrite(steppin, LOW);
  }

  else {

     digitalWrite(steppin, HIGH);
  }
 
}
 
