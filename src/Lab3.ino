

SYSTEM_MODE(MANUAL);
SYSTEM_THREAD(ENABLED);

int blue = 255;
int green = 255;
int red = 255;

using namespace std;

void setup() {
  pinMode(D7, OUTPUT);
  pinMode(D6, OUTPUT);
  pinMode(D3, OUTPUT);
  
}


void loop() {
  blue = rand()%255;
  green = rand()%255;
  red = rand()%255;
  delay(100);



  analogWrite(D7,red); 
  analogWrite(D6,green); 
  analogWrite(D3,blue); 


}