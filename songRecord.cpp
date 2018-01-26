/***********
Created by Juhi Park
Description: A program to manipulate song play list
***********/
#include <iostream>
#include <string>

using namespace std;

const int NUM_SONG = 3; 

struct SongRecord{
    string song_name;
    string artist;
    string album_name;
    unsigned int length_minutes;
    unsigned int length_secs;
    unsigned int year_released;
    unsigned int month_released;
};

void initSong(SongRecord songs[]);
void addSong(SongRecord songs[],int i);
void display(SongRecord song);
void searchName(const SongRecord songs[],int i);
void searchArtist(const SongRecord songs[],int i);
void searchMin(const SongRecord songs[],int i);


int main(){
    int num_song = 0;
    char choice = 'q';
    SongRecord song_record[NUM_SONG];
    initSong(song_record);
    do{
        cout << "\n+++++++++++< Song player >+++++++++++\n\n";
        cout << "Menu: \n";
        cout << "+: Add a song\ns: Search for a song by name\na: Search for a song by artist\n"
            << "m: Display songs under x number of minutes long\nd: Display song list\n";
        cout << "q: Quit\n";
        cout << "Enter: ";
        cin >> choice;
        cin.ignore();
        cout << "+++++++++++++++++++++++++++++++++++++++\n\n";

        switch(tolower(choice)){
            case '+':
                addSong(song_record, num_song);
                num_song ++;
                break;
            case 's':
                searchName(song_record, num_song);
                break;
            case 'a':
                searchArtist(song_record, num_song);
                break;
            case 'm':
                searchMin(song_record, num_song);
                break;
            case 'd':
                for(int i=0; i<num_song; i++){
                    display(song_record[i]);
                }
                break;
            default:
                cout << "Ending this program. Thanks you using.\n";
                choice = 'q';
                break;
       }

    }while(tolower(choice) != 'q');    
    
    
    return 0;
}


void initSong(SongRecord songs[]){
    for(int i=0; i < NUM_SONG; i++){
        songs[i].song_name = " ";
        songs[i].artist = " ";
        songs[i].album_name = " ";
        songs[i].length_minutes =  0;
        songs[i].length_secs = 0;
        songs[i].year_released = 0;
        songs[i].month_released = 0;
    }
}
void addSong(SongRecord songs[], int i){
    cout << "Adding a new song to play list: \n";
    cout << "Enter name of the song: ";
    getline(cin, songs[i].song_name);
    cout << "Enter artist: ";
    getline(cin, songs[i].artist);
    cout << "Enter album name: ";
    getline(cin, songs[i].album_name);
    cout << "How many minutes is the song?: ";
    cin >> songs[i].length_minutes;
    cout << "How many seconds is the song?: ";
    cin >> songs[i].length_secs;
    cout << "Enter year it released: ";
    cin >> songs[i].year_released;
    cout << "Enter month it release: ";
    cin >> songs[i].month_released;
    cin.ignore();
    cout << "\n++Song added to playlist: ("<< i+1 << "/"<< NUM_SONG <<").++\n";
}
void display(SongRecord song){
    //cout << "**("<<i<<"/"<<NUM_SONG<<")**\n";
    cout << "The song's name: ";
    cout << song.song_name << endl;
    cout << "Artist: ";
    cout << song.artist << endl;
    cout << "Album's name: ";
    cout << song.album_name << endl;
    cout << "Length of song: " << song.length_minutes << ":" << song.length_secs << endl;
    cout << "Release date: " << song.month_released <<"/"<< song.year_released;
    cout << endl << endl;
}
void searchName(const SongRecord songs[],int i){
    string name;
    bool found = false;
    cout << "Searching song's name: ";
    getline(cin, name);
    cout << endl;
    for (int a=0; a<=i; a++){
        if(name == songs[a].song_name){
            found = true;
            display(songs[a]);
        }
    }
    if(!found){
        cout << "Songs named, "<< name << " couldn't be found.\n";
    }
}
void searchArtist(const SongRecord songs[],int i){
    string artist;
    bool found = false;
    cout << "Searching song's artist: ";
    getline(cin, artist);
    cout << endl;
    for (int a=0; a<=i; a++){
        if(artist == songs[a].artist){
            found = true;
            display(songs[a]);
        }
    }
    if(!found){
        cout << "Songs by artist, "<< artist << " couldn't be found.\n";
    }
}
void searchMin(const SongRecord songs[],int i){
    unsigned int min;
    bool found = false;
    cout << "Search songs under this minutes: ";
    cin >> min;
    cin.ignore();
    cout << endl;
    for(int a=0; a<=i; a++){
        if((min*60 >= (songs[a].length_minutes*60 + songs[a].length_secs)) 
                && songs[a].length_minutes + songs[a].length_secs){
            found = true;
            display(songs[a]);
        }
    }
    if(!found){
        cout << "Songs under " << min << " minutes couldn't be found. \n ";
    }
}
