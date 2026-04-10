// Khai bao bien toan cuc kieu mang (array)
int adcValues[2]; 
float nhietDo[2]; 
char chuoi[30];

void setup() {
  // Khoi tao giao tiep Serial toc do 9600 bps
  Serial.begin(9600);
  delay(100);
}

void loop() {
  // Doc cam bien 1 (Kenh A0)
  adcValues[0] = analogRead(A0);
  nhietDo[0] = (adcValues[0] * 500.0) / 1023.0;
  
  // Doc cam bien 2 (Kenh A1)
  adcValues[1] = analogRead(A1);
  nhietDo[1] = (adcValues[1] * 500.0) / 1023.0;
  
  // Dong goi du lieu thanh chuoi CSV (NhietDo1,NhietDo2)
  sprintf(chuoi, "%d,%d\n", (int)nhietDo[0], (int)nhietDo[1]);
  Serial.print(chuoi);
  
  delay(100);
}