#ifndef VIDEOGAME_H
#define VIDEOGAME_H

#include "DigitalMedia.h"

// VideoGame class derived from DigitalMedia
class VideoGame : public DigitalMedia {
public:
    // Default constructor: clears publisher and rating
    VideoGame();

    // Default destructor
    ~VideoGame();

    // Sets the publisher
    void setPublisher(const char* p);

    // Sets the rating
    void setRating(const char* r);

    // Prints all video game information
    void print();

private:
    char publisher[100], rating[20];
};

#endif
