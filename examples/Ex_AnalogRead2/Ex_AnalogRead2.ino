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
  int value0 = analogRead(A0);
  
  // Read from the A1 analog pin
  int value1 = analogRead(A1);
  
  // Print a label for the value over the serial port
  Serial.print("Value 0: ");
  
  // Print the A0 value
  Serial.print(value0);

  // Print another label for the value over the serial port
  Serial.print("  Value 1: ");
  
  // Print the A1 value, with a newline character
  Serial.println(value1);
}
