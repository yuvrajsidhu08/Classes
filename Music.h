#ifndef MUSIC_H
#define MUSIC_H

#include "DigitalMedia.h"

// Music class derived from DigitalMedia
class Music : public DigitalMedia {
public:
    // Default constructor: clears strings and sets duration to 0
    Music() { 
        artist[0] = publisher[0] = '\0'; 
        duration = 0; 
    }

    // Default destructor
    ~Music() {}

    // Sets the artist name
    void setArtist(const char* a) { 
        strcpy(artist, a); 
    }

    // Sets the publisher name
    void setPublisher(const char* p) { 
        strcpy(publisher, p); 
    }

    // Sets the music duration
    void setDuration(int d) { 
        duration = d; 
    }

    // Prints all music information
    void print() {
        std::cout << "MUSIC\nTitle: " << title
                  << "\nArtist: " << artist
                  << "\nYear: " << year
                  << "\nDuration: " << duration
                  << "\nPublisher: " << publisher << "\n";
    }

private:
    char artist[100], publisher[100]; // Stores artist and publisher
    int duration;                     // Stores duration of the track
};

#endif
