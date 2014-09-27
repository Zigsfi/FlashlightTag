/* Source code for flashlight tag */

int red, blue, green;
int lights[5] = {5, 6, A2, A4, A3};
int threshold = 200;


void setup()
{
    pinMode(A6, INPUT);
    pinMode(A5, INPUT);
    pinMode(3, OUTPUT);
    pinMode(5, OUTPUT);
    for (int x = 0; x < 5; x++) 
        pinMode(lights[x], OUTPUT);
}

void loop()
{
    delay(10);
    if (red > threshold) 
      digitalWrite(lights[x], HIGH);
    else
      digitalWrite(lights[x], LOW);
}
