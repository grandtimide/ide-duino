#include <Wire.h>

#define PCB_I2C_ADDRESS 0x42  

void setup() {
  Serial.begin(9600);
  Wire.begin();

  // Initialiser votre carte PCB
  initializeBoard();
}

void loop() {
  float temperature = readTemperature();
  float humidity = readHumidity();

  // Afficher les données sur le moniteur série
  Serial.print("Temperature: ");
  Serial.print(temperature);
  Serial.println(" °C");

  Serial.print("Humidity: ");
  Serial.print(humidity);
  Serial.println(" %");

  // Ajouter un délai entre les lectures
  delay(3000);  
}

float read
   float temperature = myTemperatureSensor.readTemperature();
   return temperature;

  return 25.0;  
}

float readHumidity() {

   float humidity = myHumiditySensor.readHumidity();
   return humidity;

  return 50.0;  // Valeur fictive pour l'exemple
}
}

void initializeBoard() {
  // Exemple d'initialisation pour un composant sur le bus I2C
  initializeI2CComponent();

  // Autres initialisations spécifiques à votre carte PCB
  // ...
}

void initializeI2CComponent() {

   Wire.beginTransmission(PCB_I2C_ADDRESS);
   Wire.write(register);
   Wire.write(value);
   Wire.endTransmission();
   Wire.beginTransmission(PCB_I2C_ADDRESS);
   Wire.write(0x01);  // Écrire 0x01 au registre
   Wire.write(0xff);  // Écrire 0xFF comme valeur
   Wire.endTransmission();
}
