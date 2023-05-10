#include "max6675.h"
 
int ktcSO1 = 2;
int ktcCS1= 3;
int ktcCLK1 = 4;


int ktcSO2 = 38;
int ktcCS2= 39;
int ktcCLK2 = 40;


int ktcSO3 = 8;
int ktcCS3= 9;
int ktcCLK3 = 10;


int ktcSO4 = 11;
int ktcCS4= 12;
int ktcCLK4 = 13;


int ktcSO5 = 14;
int ktcCS5= 15;
int ktcCLK5 = 16;


int ktcSO6 = 17;
int ktcCS6= 18;
int ktcCLK6 = 19;


int ktcSO7 = 22;
int ktcCS7= 23;
int ktcCLK7 = 24;


int ktcSO8 = 26;
int ktcCS8= 27;
int ktcCLK8 = 28;


int ktcSO9 = 30;
int ktcCS9= 31;
int ktcCLK9 = 32;


int ktcSO10 = 34;
int ktcCS10= 35;
int ktcCLK10 = 36;


MAX6675 ktc1(ktcCLK1, ktcCS1, ktcSO1);
MAX6675 ktc2(ktcCLK2, ktcCS2, ktcSO2);
MAX6675 ktc3(ktcCLK3, ktcCS3, ktcSO3);
MAX6675 ktc4(ktcCLK4, ktcCS4, ktcSO4);
MAX6675 ktc5(ktcCLK5, ktcCS5, ktcSO5);
MAX6675 ktc6(ktcCLK6, ktcCS6, ktcSO6);
MAX6675 ktc7(ktcCLK7, ktcCS7, ktcSO7);
MAX6675 ktc8(ktcCLK8, ktcCS8, ktcSO8);
MAX6675 ktc9(ktcCLK9, ktcCS9, ktcSO9);
MAX6675 ktc10(ktcCLK10, ktcCS10, ktcSO10);

   
void setup() {
  Serial.begin(9600);
  delay(500);
}
 
void loop() {
   
   Serial.print("Deg C1 = ");
   Serial.print(ktc1.readCelsius());
   //Serial.print(",\t Deg F1 = ");
   //Serial.println(ktc1.readFahrenheit());

   Serial.print("Deg C2 = ");
   Serial.print(ktc2.readCelsius());
   //Serial.print(",\t Deg F2 = ");
   //Serial.println(ktc2.readFahrenheit());
   
   Serial.print("Deg C3 = ");
   Serial.print(ktc3.readCelsius());
   //Serial.print(",\t Deg F3 = ");
   //Serial.println(ktc3.readFahrenheit());

   Serial.print("Deg C4 = ");
   Serial.print(ktc4.readCelsius());
   //Serial.print(",\t Deg F5 = ");
   //Serial.println(ktc4.readFahrenheit());

   Serial.print("Deg C5 = ");
   Serial.print(ktc5.readCelsius());
   //Serial.print(",\t Deg F5 = ");
   //Serial.println(ktc5.readFahrenheit());

   Serial.print("Deg C6 = ");
   Serial.print(ktc6.readCelsius());
   //Serial.print(",\t Deg F6 = ");
   //Serial.println(ktc6.readFahrenheit());

   Serial.print("Deg C7 = ");
   Serial.print(ktc7.readCelsius());
   //Serial.print(",\t Deg F7 = ");
   //Serial.println(ktc7.readFahrenheit());

   Serial.print("Deg C8 = ");
   Serial.print(ktc8.readCelsius());
   //Serial.print(",\t Deg F8 = ");
   //Serial.println(ktc8.readFahrenheit());

   Serial.print("Deg C9 = ");
   Serial.print(ktc9.readCelsius());
   //Serial.print(",\t Deg F9 = ");
   //Serial.println(ktc9.readFahrenheit());

   Serial.print("Deg C10 = ");
   Serial.print(ktc10.readCelsius());
   //Serial.print(",\t Deg F10 = ");
   //Serial.println(ktc10.readFahrenheit());
   Serial.println("\n");

   delay(5000);
}
