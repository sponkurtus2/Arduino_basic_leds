/*  Basic Functions for this Hello World :)
* pinMode()  
* |
*/



// This is the code which only runs 1 time
void setup() {
  pinMode(5, OUTPUT); // Initialize pin 13 as an output
  Serial.begin(9600);
}

// And this one runs repeatedly after running the setup()
void loop() {
  digitalWrite(5,HIGH); // Turns the pin 13 ON
  Serial.println("Hello world :D");
  delay(100); // Waits 1 second
  digitalWrite(5,LOW); // Turns the pin 13 OFF
  delay(100); // Waits 1 second again
}