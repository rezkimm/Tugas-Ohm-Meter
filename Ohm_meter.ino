float Vin= 5,Vout,R1= 100,R2;
void setup()
{
Serial.begin(9600);
}
void loop()
{
Vout= (analogRead(A0)* Vin)/1023.0;
R2= Vout/((Vin-Vout)/R1);
if(R2==Vout/0){
  R2=0;
}
Serial.print("Vout: ");
Serial.println(Vout);
Serial.print("R2: ");
Serial.println(R2);
delay(1000);
}

