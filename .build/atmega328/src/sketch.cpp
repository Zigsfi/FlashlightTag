#include <Arduino.h>

void setup();
void loop();
#line 1 "src/sketch.ino"
/* Source code for flashlight tag */


int red, blue, green;
int names[5] = {5, 6, A2, A4, A3};
int threshold = 200;
int score = 5;
int timer = 0;

void setup()
{
    pinMode(A6, INPUT);
    pinMode(A5, INPUT);
    pinMode(3, OUTPUT);
    pinMode(5, OUTPUT);
    for (int i = 0; i < 5; i++) 
        pinMode(names[i], OUTPUT);
}

void loop()
{
    delay(10);
    timer--;
    red = analogRead(A5);
    //
    if (timer < 0) {
        analogWrite(3, 0);
        if (red > threshold) {
            score--;
            timer = 300;
            analogWrite(3, 200);
        }
        //analogWrite(3, red);
        for (int i = 0; i < score; i++) {
            digitalWrite(names[i], HIGH);
        }
        for (int i = score; i < 5; i++) {
            digitalWrite(names[i], LOW);
        }
    }
}

