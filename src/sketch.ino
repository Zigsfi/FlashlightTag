/* Source code for flashlight tag */


#define RED 9
#define BLUE 10
#define GREEN 11

int red, blue, green;
int stuff[5] = {5, 6, A2, A4, A3};
int things[5] = {20, 70, 120, 200, 230};


void setup()
{
    pinMode(A6, INPUT);
    pinMode(RED, OUTPUT);
    pinMode(A5, INPUT);
    pinMode(3, OUTPUT);
    pinMode(5, OUTPUT);
    for (int x = 0; x < 5; x++) 
        pinMode(stuff[x], OUTPUT);
    red = 0;
    green = 0;
    blue = 0;
}

void loop()
{
    delay(10);
    red = analogRead(A5);
    analogWrite(RED, red);
    //analogWrite(3, red);
    for (int x = 0; x < 5; x++) {
        if (red > things[x])
            digitalWrite(stuff[x], HIGH);
        else
            digitalWrite(stuff[x], LOW);
    }
}
