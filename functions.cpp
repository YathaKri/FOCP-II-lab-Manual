#include<iostream>
using namespace std;
int add(float x,float y){
    return x+y;
}
int sub(float x,float y){
    return x-y;
}
int mult(float x,float y){
    return x*y;
}
float divi(float x,float y){
    return x/y;
}
int main(){
    int choice;
    float a,b;
    float result;
    cout<<"Enter 1st number:";
    cin>>a;
    cout<<"Enter 2nd number:";
    cin>>b;
    cout<<"Enter choice(1[add],2[sub],3[mult],4[div])";
    cin>>choice;
    if (choice==1) {
        result=add(a,b);
        cout<<result;
    }
    else if (choice==2) {
        result=sub(a,b);
        cout<<result;
    }
    else if (choice==3) {
        result=mult(a,b);
        cout<<result;
    }
    else if (choice==4) {
        result=divi(a,b);
        cout<<result;
    }
    
    return 0;
}
