//Declaring all variables as integers
int Z=0,Y=0,X=0,W=1;
int D,C,B,A;

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
}

// the loop function runs over and over again forever
void loop() {
  A=0;
  B=(W&&!X&&!Y&&!Z) || (!W&&X&&!Y&&!Z) || (W&&!X&&Y&&!Z) || (!W&&X&&Y&&!Z);
  C=(W&&X&&!Y&&!Z) || (!W&&!X&&Y&&!Z) || (W&&!X&&Y&&!Z) || (!W&&X&&Y&&!Z);
  D = (W&&X&&Y&&!Z)||(!W&&!X&&!Y&&Z);
  
disp_7447(D,C,B,A);  
}
//&& is the AND operation
// || is the OR operation
// ! is the NOT operation
