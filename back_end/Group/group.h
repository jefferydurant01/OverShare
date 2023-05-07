#ifndef GROUP_H
#define GROUP_H 

#include <list>
#include <iostream>
#include <fstream>
#include <back_end/json.hpp>

using json = nlohmann::json;
using namespace std;

template <typename T>
class Group
{
    public:
    Group();                        // group constructor

    T getMember(T member);          // returns member
    unsigned long getCount();       // returns count
    unsigned long getTimePlayed();  // returns timePlayed
    bool addMember(T member);       // adds a member to the group
    bool removeMember(T member);    // remove a member from the group
    json toJson() const;            // converts to json

    private:
    list memberLog;
    unsigned long count = 0;
    unsigned long timePlayed = 0;
};  
#endif
