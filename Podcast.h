#ifndef PODCAST_H
#define PODCAST_H

#include <string>
#include "defs.h"
#include "Episode.h"
#include<iostream>
using namespace std;

class Podcast{

    

    private:
        string title;
        string host;
        int numEps;
        Episode* Episodes[MAX_EPS];

    public: 
        Podcast(const string& c_title, const string& c_host);
        Podcast(const Podcast &pod);

        string get_title(){
            return title;
        }
        string get_host(){
            return host;
        }

        int getNumEpisodes(){
            return numEps;
        }

        bool addEpisode(string &title, string &content){
            if(numEps < MAX_EPS-1){
                Episodes[numEps] = new Episode(host, numEps, title, content);
                numEps++;
                return true;
            }else{
                return false;
            }
        }

        bool getEpisode(int index, Episode ** ep){
            if(index <= numEps){
                *ep = Episodes[index];
                return true;
            }else{
                return false;
            }
        }

        bool lessThan(Podcast& pod){
            if(title.compare(pod.title) < 0){
                return true;
            }else{
                return false;
            }
        }
};
#endif