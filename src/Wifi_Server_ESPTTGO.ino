#include <WiFi.h>
WiFiServer server(80);

void setup() {
  Serial.begin(115200);
  delay(10);
  // Conectar-se à rede Wi-Fi
  Serial.println();
  Serial.print("Conectando à rede Wi-Fi como Access Point");
  WiFi.softAP("Alcir_Hebinho", "minha_senha");

  Serial.println("");
  Serial.println("Conectado à rede Wi-Fi como Access Point");
  
  IPAddress IP = WiFi.softAPIP();
  Serial.print("AP IP address: ");
  Serial.println(IP);
  
  server.begin();
}

void loop() {
  // Aguardar uma conexão do cliente
  WiFiClient client = server.available();
  if (!client) {
    return;
  }

  // Ler a mensagem do cliente
  String request = client.readStringUntil('\r');
  Serial.println("Recebido: " + request);
  
  // Enviar a resposta "ACK" de volta ao cliente
  client.println("ACK");
  client.stop();
}
