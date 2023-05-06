#include "User.h"
#include <iostream>

// Getters and setters

string User<string>::Email() {
    return email;
}

void User<string>::setEmail(string other) {
    email = other;
}

string User<string>::Username() {
    return username;
}

void User<string>::setUsername(string other) {
    username = other;
}

string User<string>::Password() {
    return password;
}

void User<string>::setPassword(string other) {
    password = other;
}

int User<string>::ReportCount() {
    return reportCount;
}

void User<string>::setReportCount(int other) {
    reportCount = other;
}

bool User<string>::Refresh() {
    return refresh;
}

void User<string>::setRefresh(bool other) {
    refresh = other;
}

unsigned long User<string>::TimeListened() {
    return timeListened;
}

void User<string>::setTimeListened(unsigned long other) {
    timeListened = other;
}

unsigned int User<string>::BroadcastsPosted() {
    return broadcastsPosted;
}

void User<string>::setBroadcastsPosted(unsigned int other) {
    broadcastsPosted = other;
}

unsigned int User<string>::BroadcastsListened() {
    return broadcastsListened;
}

void User<string>::setBroadcastsListened(unsigned int other) {
    broadcastsListened = other;
}

vector<string> User<string>::Languages() {
    return languages;
}

void User<string>::setLanguages(vector<string> other) {
    languages = other;
}

unsigned int User<string>::Points() {
    return points;
}

void User<string>::setPoints(unsigned int other) {
    points = other;
}

void User<string>::printTranscript() {
    for (const string& word : transcript) {
        cout << word << " ";
    }
    cout << endl;
}
