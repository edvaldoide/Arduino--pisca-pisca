void setup() {
  // configura portas 1 a 10 como saída

  pinMode(1, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
}

void loop() {
  // Projeto pisca-pisca 04

  digitalWrite (1,HIGH);
  digitalWrite (2,LOW);
  digitalWrite (3,HIGH);
  digitalWrite (4,LOW);
  digitalWrite (5,HIGH);
  digitalWrite (6,LOW);
  digitalWrite (7,HIGH);
  digitalWrite (8,LOW);
  digitalWrite (9,HIGH);
  digitalWrite (10,LOW);
  delay(500);

  digitalWrite (1,LOW);
  digitalWrite (2,HIGH);
  digitalWrite (3,LOW);
  digitalWrite (4,HIGH);
  digitalWrite (5,LOW);
  digitalWrite (6,HIGH);
  digitalWrite (7,LOW);
  digitalWrite (8,HIGH);
  digitalWrite (9,LOW);
  digitalWrite (10,HIGH);
  delay(500);
  
}
