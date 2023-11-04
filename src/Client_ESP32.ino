#include <WiFi.h>

const char* ssid = "Alcir_Hebinho";     // Nome da rede Wi-Fi
const char* password = "minha_senha"; // Senha da rede Wi-Fi
const char* serverIP = "192.168.4.1"; // Endereço IP do servidor



void setup() {
  Serial.begin(115200);
  delay(10);

  // Conectar ao ponto de acesso (Access Point)
  Serial.println();
  Serial.print("Conectando a ");
  Serial.println(ssid);

  WiFi.begin(ssid, password);

  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }
  Serial.println("Conectado ao servidor");

  // Iniciar a comunicação com o servidor
  sendHelloToServer();
}

void loop() {
}

void sendHelloToServer() {
    delay(5000);
    WiFiClient client;
    for(int i = 1; i < 51; i++){
       if (client.connect(serverIP, 80)) {
        client.print("Pacote: ");
        client.println(i);
        Serial.println("Enviado...");
        
       }else {
          Serial.println("Falha na conexão com o servidor");
       }
       delay(1000);
       if (client.available()) {
          String response = client.readString();
          int32_t rssi = WiFi.RSSI();
          
          Serial.print(i);
          Serial.print(",");
          Serial.println(rssi);
        } else {
          Serial.println("Sem resposta do servidor");
        }

       
       
    }
    
    
    
    client.stop();
}
