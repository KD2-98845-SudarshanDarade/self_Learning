#include<iostream>
#include<list>
using namespace std;

int main(){
    list<int> l1;
    l1.push_back(50);
    l1.push_back(40);
    l1.push_back(30);
    l1.push_back(20);
    l1.push_back(10);

    list<int> :: iterator itr = l1.begin(); 
    while(itr != l1.end()){
        cout<<*itr<<endl;
        itr++;
    }

    cout<<"After adding 5 in each ele"<<endl;
    list<int> :: iterator itr2 = l1.begin();
    while(itr2 != l1.end()){
        cout<<*itr2+5<<endl;
        itr2++;
    }

    cout<<"Display using const..."<<endl;
    list<int>::const_iterator itr3 = l1.begin();
     while(itr3 != l1.end()){
        cout<<*itr3<<endl;
        itr3++;
    }

    cout<<"After the sorting..."<<endl;
    l1.sort();
    itr = l1.begin(); 
    while(itr != l1.end()){
        cout<<*itr<<endl;
        itr++;
    }

    return 0;
}