// Free to use however you want

// Put your setup code here, to run once
void setup()
{
  // Init the serial port at 9600 baud rate
  Serial.begin(9600);
}

// put your main code here, to run repeatedly
void loop()
{
  // Read from the A0 analog pin
  int value = analogRead(A0);
  
  // Print a label for the value over the serial port
  Serial.print("Value: ");
  
  // Print the value
  Serial.println(value);
}
