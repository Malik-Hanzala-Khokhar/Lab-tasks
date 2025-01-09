#include<iostream>
using namespace std;
int main(){
    float mathScore ,englishScore ,overallPercentage;
    cout<<"enter mathScore \n";
    cin>>mathScore;
    cout<<"enter englishScore \n";
    cin>>englishScore;
    cout<<"enter overallPercentage \n";
    cin>>overallPercentage;

    if(mathScore>=85 && englishScore>=80 && overallPercentage>90){
    cout<<"eligible for scolarShip \n";
    }
    else{
        cout<<"not eligible \n";
    }


     return 0;
}
