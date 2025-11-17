#ifndef VIDEOGAME_H
#define VIDEOGAME_H

#include "DigitalMedia.h"

// VideoGame class derived from DigitalMedia
class VideoGame : public DigitalMedia {
public:
    // Default constructor: clears publisher and rating
    VideoGame() { 
        publisher[0] = rating[0] = '\0'; 
    }

    // Default destructor
    ~VideoGame() {}

    // Sets the publisher
    void setPublisher(const char* p) { 
        strcpy(publisher, p); 
    }

    // Sets the rating
    void setRating(const char* r) { 
        strcpy(rating, r); 
    }

    // Prints all video game information
    void print() {
        std::cout << "VIDEO GAME\nTitle: " << title
                  << "\nYear: " << year
                  << "\nPublisher: " << publisher
                  << "\nRating: " << rating << "\n";
    }

private:
    char publisher[100], rating[20];
};

#endif
