void disp_7447(int D, int C, int B, int A)
{
  digitalWrite(13, A); //LSB
  digitalWrite(12, B); 
  digitalWrite(14, C); 
  digitalWrite(27, D); //MSB

}
// the setup function runs once when you press reset or power the board
void setup() {
    pinMode(13, OUTPUT);  
    pinMode(12, OUTPUT);
    pinMode(14, OUTPUT);
    pinMode(27, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
disp_7447(0,1,0,1);  
}
