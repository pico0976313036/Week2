const byte LEDs[] =
{0,1,2,3,4,5,6,7};
const byte total = sizeof(LEDs);
byte index = 0;
void setup(){
// 將每個 Pin 設定成輸出
for (byte i=0;i<total;i++)
{
pinMode(LEDs[i], OUTPUT);
}
}

void loop() {
for (int a=0; a <2; a++){
for (index=0; index <= 7; index++){
digitalWrite(LEDs[index], HIGH);
}
delay(1000);
for (index=0; index <= 7; index++){
digitalWrite(LEDs[index], LOW);
}
delay(1000);
}

for (index=0; index <= 7; index++){
for (byte i=0;i<total;i++) {
digitalWrite(LEDs[i], LOW);}
digitalWrite(LEDs[index], HIGH);
delay(1000);}

for (int a=0; a <2; a++){
for (index=0; index <= 7; index++){
digitalWrite(LEDs[index], HIGH);
}
delay(1000);
for (index=0; index <= 7; index++){
digitalWrite(LEDs[index], LOW);
}
delay(1000);
}

for (index=7; index > 0; index--){
for (byte i=0;i<total;i++) {
digitalWrite(LEDs[i], LOW);}
digitalWrite(LEDs[index], HIGH);
delay(1000);}
}
