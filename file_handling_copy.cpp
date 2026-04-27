#include <fstream>
#include <iostream>
using namespace std;
int main(){
    ofstream file("data.txt",ios::app);
    file<<" fahhhhh  ";
    file.close();
    return 0;
}