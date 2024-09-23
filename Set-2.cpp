#include<iostream>
#include <string>
#include <algorithm>
#include <cctype>
#include <vector>
#include <queue> 

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
/*
int main() {
    string str = "A man, a plan, a canal: Panama", strCpy;

    // Convert all characters to lowercase
    for (char &c : str) {
        c = tolower(c);
    }

    // Copy only alphanumeric characters
    for (int i = 0; i < str.size(); i++) {
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= '0' && str[i] <= '9')) {
            strCpy.push_back(str[i]); // Use push_back to append valid characters
        }
    }
    int flag = 0, n = strCpy.size();
    for(int i = 0; i < strCpy.size(); i++){
		--n;
        if(strCpy[i] != strCpy[n]){
			flag = 0;
			break;
		}
		flag = 1;
	}
	if(flag == 1){
		cout << "Palindrome";
	}
	else{
		cout << "Not a Palindrome";
	}

    return 0;
}
*/

/*
int main(){
    int size = 7, leftSum = 0, rightSum = 0, flag = 0;
    int arr[size] = {-7, 1, 5, 2, -4, 3, 0};

    for(int i = 0; i < size; i++){
        leftSum = 0;
        rightSum = 0;
        for(int j = 0; j < size; j++){

            if(i > j){
                leftSum = arr[j] + leftSum;
            }
            else if(i < j){
                rightSum = arr[j] + rightSum;
            }
        }
        if(leftSum == rightSum){
            cout << "Equilibrium Index = " << i << endl;
            flag = 1;
        }
    }
    if(flag == 0){
        cout << -1;
    }
}
*/
/*
int findKthLargest(vector<int>& nums, int k) {
    priority_queue<int, vector<int>, greater<int>> minHeap;

    for (int num : nums) {
        minHeap.push(num);
        if (minHeap.size() > k) {
            minHeap.pop();
        }
    }
    return minHeap.top();
}

int main() {
    vector<int> nums = {3, 2, 1, 5, 6, 4};
    int k;

    cout << "Enter value of k: ";
    cin >> k;

    cout << "The " << k << "th largest element is: " << findKthLargest(nums, k) << endl;

    return 0;
}
*/

int main(){
    

}