float Vin= 5,Vout,R1= 100,R2,i=0;
void setup()
{
Serial.begin(9600);

Serial.println("Program mengukur resistor");

Serial.println("R1 harus 100ohm ");
Serial.println("Jika R2 tidak tersambung program akan berhenti membaca");
}
void loop()
{
  delay(1000);
Vout= (analogRead(A0)* Vin)/1023.0;
i=(Vin-Vout)/R1;
R2= Vout/i;
if(R2==Vout/0){
  R2=0;
}
else{
Serial.print("Vout: ");
Serial.print(Vout);
Serial.println(" Volt");
Serial.print("I: ");
Serial.print(i*1000);
Serial.println(" mA");
Serial.print("R2: ");
Serial.print(R2);
Serial.println(" ohm");
  delay(1000);}
}
