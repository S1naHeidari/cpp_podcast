#include "Client.h"
#include<iostream>
using namespace std;
Client::Client(const string& c_name){
    name = c_name;
    ptr = new PodArray();
}

Client::~Client(){
    delete ptr;
}