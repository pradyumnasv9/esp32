//Declaring all variables as integers
int Z,Y,X,W;

//Code released under GNU GPL.  Free to use for anything.
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
    pinMode(26, INPUT);  
    pinMode(25, INPUT);
    pinMode(33, INPUT);
    pinMode(32, INPUT);
    
}

// the loop function runs over and over again forever
void loop() {
  
W = digitalRead(26);//LSB  
X = digitalRead(25);  
Y = digitalRead(33);  
Z = digitalRead(32);//MSB  
  
disp_7447(Z,Y,X,W);  
}
