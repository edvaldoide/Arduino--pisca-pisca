void setup() {
  // put your setup code here, to run once:

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
  // put your main code here, to run repeatedly:

  digitalWrite (1,HIGH);
  digitalWrite (2,3,4,5,6,7,8,9,10, LOW);
  delay(500);

  digitalWrite (1,2, HIGH);
  digitalWrite (3,4,5,6,7,8,9,10, LOW);
  delay(500);
  
  digitalWrite (1,2,3, HIGH);
  digitalWrite (4,5,6,7,8,9,10, LOW);
  delay(500);
  
  digitalWrite (1,2,3,4, HIGH);
  digitalWrite (5,6,7,8,9,10, LOW);
  delay(500);

  digitalWrite (1,2,3,4,5, HIGH);
  digitalWrite (6,7,8,9,10, LOW);
  delay(500);

  digitalWrite (1,2,3,4,5,6, HIGH);
  digitalWrite (7,8,9,10, LOW);
  delay(500);
  
  digitalWrite (1,2,3,4,5,6,7, HIGH);
  digitalWrite (8,9,10, LOW);
  delay(500);

  digitalWrite (1,2,3,4,5,6,7,8, HIGH);
  digitalWrite (9,10, LOW);
  delay(500);

  digitalWrite (1,2,3,4,5,6,7,8,9, HIGH);
  digitalWrite (10, LOW);
  delay(500);

  digitalWrite (1,2,3,4,5,6,7,8,9,10, HIGH);
  delay(500);

   
}
