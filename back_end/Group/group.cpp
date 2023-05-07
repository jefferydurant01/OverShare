#include "group.h"

using namespace std;

template <class T>
Group<T>::Group() {};

template <class T>
unsigned long Group<T>::getCount() 
{
    return count;
};

template <class T>
unsigned long Group<T>::getTimePlayed() 
{
    return timePlayed;
};


template <class T>
T Group<T>::getMember(T member)
{
    if(memberLog.head == nullptr)
        return;

    Node curr* = memberLog.head;
    while(curr->next != nullptr)
    {
        if(curr.item == member)
        {
            return curr.item;
        }
    }
    return;
}; 

template <class T>
bool Group<T>::addMember(T member)
{
    if()
    Node node = new node(member, head);
    memberLog.head->node;
    return true;
    count++;
};

template <class T>
bool Group<T>::removeMember(T member)
{
    if(memberLog.head == nullptr)
        return false;

    Node curr* = memberLog.head;
    while(curr->next != nullptr)
    {
        if(curr.item == member.item)
        {
            curr->next = cur->next->next;
            return true;
            count--;
        }
    }
    return false;
};

template <class T>
json Group<T>::toJson() const 
{
    json jsonData;

    jsonData["count"] = count;
    jsonData["timePlayed"] = timePlayed;
    jsonData["memberLog"] = memberLog;

    return jsonData;
};

