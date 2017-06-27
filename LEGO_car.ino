
//left side motors:
#define in1 8 // left positive
#define in2 7 // left negative

//right side motors:
#define in3 5 // right positive
#define in4 4 // right negative

char D = 0; //gets value from the bluetooth module

void setup() {
  Serial.begin(9600); //for the blutooth
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);
  
}

void loop() {
  if (Serial.available()>0) { //checks the serial port got information
    D = Serial.read(); 
  }
  if (D == 'S')
    Stop();
  else if (D == 'F')
    forward();
  else if (D == 'B') 
    backward();
  else if (D == 'r') 
    rightTurn();
  else if (D == 'l')
    leftTurn();
  else if (D == 'R')
    right();
  else if (D == 'L')
    left();
  else if (D == 'c')
    reverseRight();
  else if (D == 'd')
    reverseLeft();
  else
    Stop();

}

void forward() { //F
  digitalWrite (in1, HIGH);
  digitalWrite (in2, LOW);
  digitalWrite (in3, HIGH);
  digitalWrite (in4, LOW);
}

void Stop() { //S
  digitalWrite (in1, LOW);
  digitalWrite (in2, LOW);
  digitalWrite (in3, LOW);
  digitalWrite (in4, LOW);
}

void backward() { //B
  digitalWrite (in1, LOW);
  digitalWrite (in2, HIGH);
  digitalWrite (in3, LOW);
  digitalWrite (in4, HIGH);
}

void rightTurn() { //r
  digitalWrite (in1, HIGH);
  digitalWrite (in2, LOW);
  digitalWrite (in3, LOW);
  digitalWrite (in4, LOW);
}

void leftTurn() { //l
  digitalWrite (in1, LOW);
  digitalWrite (in2, LOW);
  digitalWrite (in3, HIGH);
  digitalWrite (in4, LOW);
}

void left() { //L
  digitalWrite (in1, LOW);
  digitalWrite (in2, HIGH);
  digitalWrite (in3, HIGH);
  digitalWrite (in4, LOW);
}

void right() { //R
  digitalWrite (in1, HIGH);
  digitalWrite (in2, LOW);
  digitalWrite (in3, LOW);
  digitalWrite (in4, HIGH);
}

void reverseLeft() { //d
  digitalWrite (in1, LOW);
  digitalWrite (in2, LOW);
  digitalWrite (in3, LOW);
  digitalWrite (in4, HIGH);
}

void reverseRight() { //c
  digitalWrite (in1, LOW);
  digitalWrite (in2, HIGH);
  digitalWrite (in3, LOW);
  digitalWrite (in4, LOW);
}

