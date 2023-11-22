const int piezoPin = A5; // Piezo no pino analógico 5
const int ledPin = 3; // LED no pino digital 3 (PWM)

int batida = 120; //valor do sensor antes da ativação
int sensorValor = 0; // Variável para armzazenar o valor lido no piezo
float brilhoLed = 0; //Brilho do Led

void setup() {
pinMode(ledPin, OUTPUT); // Define o ledPin como OUTPUT
// Pisca o LED duas vezes, para mostrar que o programa iniciou
digitalWrite(ledPin, HIGH); 
delay(150); 
digitalWrite(ledPin, LOW); 
delay(150);
// Pisca a segunda vez
digitalWrite(ledPin, HIGH); 
delay(150); 
digitalWrite(ledPin, LOW); 
delay(150);
}

void loop() {
sensorValor = analogRead(piezoPin); // Lê o valor do sensor (piezo)
if (sensorValor >= batida) { // Se uma batida for detectada, defina o brilho como máximo
brilhoLed = 255;
}
analogWrite(ledPin, int(brilhoLed) ); // Mostra o valor de brilho no LED
brilhoLed = brilhoLed - 0.05; // Apaga o LED lentamente 
if (brilhoLed <= 0) { 
brilhoLed = 0;}
// Certifica-se de que o valor não será menor que zero
} 
