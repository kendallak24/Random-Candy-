// constants wont change. theyre used here to set up pin numbers:
  const int buttonPin =  2;         // the number of the buzzer pin 
    const int ledPin = 11;           // the number of LED pin
    const int ledPin2 = 10;          // the number of LED pin
    const int ledPin3 = 9;          // the number of LED pin
    const int ledPin4 = 8;         // the number of LED pin

//varibles will change 
  int buttonState = 0;             // variable for reading the pushbutton status

void setup() {
 // initialize random LED as an output:
    pinMode(ledPin, OUTPUT);
    pinMode(ledPin2, OUTPUT);
    pinMode(ledPin3, OUTPUT);
    pinMode(ledPin4, OUTPUT);
 // initialize the pushbutton pin as an input:
    pinMode(buttonPin, INPUT); 
}

void loop() {
  // read the state of the pushbutton value: 
 buttonState =  digitalRead(buttonPin);
 int randomLed = random(8, 12); 
 
  //check if the pushbutton is pressed. If it is, the buttonState is HIGH:
  if (buttonState == HIGH) {
    digitalWrite(randomLed, HIGH);  //turn random LED on HIGH voltage 
    delay(1000);                    //wait for a second 
    
  } else {
    digitalWrite(randomLed, LOW);   //turn the random LED on LOW voltage    
  } 
}
