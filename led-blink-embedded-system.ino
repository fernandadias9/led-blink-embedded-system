// Definindo os pinos dos LEDs
const int ledVermelho = 2;
const int ledAzul = 3;
const int ledVerde = 4;
const int ledAmarelo = 5;

void setup() {
  // Configurando os pinos dos LEDs como saída
  pinMode(ledVermelho, OUTPUT);
  pinMode(ledAzul, OUTPUT);
  pinMode(ledVerde, OUTPUT);
  pinMode(ledAmarelo, OUTPUT);
}

void loop() {
  // Ligar o LED vermelho por 1 segundo
  digitalWrite(ledVermelho, HIGH);
  delay(1000); // Espera 1 segundo
  digitalWrite(ledVermelho, LOW);

  // Ligar o LED azul por 1 segundo
  digitalWrite(ledAzul, HIGH);
  delay(1000); // Espera 1 segundo
  digitalWrite(ledAzul, LOW);

  // Ligar o LED verde por 1 segundo
  digitalWrite(ledVerde, HIGH);
  delay(1000); // Espera 1 segundo
  digitalWrite(ledVerde, LOW);

  // Ligar o LED amarelo por 1 segundo
  digitalWrite(ledAmarelo, HIGH);
  delay(1000); // Espera 1 segundo
  digitalWrite(ledAmarelo, LOW);
}
