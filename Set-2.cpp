#include<iostream>
using namespace std;

/*
int subArrayLargestSum(int arr[], int size){
    int maxSum = 0, currSum = 0;
    for(int i = 0; i < size; i++){
        currSum = currSum + arr[i];
        if(maxSum < currSum){
            maxSum = currSum;
        }
        if(currSum < 0){
            currSum = 0;
        }
    }

    return maxSum;
}

int main(){
    int arr[9] = {-2,1,-3,4,-1,2,1,-5,4};
    
    cout << subArrayLargestSum(arr, 9);

    return 0;
}
*/
/*
int countInversions(int arr[], int size){
    int countInversions = 0;

    for(int i = 0; i < size; i++){
        for(int j = i+1; j < size; j++){
            if(arr[i] > arr[j]){
                countInversions++;
            }
        }
    }
    return countInversions;
}

int main(){
    int arr[4] = {7, 2, 6, 3};

    cout << countInversions(arr, 4);
}
*/
