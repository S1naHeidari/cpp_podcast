#ifndef CLIENT_H
#define CLIENT_H

#include <string>
#include "defs.h"
#include "PodArray.h"

using namespace std;

class Client{
    private:
        string name;
        int numSubs;
        PodArray *ptr;
        Subscriber *subscribers[MAX_SUBS];


    public: 
        Network(const string& c_name);
        ~Network();

        bool addPodcast(const string& podcast, const string& host);
        bool removePodcast(const string& podcast);
        bool addEpisode(const string& podcast, const string& title, const string& content);
        bool addSubscriber(const string& name, const string& creditcard);
        bool download(const string& subscriber, const string& podcast, Episode** ep);
        bool stream(const string& subscriber, const string& podcast, int episode, Episode** ep);
        bool hasSubscriber(const string& name);
};
#endif