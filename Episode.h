#ifndef EPISODE_H
#define EPISODE_H

#include "defs.h"
#include <string>
using namespace std;

class Episode{

    

    private:
        string name;
        string content;
        string podcast;
        int number;

    public: 
        Episode(const string &c_podcast, int c_number, const string &c_name, const string &c_content);
        void play();
};
#endif