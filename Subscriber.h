#ifndef SUBSCRIBER_H
#define SUBSCRIBER_H

#include <string>
using namespace std;

class Subscriber{

    

    private:
        string name;
        string creditcard;

    public: 
        Subscriber(const string& c_name, const string& c_creditcard):
            name(c_name), creditcard(c_creditcard){}
            
        bool matches(const string &m_name);
        void print();
};
#endif