#include "user.h"
#include <iostream>
//#include <nlohmann/json.hpp>

//using json = nlohmann::json;

// Default constructor
User<string>::User() {
    // Initialize member variables with default values if needed
}

// Parameterized constructor
User<string>::User(string mail, string user, string pass, vector<string> langs) {
      email = mail;
      username = user;
      password = pass;
      languages = langs;
    // Initialize other member variables if needed
}

// Getters and setters
string User<string>::Email() {
    return email;
}

void User<string>::setEmail(const string& other) {
    email = other;
}

string User<string>::Username() {
    return username;
}

void User<string>::setUsername(const string& other) {
    username = other;
}

string User<string>::Password() {
    return password;
}

void User<string>::setPassword(const string& other) {
    password = other;
}

int User<string>::ReportCount() {
    return reportCount;
}

void User<string>::setReportCount(int other) {
    reportCount = other;
}

bool User<string>::Refresh() {
    refresh = true;
}

void User<string>:: setRefresh(bool other) {
    refresh = other;
}

unsigned long User<string>::TimeListened() {
    return timeListened;
}

void User<string>::setTimeListened(unsigned long other) {
    timeListened = other;
}

vector<string> User<string>::Languages() const {
    return languages;
}

void User<string>::setLanguages(const vector<string>& other) {
    languages = other;
}

/*json User::toJson() const {
    json jsonData;

    jsonData["email"] = email;
    jsonData["username"] = username;
    jsonData["password"] = password;
    jsonData["languages"] = languages;

    return jsonData;
}*/