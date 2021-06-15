// Free to use however you want

// We make the output pin a variable so that we can easily change its value
const int OutputPin = A0;

// Put your setup code here, to run once
void setup()
{
  // Init the serial port at 9600 baud rate
  Serial.begin(9600);
 
  // Make pin OutputPin an output pin
  // Otherwise, it would be an analog input by default
  pinMode(OutputPin, OUTPUT);
}

// Put your main code here, to run repeatedly
void loop()
{
  // Write a one to the output pin
  // The output pin will turn on, and output 5V
  digitalWrite(OutputPin, 1);

  // Let the user know that we are turning on the output pin
  Serial.println("Writing 1");
 
  // Delay for 250 ms (one quarter second)
  delay(250);

  // Write a zero to the output pin
  // The output pin will turn off, and output 0V
  digitalWrite(OutputPin, 0);

  Serial.println("Writing 0");
 
  // Delay for 1000 ms (1 second)
  delay(1000);
}
