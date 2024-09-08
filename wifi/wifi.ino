#include <ESP8266WiFi.h>

const char* ssid = "ssid";
const char* password = "password";

void setup() {
  Serial.begin(9600);  // Start the Serial communication

  // Connect to Wi-Fi
  WiFi.begin(ssid, password);

  Serial.print("Connecting to ");
  Serial.print(ssid);

  // Wait until connected
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print("\n.");
  }

  // Print the connected IP address
  Serial.println("");
  Serial.println("Connected to Wi-Fi");
  Serial.print("IP Address: ");
  Serial.println(WiFi.localIP());
}
void loop(){
  Serial.println("cyka Wifi Connected.");
  delay(5000);
}