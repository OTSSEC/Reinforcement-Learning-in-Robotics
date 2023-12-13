#include <Servo.h>
Servo myservo;
const int StepX = 2;
const int DirX = 5;
const int StepY = 3;
const int DirY = 6;
const int StepZ = 4;
const int DirZ = 7;
int tekrarKontrol = 1;



void setup() {
  myservo.attach(13);
  pinMode(StepX,OUTPUT);
  pinMode( DirX,OUTPUT);
  pinMode(StepY,OUTPUT);
  pinMode( DirY,OUTPUT);
  pinMode(StepZ,OUTPUT);
  pinMode( DirZ,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  
  if(Serial.available())
  {
    char gelen_bilgi=Serial.read();
    
    if(gelen_bilgi=='1')
    {
      digitalWrite(DirX, HIGH);
for(int x = 0; x<150; x++) 
{ 
  digitalWrite(StepX,HIGH);
  delayMicroseconds(1000);
  digitalWrite(StepX,LOW); 
  delayMicroseconds(1000);
  
}

   
  }  

  
  if(gelen_bilgi=='2')
    {
      digitalWrite(DirX,LOW);
for(int x = 0; x<150; x++) 
{ 
  digitalWrite(StepX,HIGH);
  delayMicroseconds(1000);
  digitalWrite(StepX,LOW); 
  delayMicroseconds(1000);
  
}

  }  

if(gelen_bilgi=='3')
    {
      digitalWrite(DirY,HIGH);
for(int x = 0; x<250; x++) 
{ 
  digitalWrite(StepY,HIGH);
  delayMicroseconds(1000);
  digitalWrite(StepY,LOW); 
  delayMicroseconds(1000);
}

    }

if(gelen_bilgi=='4')
    {
      digitalWrite(DirY,LOW);
for(int x = 0; x<250; x++) 
{ 
  digitalWrite(StepY,HIGH);
  delayMicroseconds(1000);
  digitalWrite(StepY,LOW); 
  delayMicroseconds(1000);
}

    }

    if(gelen_bilgi=='5')
    {
      digitalWrite(DirZ,HIGH);
      
for(int x = 0; x<250; x++) 
{ 
  digitalWrite(StepZ,HIGH);
  delayMicroseconds(1000);
  digitalWrite(StepZ,LOW); 
  delayMicroseconds(1000);
}

    }

    if(gelen_bilgi=='6')
    {
      digitalWrite(DirZ,LOW);
for(int x = 0; x<250; x++) 
{ 
  digitalWrite(StepZ,HIGH);
  delayMicroseconds(1000);
  digitalWrite(StepZ,LOW); 
  delayMicroseconds(1000);
}

    }
    
  if(gelen_bilgi == '7')
  {
    myservo.write(140);
    Serial.print(tekrarKontrol);
  }

  if(gelen_bilgi == '8')
  {
    myservo.write(70);
    
  }

  
  }

  
        
}
