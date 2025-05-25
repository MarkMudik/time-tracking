#include <time.h>

class Time {
public:
    int getHours();
    int getMinutes();
    void setHours(int);
    void setMinutes(int);
private:
    int hours, minutes;
};

int Time::getHours() {
    return hours;
}
int Time::getMinutes() {
    return minutes;
}


void Time::setHours(int x) {
    hours = x;
}
void Time::setMinutes(int y) {
    minutes = y;
}
