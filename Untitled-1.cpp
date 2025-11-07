#include<iostream>
using namespace std;
class laptop
{
    public:
    string brand;
    string processor;
    int ram;
    void display(){
        cout<<"brand:"<<brand<<"processor;"<<processor<<"ram"<<ram<< "gb"<<endl;   
}
};
int main(){
    laptop l1, l2;
    l1.brand ="samsung";
    l1.processor ="i9";
    l1.ram = 8;
    l2.brand ="acer";
    l2.processor ="amd ryzen 5";
    l2.ram = 16;
    l1.display();
    l2.display();
    return 0;
}