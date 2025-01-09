#include<iostream>
using namespace std;
int main(){
    string triangleA ="equilateral triangle";
    string triangleB ="isoceles triangle ";
    string triangleC ="scalen triangle";
    int a,b,c;
    cout<<"enter length of side 1"<<endl;
    cin>>a;
    cout<<"enter length of side 2"<<endl;
    cin>>b;
    cout<<"enter length of side 3"<<endl;
    cin>>c; 
    if(a+b>c && b+c>a && c+a>b){
        if (a==b && b==c&& c==a){
        cout<<"equilateral triangle";
        } 
        else if(a==b && b==c && c>a){
        cout<<"isoceles triangle";
        }
        else if(a<b && b<c && c>a){
        cout<<"scalen triangle";
        }
    }
        return 0;
}