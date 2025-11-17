#include <iostream>
#include <vector>
#include <cstring>
#include "VideoGame.h"
#include "Music.h"
#include "Movie.h"

void add(std::vector<DigitalMedia*>& v) {
    char type[20]; std::cout << "Type: "; std::cin >> type;
    char t[100], a[100], b[100]; int y, d;

    std::cout << "Title: "; std::cin.ignore(); std::cin.getline(t, 100);
    std::cout << "Year: "; std::cin >> y;

    if (!strcmp(type, "VIDEOGAME")) {
        VideoGame* x = new VideoGame();
        x->setTitle(t); x->setYear(y);
        std::cout << "Publisher: "; std::cin.ignore(); std::cin.getline(a, 100);
        std::cout << "Rating: "; std::cin.getline(b, 20);
        x->setPublisher(a); x->setRating(b);
        v.push_back(x);
    }
    else if (!strcmp(type, "MUSIC")) {
        Music* x = new Music();
        x->setTitle(t); x->setYear(y);
        std::cout << "Artist: "; std::cin.ignore(); std::cin.getline(a, 100);
        std::cout << "Duration: "; std::cin >> d;
        std::cout << "Publisher: "; std::cin.ignore(); std::cin.getline(b, 100);
        x->setArtist(a); x->setDuration(d); x->setPublisher(b);
        v.push_back(x);
    }
    else if (!strcmp(type, "MOVIE")) {
        Movie* x = new Movie();
        x->setTitle(t); x->setYear(y);
        std::cout << "Director: "; std::cin.ignore(); std::cin.getline(a, 100);
        std::cout << "Duration: "; std::cin >> d;
        std::cout << "Rating: "; std::cin.ignore(); std::cin.getline(b, 20);
        x->setDirector(a); x->setDuration(d); x->setRating(b);
        v.push_back(x);
    }
}
