#include<iostream>
using namespace std;
class car
{
    public:
    string model;
    string company;
    int price;
    void display(){
        cout<<"model:"<<model<<"company;"<<company<<"price"<<price<<endl;   
}
};
int main(){
    car c1, c2;
    c1.model ="samsung";
    c1.company ="i9";
    c1.price = 120000;
    c2.model ="acer";
    c2.company ="amd ryzen 5";
    c2.price = 130000;
    c1.display();
    c2.display();
    return 0;
}
