/*
 * Du an: Doc nhiet do LM35 va gui qua Serial
 * Tinh nang: Doc 3 kenh A0, A1, A2 (Nhanh feature/add-channel-A2)
 */

// Khai bao mang de luu tru cho 3 kenh (Toi uu hoa theo huong Clean Code)
int adcValues[3];
float nhietDo[3];
// Tang kich thuoc buffer len 30 de tranh loi tran bo nho (buffer overflow) khi chuoi dai hon
char chuoi[30]; 

void setup() {
  Serial.begin(9600);
  delay(100);
}

void loop() {
  // 1. Doc va tinh toan cho Kenh A0
  adcValues[0] = analogRead(A0);
  nhietDo[0] = (adcValues[0] * 500.0) / 1023.0;

  // 2. Doc va tinh toan cho Kenh A1
  adcValues[1] = analogRead(A1);
  nhietDo[1] = (adcValues[1] * 500.0) / 1023.0;

  // 3. Doc va tinh toan cho Kenh A2 (Tinh nang moi bo sung)
  adcValues[2] = analogRead(A2);
  nhietDo[2] = (adcValues[2] * 500.0) / 1023.0;

  // Dong goi du lieu thanh chuoi CSV (GiaTri1,GiaTri2,GiaTri3)
  sprintf(chuoi, "%d,%d,%d\n", (int)nhietDo[0], (int)nhietDo[1], (int)nhietDo[2]);
  Serial.print(chuoi);

  delay(100);
}