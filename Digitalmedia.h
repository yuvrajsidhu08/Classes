#ifndef DIGITALMEDIA_H
#define DIGITALMEDIA_H

// Base class for all digital media types
class DigitalMedia {
public:
    // Default constructor: clears title and sets year to 0
    DigitalMedia();

    // Virtual destructor
    virtual ~DigitalMedia();

    // Sets the title
    void setTitle(const char* t);

    // Sets the year
    void setYear(int y);

    // Returns the title
    char* getTitle();

    // Returns the year
    int getYear();

    // Prints the media info (implemented by subclasses)
    virtual void print() = 0;

protected:
    char title[100];
    int year;
};

#endif
