//Ofek Haim
// 21/10/2018 - SU

const int LED_PIN = 8;
const int DETECTOR = 7;


void setup() {
  pinMode (LED_PIN, OUTPUT);
  pinMode (DETECTOR, INPUT);
}

void loop() {
  boolean laser = digitalRead(DETECTOR);
  if(laser)
  {
    open_led();
    delay(2000);
    close_led();
  }
}
void open_led()
{
  digitalWrite(8, HIGH);
}
void close_led()
{
  digitalWrite(8, LOW);
}