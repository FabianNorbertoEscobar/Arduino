byte B = 1;
byte A = 2;
byte F = 3;
byte G = 4;
byte DP = 5;
byte C = 6;
byte D = 7;
byte E = 8;

byte t = 1000;

void setup()
{
  pinMode(B, OUTPUT);
  pinMode(A, OUTPUT);
  pinMode(F, OUTPUT);
  pinMode(G, OUTPUT);
  pinMode(DP, OUTPUT);
  pinMode(C, OUTPUT);
  pinMode(D, OUTPUT);
  pinMode(E, OUTPUT);
  
  digitalWrite(DP, LOW);
}

void loop()
{
  cero();
  delay(t);
  
  uno();
  delay(t);
  
  dos();
  delay(t);
  
  tres();
  delay(t);
  
  cuatro();
  delay(t);
  
  cinco();
  delay(t);
  
  seis();
  delay(t);
  
  siete();
  delay(t);
  
  ocho();
  delay(t);
  
  nueve();
  delay(t);
}

void cero(){
  digitalWrite(B, LOW);
  delay(30);
  digitalWrite(A, LOW);
  delay(30);
  digitalWrite(F, LOW);
  delay(30);
  digitalWrite(G, HIGH);
  delay(30);
  digitalWrite(C, LOW);
  delay(30);
  digitalWrite(D, LOW);
  delay(30);
  digitalWrite(E, LOW);
  delay(30);
}

void uno(){
  digitalWrite(B, LOW);
  delay(30);
  digitalWrite(A, HIGH);
  delay(30);
  digitalWrite(F, HIGH);
  delay(30);
  digitalWrite(G, HIGH);
  delay(30);
  digitalWrite(C, LOW);
  delay(30);
  digitalWrite(D, HIGH);
  delay(30);
  digitalWrite(E, HIGH);
  delay(30);
}

void dos(){
  digitalWrite(B, LOW);
  delay(30);
  digitalWrite(A, LOW);
  delay(30);
  digitalWrite(F, HIGH);
  delay(30);
  digitalWrite(G, LOW);
  delay(30);
  digitalWrite(C, HIGH);
  delay(30);
  digitalWrite(D, LOW);
  delay(30);
  digitalWrite(E, LOW);
  delay(30);
}

void tres(){
  digitalWrite(B, LOW);
  delay(30);
  digitalWrite(A, LOW);
  delay(30);
  digitalWrite(F, HIGH);
  delay(30);
  digitalWrite(G, LOW);
  delay(30);
  digitalWrite(C, LOW);
  delay(30);
  digitalWrite(D, LOW);
  delay(30);
  digitalWrite(E, HIGH);
  delay(30);
}

void cuatro(){
  digitalWrite(B, LOW);
  delay(30);
  digitalWrite(A, HIGH);
  delay(30);
  digitalWrite(F, LOW);
  delay(30);
  digitalWrite(G, LOW);
  delay(30);
  digitalWrite(C, LOW);
  delay(30);
  digitalWrite(D, HIGH);
  delay(30);
  digitalWrite(E, HIGH);
  delay(30);
}

void cinco(){
  digitalWrite(B, HIGH);
  delay(30);
  digitalWrite(A, LOW);
  delay(30);
  digitalWrite(F, LOW);
  delay(30);
  digitalWrite(G, LOW);
  delay(30);
  digitalWrite(C, LOW);
  delay(30);
  digitalWrite(D, LOW);
  delay(30);
  digitalWrite(E, HIGH);
  delay(30);
}

void seis(){
  digitalWrite(B, HIGH);
  delay(30);
  digitalWrite(A, HIGH);
  delay(30);
  digitalWrite(F, LOW);
  delay(30);
  digitalWrite(G, LOW);
  delay(30);
  digitalWrite(C, LOW);
  delay(30);
  digitalWrite(D, LOW);
  delay(30);
  digitalWrite(E, LOW);
  delay(30);
}

void siete(){
  digitalWrite(B, LOW);
  delay(30);
  digitalWrite(A, LOW);
  delay(30);
  digitalWrite(F, HIGH);
  delay(30);
  digitalWrite(G, HIGH);
  delay(30);
  digitalWrite(C, LOW);
  delay(30);
  digitalWrite(D, HIGH);
  delay(30);
  digitalWrite(E, HIGH);
  delay(30);
}

void ocho(){
  digitalWrite(B, LOW);
  delay(30);
  digitalWrite(A, LOW);
  delay(30);
  digitalWrite(F, LOW);
  delay(30);
  digitalWrite(G, LOW);
  delay(30);
  digitalWrite(C, LOW);
  delay(30);
  digitalWrite(D, LOW);
  delay(30);
  digitalWrite(E, LOW);
  delay(30);
}

void nueve(){
  digitalWrite(B, LOW);
  delay(30);
  digitalWrite(A, LOW);
  delay(30);
  digitalWrite(F, LOW);
  delay(30);
  digitalWrite(G, LOW);
  delay(30);
  digitalWrite(C, LOW);
  delay(30);
  digitalWrite(D, HIGH);
  delay(30);
  digitalWrite(E, HIGH);
  delay(30);
}
