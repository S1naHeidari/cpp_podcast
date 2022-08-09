#include "Podcast.h"
#include<iostream>
using namespace std;
Podcast::Podcast(const string& c_title, const string& c_host){
    title = c_title;
    host = c_host;
    numEps = 0;
}

Podcast::Podcast(const Podcast &pod){
    for(int i = 0; i<numEps; i++){
        //cout<<"hello"<<endl;
        Episodes[i] = pod.Episodes[i];
    }
}