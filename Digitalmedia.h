#ifndef DIGITALMEDIA_H
#define DIGITALMEDIA_H
#include <iostream>
#include <cstring>

class DigitalMedia {
public:
    DigitalMedia() { title[0] = '\0'; year = 0; }
    virtual ~DigitalMedia() {}

    void setTitle(const char* t) { strcpy(title, t); }
    void setYear(int y) { year = y; }
    char* getTitle() { return title; }
    int getYear() { return year; }

    virtual void print() = 0;

protected:
    char title[100];
    int year;
};
#endif
