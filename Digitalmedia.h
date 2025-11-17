#ifndef DIGITALMEDIA_H
#define DIGITALMEDIA_H

#include <iostream>
#include <cstring>

// Base class for all digital media types
class DigitalMedia {
public:
    // Default constructor: clears title and sets year to 0
    DigitalMedia() { 
        title[0] = '\0'; 
        year = 0; 
    }

    // Virtual destructor
    virtual ~DigitalMedia() {}

    // Sets the title
    void setTitle(const char* t) { 
        strcpy(title, t); 
    }

    // Sets the year
    void setYear(int y) { 
        year = y; 
    }

    // Returns the title
    char* getTitle() { 
        return title; 
    }

    // Returns the year
    int getYear() { 
        return year; 
    }

    // Prints the media info (implemented by subclasses)
    virtual void print() = 0;

protected:
    char title[100]; 
    int year;        
};

#endif
