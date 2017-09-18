const int buttonPin = 2;
const int LED1 = 3;
const int LED2 = 4;
int val;
void setup() 
{
  Serial.begin(9600);
   pinMode(buttonPin, INPUT);
   pinMode(LED1, OUTPUT);
   pinMode(LED2, OUTPUT);
  
}

void loop()
{
 // Serial.println(val);
  val = digitalRead(buttonPin);
  digitalWrite(LED1, val);
  digitalWrite(LED2, val);
}
