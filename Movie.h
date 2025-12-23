#ifndef MOVIE_H
#define MOVIE_H

#include "DigitalMedia.h"

// Movie class derived from DigitalMedia
class Movie : public DigitalMedia {
public:
    // Default constructor: clears strings and sets duration to 0
    Movie();

    // Default destructor
    ~Movie();

    // Sets the director name
    void setDirector(const char* d);

    // Sets the movie rating
    void setRating(const char* r);

    // Sets the movie duration
    void setDuration(int d);

    // Prints all movie information
    void print();

private:
    char director[100], rating[20];
    int duration;
};

#endif
