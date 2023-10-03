// Created by: Youngwook Go
// Created on: OCT 2023
// Blinks a LED


void setup()
{
  pinMode(7, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
}

void loop()
{
  digitalWrite(7, HIGH);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  delay(1000); // Wait for 1000 millisecond(s)

  digitalWrite(7, LOW);
  digitalWrite(5, HIGH);
  digitalWrite(6, LOW);
  delay(1000); // Wait for 1000 millisecond(s)

  digitalWrite(7, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)

  digitalWrite(7, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(6, LOW);
  delay(1000); // Wait for 1000 millisecond(s)

  digitalWrite(7, LOW);
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)

  digitalWrite(7, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)

}