const int led = 9;      
const int piezo = A0; 
int valorPiezo = 0; // valor do piezo

void setup() {
  pinMode(led, OUTPUT); 
  Serial.begin(9600);       
}
int cont=0;
void loop() {
  
  valorPiezo = analogRead(piezo);
  Serial.println(sensorReading);
  if (valorPiezo > 0) {
    cont++;
    Serial.print("contador: ");
    Serial.println(cont);
  }
  if(cont == 5){
    cont = 0;
    digitalWrite(led, HIGH);
    delay(3000);
    digitalWrite(led, LOW);
    Serial.println("Abriuuu");
  }
  delay(100);  
}
