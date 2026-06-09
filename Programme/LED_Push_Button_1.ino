// set pin numbers:
const int buttonPin = 2;     // the number of the pushbutton pin
const int ledPin =  13;      // the number of the LED pin


void setup() {  
  pinMode(ledPin, OUTPUT); //initialize the LED pin as an output:
  pinMode(buttonPin, INPUT); //initialize the pushbutton pin as an input:
}
void loop() {

// check if the pushbutton is pressed.
    // if it pressed--> the buttonState is HIGH:
  if (digitalRead(buttonPin) == HIGH) 
      {
        digitalWrite(ledPin, HIGH); // turn on LED
        delay(1000);    
      }
  else {
        digitalWrite(ledPin, LOW); // turn off LED
        delay(1000);  
      }
      }
