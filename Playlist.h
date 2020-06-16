#ifndef PLAYLIST_H
#define PLAYLIST_H
#include "Song.h"
#include <iostream>
#include <iomanip>
#include <string>
#include <cstring>
using namespace std;
class Playlist
{
    public:
        Playlist();
       void  setName( string n);
        void addSong(const Song& s);
        bool removeSong(const char*);
        void displayList();
        //void displaySearch(int);
        int searchSong(const char* n);
        void sortSongs(char by) const;

        ~Playlist();

    protected:

    private:
    void search(const char*);
    void ExpandSize();
    void ShrinkSize();
    string getName() const;
    int getSize() const;
    int setDuration();
    void spotManager();

    bool lastSpot= false;
    int  spotcounter=5;
    bool needToShrink= false;
    int songTracker=0;
    bool foundSong= false;
    int currentSize;
    Song* arraySong;
    string name;
    int totalDuration=0;
    int arraySearch[];
};

#endif // PLAYLIST_H
