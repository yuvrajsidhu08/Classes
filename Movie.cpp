#include "Movie.h"
#include <cstring>
#include <iostream>

// Default constructor
Movie::Movie() {
    director[0] = '\0';
    rating[0] = '\0';
    duration = 0;
}

// Default destructor
Movie::~Movie() {
    // nothing to clean up
}

// Sets the director name
void Movie::setDirector(const char* d) {
    if (d) {
        strncpy(director, d, 99);
        director[99] = '\0';
    } else {
        director[0] = '\0';
    }
}

// Sets the rating
void Movie::setRating(const char* r) {
    if (r) {
        strncpy(rating, r, 19);
        rating[19] = '\0';
    } else {
        rating[0] = '\0';
    }
}

// Sets the duration
void Movie::setDuration(int d) {
    duration = d;
}

// Prints all movie information
void Movie::print() {
    std::cout << "Movie Title: " << title << "\n";
    std::cout << "Year: " << year << "\n";
    std::cout << "Director: " << director << "\n";
    std::cout << "Rating: " << rating << "\n";
    std::cout << "Duration: " << duration << " minutes\n";
}
