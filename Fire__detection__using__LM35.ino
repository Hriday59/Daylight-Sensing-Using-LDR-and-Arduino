#define buzzer_PIN D5;

int LED = 12;

#define LM35_PIN A2;

int FIRE_detected;


void setup()

{

  Serial.begin(9600);

  pinMode(5, OUTPUT);

  pinMode(LED, OUTPUT);

  pinMode(A2, INPUT);

}


void loop()

{

  FIRE_detected = analogRead(A2);

  if (FIRE_detected == 1)

  {

    Serial.println("FIRE_detected");

    digitalWrite(5, HIGH);

    digitalWrite(LED, HIGH);

    delay(200);
     digitalWrite(5, LOW);
    digitalWrite(LED, LOW);

    delay(200);

  }

  else

  {

    Serial.println("NO FIRE_detected");

    digitalWrite(5, LOW);

    digitalWrite(LED, LOW);

  }

  delay(1000);

}

