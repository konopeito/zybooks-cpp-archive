// 7.25.1: LAB: Artwork label (classes/constructors)
// Main.cpp
#include "Artist.h"
#include "Artwork.h"
#include <iostream>
#include <string>
using namespace std;

int main() {
   string userTitle, userArtistName;
   int yearCreated, userBirthYear, userDeathYear;

   getline(cin, userArtistName);
   getline(cin, userTitle);
   cin >> userBirthYear;
   cin >> userDeathYear;
   cin >> yearCreated;

   Artist userArtist =  Artist(userArtistName, userBirthYear, userDeathYear);

   Artwork newArtwork = Artwork(userTitle, yearCreated, userArtist);

   newArtwork.PrintInfo();
}
// Artist.h
#include <string>
using namespace std;

class Artist{
   public:
      Artist();

      Artist(string artistName, int birthYear, int deathYear);

      string GetName() const;

      int GetBirthYear() const;

      int GetDeathYear() const;

      void PrintInfo() const;
   
   private:
      string artistName;
    int birthYear;
    int deathYear;
};

#endif
// Artwork.h
#define ARTWORKH

#include "Artist.h"

class Artwork {
public:
    Artwork();
    Artwork(string t, int y, Artist a);
    string GetTitle();
    int GetYearCreated();
    void PrintInfo();
private:
    string title;
    int yearCreated;
    Artist artist;
};

#endif
// Artist.cpp
#include <iostream>
#include <string>

using namespace std;

Artist::Artist() {
    artistName = "unknown";
    birthYear = -1;
    deathYear = -1;
}

Artist::Artist(string n, int b, int d) {
    artistName = n;
    birthYear = b;
    deathYear = d;
}

string Artist::GetName() const {
    return artistName;
}

int Artist::GetBirthYear() const {
    return birthYear;
}

int Artist::GetDeathYear() const {
    return deathYear;
}

void Artist::PrintInfo() const {
    if (birthYear >= 0 && deathYear >= 0) {
        cout << "Artist: " << artistName << " (" << birthYear << " to " << deathYear << ")" << endl;
    } else if (birthYear >= 0) {
        cout << "Artist: " << artistName << " (" << birthYear << " to present)" << endl;
    } else {
        cout << "Artist: " << artistName << " (unknown)" << endl;
    }
}
// Artwork.cpp

#include "Artwork.h"
#include <iostream>
using namespace std;

Artwork::Artwork() {
    title = "unknown";
    yearCreated = -1;
}

Artwork::Artwork(string t, int y, Artist a) {
    title = t;
    yearCreated = y;
    artist = a;
}

string Artwork::GetTitle() {
    return title;
}

int Artwork::GetYearCreated() {
    return yearCreated;
}

void Artwork::PrintInfo() {
    artist.PrintInfo();
    cout << "Title: " << title << ", " << yearCreated << endl;
}
