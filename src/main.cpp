#include <Arduino.h>

void setup() {
    Serial.begin(115200); 
}

void loop() {
    int quangtro = analogRead(34); 

    Serial.print(">quangtro:");
    Serial.println(quangtro);

    delay(200); 
}
