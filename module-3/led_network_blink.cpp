#include <ESP8266WiFi.h>
#include <ESP8266WebServer.h>

const char* ssid = "iotempire-karl";
const char* password = "";

ESP8266WebServer server(80);

void setup() {
  Serial.begin(115200);
  WiFi.begin(ssid, password);

  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }

  Serial.println("");
  Serial.print("Connected to ");
  Serial.println(ssid);
  Serial.print("IP address: ");
  Serial.println(WiFi.localIP());

  pinMode(LED_BUILTIN, OUTPUT);
  server.on("/toggleled", HTTP_GET, toggleLED);
  server.begin();
  Serial.println("HTTP server started");
}

void toggleLED() {
  digitalWrite(LED_BUILTIN, !digitalRead(LED_BUILTIN)); // Toggle the LED
  server.send(200, "text/plain", digitalRead(LED_BUILTIN) ? "LED is ON" : "LED is OFF");
}

void loop() {
  server.handleClient(); // Handle client requests
}
