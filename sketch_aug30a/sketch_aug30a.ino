
const int yellowLed = 5;
const int blueLed = 4;
const int redLed = 3;

//variable for the switch
const int switchPin = 2;

void setup() {
  // put your setup code here, to run once:
  pinMode(yellowLed, OUTPUT);
  pinMode(blueLed, OUTPUT);
  pinMode(redLed, OUTPUT);

//declare the switch pin as an input
pinMode(switchPin, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int switchState;
  switchState = digitalRead(switchPin);
  
  if(switchState == LOW){
    digitalWrite(redLed, LOW);
    digitalWrite(yellowLed, HIGH);
    digitalWrite(blueLed, LOW);

    delay(5000);
    digitalWrite(yellowLed, LOW);
    digitalWrite(blueLed, HIGH);
    delay(5000);
  }else{
    digitalWrite(yellowLed, LOW);
    digitalWrite(blueLed, LOW);
    
    digitalWrite(redLed, HIGH);
  }
}
