#ifndef MUSIC_H
#define MUSIC_H

#include "DigitalMedia.h"

// Music class derived from DigitalMedia
class Music : public DigitalMedia {
public:
    // Default constructor: clears strings and sets duration to 0
    Music();

    // Default destructor
    ~Music();

    // Sets the artist name
    void setArtist(const char* a);

    // Sets the publisher name
    void setPublisher(const char* p);

    // Sets the music duration
    void setDuration(int d);

    // Prints all music information
    void print();

private:
    char artist[100], publisher[100]; // Stores artist and publisher
    int duration;                     // Stores duration of the track
};

#endif
