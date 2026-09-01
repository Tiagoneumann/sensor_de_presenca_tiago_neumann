// C++ code
//

int pinoLED = 6;
int sensorPIR = 7;
bool estado = false;

void setup()
{
  pinMode(pinoLED, OUTPUT);
  pinMode(sensorPIR, INPUT);
}

void loop()
{
  estado = digitalRead(sensorPIR);

  if (estado == HIGH) {
    digitalWrite(pinoLED, HIGH);
    delay(5000);
  } else {
    digitalWrite(pinoLED, LOW);
  }
}
