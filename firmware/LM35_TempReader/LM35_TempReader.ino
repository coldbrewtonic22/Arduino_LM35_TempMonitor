// Khai bao bien toan cuc
int adcValue;
float NhietDo;

void setup() {
  // Khoi tao giao tiep Serial toc do 9600 bps
  Serial.begin(9600); 
  delay(100);
}

void loop() {
  // Doc gia tri ADC tu chan A0 (1 kenh)
  adcValue = analogRead(A0);
  
  // Chuyen doi ADC sang nhiet do (Do C)
  NhietDo = (adcValue * 500.0) / 1023.0; 
  
  // Gui du lieu len Serial Monitor
  Serial.println(NhietDo, 1); // In ra 1 so sau dau phay
  delay(1000);
}
