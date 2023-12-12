#define LED_AZUL 2
#define BOTAO_AZUL 8

void setup(){
  Serial.begin(9600);
  pinMode(LED_AZUL, OUTPUT);
  pinMode(BOTAO_AZUL, INPUT_PULLUP);
}
void loop(){
  int estado_BOTAO_AZUL = digitalRead(BOTAO_AZUL);
  Serial.println(estado_BOTAO_AZUL);
  if (estado_BOTAO_AZUL == LOW){
    digitalWrite(LED_AZUL, HIGH);
  }
  if (estado_BOTAO_AZUL == HIGH){
    digitalWrite(LED_AZUL, LOW);
  }

}
