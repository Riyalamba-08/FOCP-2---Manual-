#include<iostream>
using namespace std;
class Area{
    private:
    int r;
    float ar,pi=3.14;
    public:
    void areacircle();
};
void Area :: areacircle(){
    cout<<"Enter Radius ";
    cin>>r;
    cout  <<"The Area of Circle is";
    ar=pi*r*r;
    cout<<ar;
}
int main(){
    Area a1;
    a1.areacircle();
    return 0;
}
