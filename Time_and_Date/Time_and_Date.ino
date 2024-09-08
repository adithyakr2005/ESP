#include <ctime> 

void setup() {

  Serial.begin(9600);
}

void loop() {
  time_t now = time(nullptr);
  Serial.println(ctime(&now));
  delay(1000);
}
