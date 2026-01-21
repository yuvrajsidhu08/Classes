#include "Music.h"
#include <cstring>
#include <iostream>

// Default constructor
Music::Music() {
    artist[0] = '\0';
    publisher[0] = '\0';
    duration = 0;
}

// Default destructor
Music::~Music() {
    // nothing to clean up
}

// Sets the artist name
void Music::setArtist(const char* a) {
    if (a) {
        strncpy(artist, a, 99);
        artist[99] = '\0';
    } else {
        artist[0] = '\0';
    }
}

// Sets the publisher name
void Music::setPublisher(const char* p) {
    if (p) {
        strncpy(publisher, p, 99);
        publisher[99] = '\0';
    } else {
        publisher[0] = '\0';
    }
}

// Sets the duration
void Music::setDuration(int d) {
    duration = d;
}

// Prints all music information
void Music::print() {
    std::cout << "Music Title: " << title << "\n";
    std::cout << "Year: " << year << "\n";
    std::cout << "Artist: " << artist << "\n";
    std::cout << "Publisher: " << publisher << "\n";
    std::cout << "Duration: " << duration << " seconds\n";
}
