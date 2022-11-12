//DETECTOR_SIS_PROJECT_PART1

int echo = 13;
int trigger = 12;
int led1 = 2;
int duracion;
int distancia;

void setup() {
  Serial.begin(9600);
  pinMode(13, INPUT);
  pinMode(12, OUTPUT);
  pinMode(2, OUTPUT);

}

void loop() {
  digitalWrite(trigger, HIGH);
  delay(1);
  digitalWrite(trigger, LOW);
  duracion = pulseIn(echo, HIGH);
  distancia = duracion / 58.2;
  Serial.println(distancia);
  delay(100);

  if(distancia >= 10 && distancia <= 70){
    digitalWrite(led1, LOW);
  }
  else{
    digitalWrite(led1, HIGH);
  }

}
