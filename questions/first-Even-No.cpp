#include<iostream>
using namespace std;

int main(){

int a[5] = {1,5,3,4,2};

// 3. First Even Odd
int gotEven;
for(int i=0; i<5; i++){
    if(a[i] % 2 == 0){
        gotEven = a[i];
        break;
    }
}

cout<<gotEven;

return 0;
}