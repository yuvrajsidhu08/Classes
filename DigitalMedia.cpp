#include "DigitalMedia.h"
#include <cstring>

// Default constructor
DigitalMedia::DigitalMedia() {
    title[0] = '\0';
    year = 0;
}

// Virtual destructor
DigitalMedia::~DigitalMedia() {
    // nothing to clean up
}

// Sets the title
void DigitalMedia::setTitle(const char* t) {
    if (t) {
        strncpy(title, t, 99);
        title[99] = '\0';
    } else {
        title[0] = '\0';
    }
}

// Sets the year
void DigitalMedia::setYear(int y) {
    year = y;
}

// Returns the title
char* DigitalMedia::getTitle() {
    return title;
}

// Returns the year
int DigitalMedia::getYear() {
    return year;
}
