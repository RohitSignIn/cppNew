#include<iostream>
using namespace std;

int main(){

int a[5] = {1,5,3,4,5};
// Traversing of Array
// for(int i=0; i<5; i++){
//     cout<<a[i];
// }

// 1. SUM of all 5, Entered Numbers
int sum=0;
for(int i=0; i<5; i++){
    sum = sum + a[i];
}

cout<<sum;

return 0;
}