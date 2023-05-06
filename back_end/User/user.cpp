#include "User.h"
#include <iostream>
//#include <nlohmann/json.hpp>

//using json = nlohmann::json;

// Default constructor
User<string>::User() {
    // Initialize member variables with default values if needed
}

// Parameterized constructor
User<string>::User(string mail, string user, string pass, vector<string> langs)
    : email(mail),
      username(user),
      password(pass),
      languages(langs) {
    // Initialize other member variables if needed
}

// Getters and setters
string User<string>::getEmail() const {
    return email;
}

void User<string>::setEmail(const string& other) {
    email = other;
}

string User::getUsername() const {
    return username;
}

void User::setUsername(const string& other) {
    username = other;
}

string User::getPassword() const {
    return password;
}

void User::setPassword(const string& other) {
    password = other;
}

vector<string> User::getLanguages() const {
    return languages;
}

void User::setLanguages(const vector<string>& other) {
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
