#ifndef USER_H
#define USER_H 
#include <string>
#include <vector>
using namespace std;

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

    private:
    string email;
    string username;
    string password;
    int reportCount;
    bool refresh;
    unsigned long timeListened;
    unsigned int broadcastsPosted;
    unsigned int broadcastsListened;
    vector<string> languages;

};
#endif