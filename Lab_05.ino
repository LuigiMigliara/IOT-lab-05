int wiperPin = A0;
int resVal= 0, led1 = 3, led2 = 4, led3 = 5, led4 = 6, led5 = 7;

void setup() {
  pinMode(wiperPin, INPUT);
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
  
  //use this to debug because i can check if the light changes at the set values
  Serial.begin(9600);
}

void loop() {
  //use this to display to the serial monitor
  int sensorValue = analogRead(A0);
  Serial.println(sensorValue);
  resVal= analogRead(wiperPin);

  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
  digitalWrite(led4, LOW);
  digitalWrite(led5, LOW);

  if (resVal > 200)
  {
    digitalWrite(led1, HIGH);
    }

  if (resVal > 400)
  {
    digitalWrite(led2, HIGH);
    }

if (resVal > 600)
  {
    digitalWrite(led3, HIGH);
    }

if (resVal > 800)
  {
    digitalWrite(led4, HIGH);
    }

if (resVal > 1000)
  {
    digitalWrite(led5, HIGH);
    }

}
