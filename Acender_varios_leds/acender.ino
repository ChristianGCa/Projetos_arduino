int LED1 = 13;
int LED2 = 12;
int LED3 = 11;
int LED4 = 10;
int LED5 = 9;
int LED6 = 8;
int LED7 = 7;
int LED8 = 6;
int LED9 = 5;
int LED10 = 4;
int BUTTON1 = 3;
int BUTTON2 = 2;

void setup()
{
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  pinMode(LED4, OUTPUT);
  pinMode(LED5, OUTPUT);
  pinMode(LED6, OUTPUT);
  pinMode(LED7, OUTPUT);
  pinMode(LED8, OUTPUT);
  pinMode(LED9, OUTPUT);
  pinMode(LED10, OUTPUT);
  pinMode(BUTTON1, INPUT_PULLUP);
  pinMode(BUTTON2, INPUT_PULLUP);
}

void wave(){
    digitalWrite(LED5, HIGH);
    digitalWrite(LED6, HIGH);
    delay(500);
    digitalWrite(LED5, LOW);
    digitalWrite(LED6, LOW);
    digitalWrite(LED4, HIGH);
    digitalWrite(LED7, HIGH);
    delay(500);
    digitalWrite(LED4, LOW);
    digitalWrite(LED7, LOW);
    digitalWrite(LED3, HIGH);
    digitalWrite(LED8, HIGH);
    delay(500);
    digitalWrite(LED3, LOW);
    digitalWrite(LED8, LOW);
    digitalWrite(LED2, HIGH);
    digitalWrite(LED9, HIGH);
    delay(500);
    digitalWrite(LED2, LOW);
    digitalWrite(LED9, LOW);
    digitalWrite(LED1, HIGH);
    digitalWrite(LED10, HIGH);
    delay(500);
    digitalWrite(LED1, LOW);
    digitalWrite(LED10, LOW);
}

void snake(){

    digitalWrite(LED1, HIGH);
    delay(200);
    digitalWrite(LED2, HIGH);
    delay(200);
    digitalWrite(LED3, HIGH);
    delay(200);
    digitalWrite(LED1, LOW);
    digitalWrite(LED4, HIGH);
    delay(200);
    digitalWrite(LED2, LOW);
    digitalWrite(LED5, HIGH);
    delay(200);
    digitalWrite(LED3, LOW);
    digitalWrite(LED6, HIGH);
    delay(200);
    digitalWrite(LED4, LOW);
    digitalWrite(LED7, HIGH);
    delay(200);
    digitalWrite(LED5, LOW);
    digitalWrite(LED8, HIGH);
    delay(200);
    digitalWrite(LED6, LOW);
    digitalWrite(LED9, HIGH);
    delay(200);
    digitalWrite(LED7, LOW);
    digitalWrite(LED10, HIGH);
    delay(200);
    digitalWrite(LED8, LOW);
    delay(200);
    digitalWrite(LED9, LOW);
    delay(200);
    digitalWrite(LED10, LOW);

}

void loop()
{
  if (digitalRead(BUTTON1) == 0){
    wave();
  }
  if (digitalRead(BUTTON2) == 0){
    snake();
  }
}