#ifndef MOVIE_H
#define MOVIE_H

#include "DigitalMedia.h"

// Movie class derived from DigitalMedia
class Movie : public DigitalMedia {
public:
    // Default constructor: clears strings and sets duration to 0
    Movie() { 
        director[0] = rating[0] = '\0'; 
        duration = 0; 
    }

    // Default destructor
    ~Movie() {}

    // Sets the director name
    void setDirector(const char* d) { 
        strcpy(director, d); 
    }

    // Sets the movie rating
    void setRating(const char* r) { 
        strcpy(rating, r); 
    }

    // Sets the movie duration
    void setDuration(int d) { 
        duration = d; 
    }

    // Prints all movie information
    void print() {
        std::cout << "MOVIE\nTitle: " << title
                  << "\nDirector: " << director
                  << "\nYear: " << year
                  << "\nDuration: " << duration
                  << "\nRating: " << rating << "\n";
    }

private:
    char director[100], rating[20]; 
    int duration;
};

#endif
