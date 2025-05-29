#ifndef TIME_H
#define TIME_H

class Time {
public:
    Time();
    // setters
    void setDay(int x);
    void setStartHour(int arr, int x);
    void setStartMinute(int arr, int x);
    void setEndHour(int arr, int x);
    void setEndMinute(int arr, int x);
    void setDuration(int arr, int startHour, int startMinute, int endHour, int endMinute);
    // getters
    int getDay() const;
    int getStartHour(int arr) const;
    int getStartMinute(int arr) const;
    int getEndHour(int arr) const;
    int getEndMinute(int arr) const;
    int getDuration(int arr) const;
private:
    int day, startHour[31], startMinute[31], endHour[31], endMinute[31], duration[31];
    };

#endif
