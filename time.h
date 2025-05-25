#ifndef TIME_H
#define TIME_H

class Time {
public:
    int getHours();
    int getMinutes();
    void setHours(int);
    void setMinutes(int);
private:
    int hours, minutes;
};

#endif
