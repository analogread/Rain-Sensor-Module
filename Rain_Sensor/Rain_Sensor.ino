#define  sensorPin  A0    
#define  LED 3

void setup() 
{
   Serial.begin(9600);  
   pinMode(LED,OUTPUT);
   pinMode(sensorPin,INPUT);
}
void loop() 
{
  // read the value from the sensor:
  int sensorValue = analogRead(sensorPin);  //0 - 1023
  float Rain  = ( 100 - ( (sensorValue/1023.00) * 100 ) );   
  Serial.print("Moisture Percentage = ");
  Serial.print(Rain);
  Serial.print("%");
  delay(250);        
  if(Rain  >= 50){
    digitalWrite(LED,HIGH);
    Serial.print("  :  เปิดไฟ\n");
    }
  else{
    digitalWrite(LED,LOW);
    Serial.print("  :  ปิดไฟ\n");
    }         
}
