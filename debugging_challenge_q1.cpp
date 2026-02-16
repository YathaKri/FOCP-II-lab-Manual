#include <iostream>
using namespace std;

int main() {
    int n, sum=0;
    cout<<"Enter number: ";
    cin >> n;
    for(int i=1;i<=n;i++) {
        sum=sum+i;
    }
    cout<<"Sum of integers from 1 to " << n << " is: "<<sum;
    return 0;
}