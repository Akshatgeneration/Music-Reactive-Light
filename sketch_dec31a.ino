int sensor = 6;
int led = 8;               

void setup() 
{ 
  pinMode (sensor, INPUT);
  pinMode (led, OUTPUT);
}

void loop()
{
  int value = digitalRead (sensor);           
                                                          
  if (value == 1)                                    
  {
    digitalWrite(led, HIGH);
  }
  
  else
  {
    digitalWrite(led, LOW);
  }
  
}
