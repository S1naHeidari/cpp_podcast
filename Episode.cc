#include "Episode.h"
#include<iostream>
using namespace std;
Episode::Episode(const string &c_podcast, int c_number, const string &c_name, const string &c_content){
    podcast = c_podcast;
    number = c_number;
    name = c_name;
    content = c_content;
}

void Episode::play(){
    cout<<"podcast information: "<<podcast<<"\n"
    <<"name: "<<name<<" number: "<<number<<"\n"
    <<"content: "<<content<<endl;
}