#include "user.h"


// Default constructor
template <class T>
User<T>::User() {
    // Initialize member variables with default values if needed
}

// Parameterized constructor
template <class T>
User<T>::User(string mail, string user, string pass, vector<string> langs) {
      email = mail;
      username = user;
      password = pass;
      languages = langs;
    // Initialize other member variables if needed
}

// Getters and setters
template <class T>
string User<T>::Email() {
    return email;
}

template <class T>
void User<T>::setEmail(const string& other) {
    email = other;
}

template <class T>
string User<T>::Username() {
    return username;
}

template <class T>
void User<T>::setUsername(const string& other) {
    username = other;
}

template <class T>
string User<T>::Password() {
    return password;
}

template <class T>
void User<T>::setPassword(const string& other) {
    password = other;
}

template <class T>
int User<T>::ReportCount() {
    return reportCount;
}

template <class T>
void User<T>::setReportCount(int other) {
    reportCount = other;
}

template <class T>
bool User<T>::Refresh() {
    refresh = true;
}

template <class T>
void User<T>:: setRefresh(bool other) {
    refresh = other;
}

template <class T>
unsigned long User<T>::TimeListened() {
    return timeListened;
}

template <class T>
void User<T>::setTimeListened(unsigned long other) {
    timeListened = other;
}

template <class T>
vector<string> User<T>::Languages() const {
    return languages;
}

template <class T>
void User<T>::setLanguages(const vector<string>& other) {
    languages = other;
}

template <class T>
json User<T>::toJson() const 
{
    json jsonData;

    jsonData["email"] = email;
    jsonData["username"] = username;
    jsonData["password"] = password;
    jsonData["languages"] = languages;

    return jsonData;
};