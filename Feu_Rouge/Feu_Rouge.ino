//Creation of variables
//and put each variables to his pinBreach
int const led_vert1 = 2;
int const led_jaune1 = 3;
int const led_rouge1 = 4;
int const led_vert2 = 5;
int const led_jaune2 = 6;
int const led_rouge2 = 7;

void setup() {
  // Initialisation of variables
  pinMode(led_vert1, OUTPUT);
  pinMode(led_jaune1, OUTPUT);
  pinMode(led_rouge1, OUTPUT);
  pinMode(led_vert2, OUTPUT);
  pinMode(led_jaune2, OUTPUT);
  pinMode(led_rouge2, OUTPUT);
}

void loop() {
//---------****** MAIN CODE ******------------------//
// All the code for the first lamps are written here... 
//Then we manage all the first lamps here before the second    
  digitalWrite(led_vert1, HIGH);
  digitalWrite(led_rouge2, HIGH);
  digitalWrite(led_rouge1, LOW);
  digitalWrite(led_jaune2, LOW);
  
// wait until 5000 millisecond (5 seconds)
// before start an other process 
  delay(5000);
  digitalWrite(led_jaune1, HIGH);
  digitalWrite(led_rouge2, HIGH);
  digitalWrite(led_vert1, LOW);
  delay(4000);
  
//-----------****** THE SECOND PART OF THE CODE ******------// 
// A RED LED for the first process is ON and let place for the second process to start
// The GREEN LED of the second process is ON... it's a new task
  digitalWrite(led_rouge1, HIGH);
  digitalWrite(led_vert2, HIGH);
  digitalWrite(led_vert1, LOW);
  digitalWrite(led_jaune1, LOW);
  digitalWrite(led_rouge2, LOW);
  delay(5000);
  digitalWrite(led_vert1, LOW);
  digitalWrite(led_rouge1, HIGH);
  digitalWrite(led_jaune2, HIGH);
  digitalWrite(led_vert2, LOW);
  digitalWrite(led_jaune1, LOW);
  delay(4000);
}
