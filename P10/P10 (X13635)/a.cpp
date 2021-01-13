#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Track 
{
    string artist, title, genre;
    int year;
};

bool comp (const Track &a, const Track &b) 
{
    // Filtrado por artista
    if (a.artist < b.artist) return true;
    if (a.artist > b.artist) return false;

    // Si los artistas son iguales, ordenado por año
    if (a.year < b.year) return true;
    if (a.year > b.year) return false;

    // Si son del mismo año, por titulo
    if (a.title < b.title) return true;
    if (a.title > b.title) return false;

    // Si son iguales, no ordenar.
    return true;
}

vector<Track> read_tracks(int n) 
{
    vector<Track> songs(n);
    for (int i = 0; i < n; ++i) 
    {
        cin >> songs[i].artist;
        cin >> songs[i].title;
        cin >> songs[i].genre;
        cin >> songs[i].year;
    }        
    return songs;
}
void print_track(const Track &t) 
{
    cout << t.artist;
    cout << " (" << t.year;
    cout << ") " << t.title << " (" << t.genre << ")" << endl;
}

int main() 
{
    int n; cin >> n;
    vector<Track> songs = read_tracks(n);

    sort(songs.begin(), songs.end(), &comp);

    string genre;
    while (cin >> genre)
    {
        for (int i = 0; i < n; ++i)
        {
            if (songs[i].genre == genre) print_track (songs[i]);
        }
    }
}