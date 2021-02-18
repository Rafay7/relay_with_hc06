int relay = 7;
int val;

void setup() {
  Serial.begin(9600);
pinMode(relay, OUTPUT);
}

void loop() {
  int a=0;
  if(Serial.available())
  {
    val= Serial.read();
    Serial.println(int(val));
    if(int(val)==49)
    {
      digitalWrite(relay, HIGH);
    }
    else if (int(val)==50)
    {
      digitalWrite(relay, LOW);
    }
  }

}
