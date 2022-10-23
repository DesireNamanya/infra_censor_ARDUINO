
int light = 12;
int infra_censor = 10;
int sound = 8;
void setup() {
  // put your setup code here, to run once:
pinMode(light,OUTPUT);
pinMode(infra_censor,INPUT); 
pinMode(sound,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
int infra_input = digitalRead(infra_censor);
if (infra_input == 0){
  digitalWrite(light, HIGH);
  digitalWrite(sound, HIGH);
  }else{
    digitalWrite(light, LOW);
    digitalWrite(sound,LOW);
    }
}
