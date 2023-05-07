#ifndef USER_H
#define USER_H 

#include <string>
#include <vector>
#include <unordered_set>
#include <stack>
#include <iostream>
#include <back_end/json.hpp>

using json = nlohmann::json;
using namespace std;



template <typename T>
class User{

    public:
    User();
    User(string mail, string user, string pass, vector<string> langs);

//getters + setters
    string Email();
    void setEmail(const string& other);

    string Username();
    void setUsername(const string& other);

    string Password();
    void setPassword(const string& other);

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

    vector<string> Languages() const;
    void setLanguages (const vector<string>& other);

    //points counter int, limit is 20,000
    unsigned int Points();
    void setPoints(unsigned int other);

    //vector transcript, each element is a word of the transcript
    vector<string> transcript;

    json toJson() const;
    
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


//username invariant method, 7char limit
//community invariants 3 languages
    //make element = lang

    //community