#ifndef VIDEOGAME_H
#define VIDEOGAME_H
#include "DigitalMedia.h"

class VideoGame : public DigitalMedia {
public:
    VideoGame() { publisher[0] = rating[0] = '\0'; }
    ~VideoGame() {}

    void setPublisher(const char* p) { strcpy(publisher, p); }
    void setRating(const char* r) { strcpy(rating, r); }

    void print() {
        std::cout << "VIDEO GAME\nTitle: " << title << "\nYear: " << year
                  << "\nPublisher: " << publisher << "\nRating: " << rating << "\n";
    }

private:
    char publisher[100], rating[20];
};
#endif
