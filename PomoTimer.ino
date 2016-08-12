#include <LiquidCrystal.h>

LiquidCrystal lcd(8, 9, 4, 5, 6, 7);

int backLightPin = 10; 
int pomoCounter = 1; 

long pomodoro = 15000000;
long shortBreak = 300000; 
long longBreak = 900000; 

void setup() {
  // put your setup code here, to run once:

  lcd.begin(16,2);
  lcd.print("hello, world!");
  Serial.begin(9600); 


}

void loop() {

  long startTime = millis(); 

  if (pomoCounter==8){
     lcd.println("Long Break Started");
     while(millis()-startTime<=longBreak){
      
     }

     lcd.println("Long Break Ended");
     

     
     pomoCounter=0; 
  }

  else if(pomoCounter%2){
    
     Serial.println("pomoTime");

  }

  else{

         Serial.println("shrtbrk"); 
      
    }

      pomoCounter++; 
  


}

void backLightOff(boolean status){
  if(status){
    pinMode(backLightPin,OUTPUT); 
    digitalWrite(backLightPin, LOW); 
  }
  else
    pinMode(backLightPin, INPUT);
}


