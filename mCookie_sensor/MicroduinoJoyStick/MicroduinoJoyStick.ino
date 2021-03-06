
#define rocker_X A2
#define rocker_Y A3

#define buzzer_pin 6

int x,y;
int value;

void setup() {
  Serial.begin(9600);

   pinMode(rocker_X, INPUT);
   pinMode(rocker_Y, INPUT);
}

// the loop routine runs over and over again forever:
void loop() {
  // read the input pin:
  x = analogRead(rocker_X);
  y = analogRead(rocker_Y);
  // print out the state of the button:
  Serial.print("x: ");
  Serial.print(x);
  Serial.print('\t');
  Serial.print("y: ");
  Serial.println(y);

  delay(500);

  if(x<100) {
    x=100;
  }

  //value = map(x, 0, 1023, 0, 255);
  tone(buzzer_pin,x);

}

