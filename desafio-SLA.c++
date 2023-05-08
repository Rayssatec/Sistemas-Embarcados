
int btn = 2;
void setup()
{
  pinMode(led, OUTPUT);
  pinMode(btn, INPUT);
} 
void loop() 
{
  int johnTravolta = digitalRead(btn);
  if(johnTravolta == HIGH) {
    digitalWrite(led,LOW);
  }
   else{
     digitalWrite(led,HIGH);

   }
}