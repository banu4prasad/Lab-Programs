//here LED means beep sound , basically we are going to press the button and make the beep sound 

const int ledPin = 13;// We will use the internal LED
const int buttonPin = 7;// the pin our push button is on

void setup()
{
  pinMode(ledPin,OUTPUT); // Set the LED Pin as an output
  pinMode(buttonPin,INPUT_PULLUP); // Set the Tilt Switch as an input
}

void loop()
{
  int digitalVal = digitalRead(buttonPin); // Take a reading

  if(HIGH == digitalVal)
  {
    digitalWrite(ledPin,LOW); //Turn the LED off
  }
  else
  {
    digitalWrite(ledPin,HIGH);//Turn the LED on
  }
}