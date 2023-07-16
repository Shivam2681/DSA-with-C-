#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;

int main(){
    
    unordered_map<string,int> m;

    //insertion

    pair<string,int> p = make_pair("shivam",1);
    m.insert(p);

    pair<string,int> q("vivek",2);
    m.insert(q);

    m["vikki"] = 3;

    cout<<m["vikki"]<<endl;
    cout<<m.at("shivam")<<endl;

    cout<<m.size()<<endl;
    cout<<m.count("shivam")<<endl;
    m.erase("vikki");
    cout<<m.size();


    return 0;
}