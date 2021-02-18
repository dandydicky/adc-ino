void setup() {
Serial.begin(9600);
}

void loop() {

int NilaiSensor = analogRead(A0);  // variabel NilaiSensor di set pada pin analog 0 arduino.

float Tegangan = NilaiSensor * (5.0 / 4095.0); // Konversi NilaiSensor (dari 0 – 4095) menjadi tegangan (0 – 5V): menggunakan tipe data float atau pecahan desimal..

Serial.println(Tegangan);  //tampilkan hasil dari variabel tegangan pada serial monitor.

}


/* hasil adc = 2.235,87
 *  rumus = 2.235,87 * (5 volt / 4095) = 2,73
 */
