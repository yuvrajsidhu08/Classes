#include "VideoGame.h"
#include <cstring>
#include <iostream>

// Default constructor
VideoGame::VideoGame() {
    publisher[0] = '\0';
    rating[0] = '\0';
}

// Default destructor
VideoGame::~VideoGame() {
    // nothing to clean up
}

// Sets the publisher
void VideoGame::setPublisher(const char* p) {
    if (p) {
        strncpy(publisher, p, 99);
        publisher[99] = '\0';
    } else {
        publisher[0] = '\0';
    }
}

// Sets the rating
void VideoGame::setRating(const char* r) {
    if (r) {
        strncpy(rating, r, 19);
        rating[19] = '\0';
    } else {
        rating[0] = '\0';
    }
}

// Prints all video game information
void VideoGame::print() {
    std::cout << "Video Game Title: " << title << "\n";
    std::cout << "Year: " << year << "\n";
    std::cout << "Publisher: " << publisher << "\n";
    std::cout << "Rating: " << rating << "\n";
}
