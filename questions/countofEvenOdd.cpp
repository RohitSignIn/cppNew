#include<iostream>
using namespace std;

void countEvenOdd(int arr[]){
    
    int evenCount = 0;
    int oddCount = 0;

    for(int i=0; i<8; i++){
        if(arr[i] % 2 == 0){
            evenCount++;
        }else{
            oddCount++;
        }
    }

    cout<<"evenCount: "<<evenCount<<endl;
    cout<<"oddCount: "<<oddCount;

}

int main(){
    int arr[8] = {2,31,4,42,2,4,5,8};
    countEvenOdd(arr);
return 0;
}