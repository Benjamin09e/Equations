double x=1.0, a=3.5, b= 14.41; 
void setup() {
Serial.begin(9600);
}

void loop() {
  Serial.print("la solution de l'equation : ");
  Serial.print(a);
  Serial.print("x +");
  Serial.print(b);
  Serial.println("=0");
  Serial.print("x =");
  Serial.println(-b/a);
  delay(5000);
}
