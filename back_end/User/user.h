#ifndef USER_H
#define USER_H 

#include <string>
#include <vector>
#include <unordered_set>
#include <stack>

using namespace std;



template <class T>
class User{

    public:

//getters + setters
    string Email();
    void setEmail(string other);

    string Username();
    void setUsername(string other);

    string Password();
    void setPassword(string other);

    int ReportCount();
    void setReportCount(int other);

    bool Refresh();
    void setRefresh(bool other);

    unsigned long TimeListened();
    void setTimeListened(unsigned long other);

    unsigned int BroadcastsPosted();
    void setBroadcastsPosted(unsigned int other);

    unsigned int BroadcastsListened();
    void setBroadcastsListened(unsigned int other);

    vector<string> Languages();
    void setLanguages (vector<string> other);

    //points counter int, limit is 20,000
    unsigned int Points();
    void setPoints(unsigned int other);

    //vector transcript, each element is a word of the transcript
    vector<string> transcript;
    


//OTHER METHODS

   //prints the private var transcript, a vector of strings
   void printTranscript();

    private:
    string email;
    string username;
    string password;
    int reportCount;
    bool refresh;
    unsigned long timeListened;
    unsigned int broadcastsPosted;
    unsigned int broadcastsListened;
    unsigned int points;
    vector<string> languages;
    unordered_set<T> contentUploaded;
    unordered_set<T> contentSaved;
    stack<T> myStack;
    


    

};
#endif