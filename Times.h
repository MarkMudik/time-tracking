#ifndef TIMES_H
#define TIMES_H

class Times {
public:
    Times();
    // setters
    void setDay(int x);
    void setStartHour(int x);
    void setStartMinute(int x);
    void setEndHour(int x);
    void setEndMinute(int x);
    void setDuration(int startHour, int startMinute, int endHour, int endMinute);
    // getters
    int getMonth() const;
    int getDay() const;
    int getStartHour() const;
    int getStartMinute() const;
    int getEndHour() const;
    int getEndMinute() const;
    int getDuration() const;
private:
    int month, day, startHour, startMinute, endHour, endMinute, duration;
};

#endif
