int motor1a = 5; 
int motor1b = 6; 
int soil = A0; 
int datasoil; 
int water = A1; 
int datawater; 
int led1 = 8; 
int led2 = 9; 
 
void setup() { 
  Serial.begin(9600); 
  pinMode(motor1a, OUTPUT); 
  pinMode(motor1b, OUTPUT); 
  pinMode(led1, OUTPUT); 
  pinMode(led2, OUTPUT); 
  pinMode(soil, INPUT); 
  pinMode(water, INPUT); 
 
} 
 
void loop() { 
  datawater = analogRead(water); 
  Serial.print("NIVEL DEL AGUA: "); 
  Serial.println(datawater); 
  
  datasoil = analogRead(soil); 
  Serial.print("HUMEDAD DE LA TIERRA: "); 
  Serial.println(datasoil); 
  delay(300); 
 
 if(datasoil >= 0 && datasoil < 680) 
 {   
  digitalWrite(motor1a, LOW); 
  digitalWrite(motor1b, LOW); 
 } 
 

 if(datasoil >= 681 && datasoil <1023) 
 { 
  digitalWrite(motor1a, HIGH); 
  digitalWrite(motor1b, LOW); 
 } 
 
 if(datawater >= 0 && datawater < 550) 
 { 
  digitalWrite(led1, HIGH); 
  digitalWrite(led2, LOW); 
 } 
 
 if(datawater >= 551 && datawater < 1023) 
 { 
  digitalWrite(led1, HIGH); 
  digitalWrite(led2, HIGH); 
 } 
 
} 
