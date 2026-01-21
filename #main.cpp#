#include <iostream>
#include <vector>
#include <cstring>
#include "VideoGame.h"
#include "Music.h"
#include "Movie.h"

// Adds a new media item to the vector
void add(std::vector<DigitalMedia*>& v) {
    char type[20]; std::cout << "Type: "; std::cin >> type;
    char t[100], a[100], b[100]; int y, d;

    std::cout << "Title: "; std::cin.ignore(); std::cin.getline(t, 100);
    std::cout << "Year: "; std::cin >> y;

    // Add a video game
    if (!strcmp(type, "VIDEOGAME")) {
        VideoGame* x = new VideoGame();
        x->setTitle(t); x->setYear(y);
        std::cout << "Publisher: "; std::cin.ignore(); std::cin.getline(a, 100);
        std::cout << "Rating: "; std::cin.getline(b, 20);
        x->setPublisher(a); x->setRating(b);
        v.push_back(x);
    }
    // Add a music item
    else if (!strcmp(type, "MUSIC")) {
        Music* x = new Music();
        x->setTitle(t); x->setYear(y);
        std::cout << "Artist: "; std::cin.ignore(); std::cin.getline(a, 100);
        std::cout << "Duration: "; std::cin >> d;
        std::cout << "Publisher: "; std::cin.ignore(); std::cin.getline(b, 100);
        x->setArtist(a); x->setDuration(d); x->setPublisher(b);
        v.push_back(x);
    }
    // Add a movie
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

// Searches for media by title or year
void search(std::vector<DigitalMedia*>& v) {
    char mode[10]; std::cout << "Search TITLE/YEAR: "; std::cin >> mode;

    // Search by title
    if (!strcmp(mode, "TITLE")) {
        char t[100]; std::cout << "Title: "; std::cin.ignore(); std::cin.getline(t, 100);
        for (auto m : v) if (!strcmp(m->getTitle(), t)) m->print();
    } 
    // Search by year
    else if (!strcmp(mode, "YEAR")) {
        int y; std::cout << "Year: "; std::cin >> y;
        for (auto m : v) if (m->getYear() == y) m->print();
    }
}

// Deletes media items by title or year
void del(std::vector<DigitalMedia*>& v) {
    char mode[10]; std::cout << "Delete TITLE/YEAR: "; std::cin >> mode;
    std::vector<int> idx;

    // Find matches by title
    if (!strcmp(mode, "TITLE")) {
        char t[100]; std::cout << "Title: "; std::cin.ignore(); std::cin.getline(t, 100);
        for (int i = 0; i < v.size(); i++) if (!strcmp(v[i]->getTitle(), t)) idx.push_back(i);
    } 
    // Find matches by year
    else if (!strcmp(mode, "YEAR")) {
        int y; std::cout << "Year: "; std::cin >> y;
        for (int i = 0; i < v.size(); i++) if (v[i]->getYear() == y) idx.push_back(i);
    }

    // Confirm deletion for each match
    for (int i = idx.size() - 1; i >= 0; i--) {
        std::cout << "Delete this?\n"; 
        v[idx[i]]->print();
        char c[10]; std::cin >> c;

        if (!strcmp(c, "YES")) {
            delete v[idx[i]];
            v.erase(v.begin() + idx[i]);
        }
    }
}

// Main program loop
int main() {
    std::vector<DigitalMedia*> v;
    char cmd[20];

    // Command loop
    while (true) {
        std::cout << "\nCommand (ADD SEARCH DELETE QUIT): ";
        std::cin >> cmd;

        if (!strcmp(cmd, "ADD")) add(v);
        else if (!strcmp(cmd, "SEARCH")) search(v);
        else if (!strcmp(cmd, "DELETE")) del(v);
        else if (!strcmp(cmd, "QUIT")) break;
    }

    // Clean up memory
    for (auto m : v) delete m;

    return 0;
}
