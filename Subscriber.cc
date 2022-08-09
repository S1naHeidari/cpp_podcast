#include "Subscriber.h"
#include<iostream>
using namespace std;
bool Subscriber::matches(const string& m_name){
    if(name.compare(m_name)==0){
        return true;
    }else{
        return false;
    }
}

void Subscriber::print(){
    cout<<"name: "<<name<<"\n"<<"creditcard: "<<creditcard<<endl;
}