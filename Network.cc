#include "Network.h"
#include<iostream>
using namespace std;
Network::Network(const string& c_name){
    name = c_name;
    numbSubs = 0;
    ptr = new PodArray();
}

Network::~Network(){
    delete ptr;
}

bool Network::addPodcast(const string& podcast, const string& host){
    Podcast* added = new Podcast(podcast, host);
    if(ptr->addPodcast(added)){
        return true;
    }else{
        return false;
    }
}

bool Network::removePodcast(const string& podcast){
    Podcast **removed;
    for(int i = 0; i<ptr->podcasts->size(); i++){
        if(podcast == ptr->podcasts[i]->title){
            ptr->removePodcast(podcast, removed);
            return true;
        }
    }
    return false;
}

bool Network::addEpisode(const string& podcast, string& title, string& content){
    for(int i = 0; i<ptr->podcasts->size(); i++){
        if(podcast == ptr->podcasts[i]->title){
            Episode* ep = new Episode(podcast, ptr->podcasts->getNumEpisodes(), title, content);
            if(ptr->podcasts[i].addEpisode(title, content)){
                return true;
            }else{
                return false;
            }
        }
    }
}

bool Network::addSubscriber(const string& name, const string& creditcard){
    if(numSubs == MAX_SUBS){
        return false;
    }else{
        Subscriber* added = new Subscriber(name, creditcard);
        subscribers[numSubs] = added;
        numbSubs++;
    }
}

bool Network::download(const string& subscriber, const string& podcast, Episode** ep){
    for(int i = 0; i<numbSubs; i++){
        if(subscribers[i].name == subscriber){
            for(int j = 0; j<ptr->podcasts->size(); j++){
                if(podcast == ptr->podcasts[j]->title){
                    ep = ptr->podcasts[j].getEpisode(numEps);
                    return true;
                }
            }
        }
    }
    return false;
}


bool Network::strem(const string& subscriber, const string& podcast, int episode, Episode** ep){
    for(int i = 0; i<numbSubs; i++){
        if(subscribers[i].name == subscriber){
            for(int i = 0; i<ptr->podcasts->size(); i++){
                if(podcast == ptr->podcasts[i]->title){
                    if(episode < ptr->podcasts[i]->getNumEpisodes()){
                        ep = ptr->podcasts[episode].getEpisode(numEps);
                        return true;
                    }
                }
            }
        }
    }
    return false;
}

bool Network::hasSubscriber(const string& name){
    for(int i = 0; i<numbSubs; i++){
        if(subscribers[i].name == subscriber){
            return true;
        }
    }
    return false;
}