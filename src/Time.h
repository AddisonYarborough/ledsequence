#ifndef TIME_H
#define TIME_H
class Time
{
public:
    int deltaMillis = 0;
    void update();

private:
    int lastMillis = 0;
    int currentMillis = 0;
};

#endif // TIME_H
