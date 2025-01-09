#include<iostream>
using namespace std;
int main() {
    float percent;
    float familyincome;
    bool extracurricular;
    cout<<"enter your percentage : \n";
    cin>>percent;
    cout<<"enter your familyincome :\n";
    cin>>familyincome;
    cout<<"enter extracurricular activities :\n";
    cin>>extracurricular;
    if(percent>80){
        cout<<"eligible for scolarship :\n";
        if(percent>90 && familyincome<50000){
            cout<<"full scolarship granted :\n";
            if(percent>90 && familyincome>50000<100000){
                cout<<"half scolarship granted; :\n";
            }
        }else{
            cout<<"no scolarship granted :\n";
        }

    }
    if(80<percent>90 && extracurricular==1){
        cout<<"partial scolarship granted \n";
    }else{
        cout<<"no scolarship \n";
    }return 0;
    
}