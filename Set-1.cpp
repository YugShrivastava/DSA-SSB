#include <iostream>
using namespace std;
/*
int main(){
	int arr[5] = {1, -1, 2, -2, 0}, count = 0;
	for(int i = 0; i < 5; i++){
		if(arr[i] < 0){
			count++;
		}
	}
	cout << count;

	return 0;
}
*/
/*
int main(){
	int arr[5] = {1, 2, 3, 4, 5}, max = arr[0];
	for(int i = 0; i < 5; i++){
		if(max < arr[i]){
			max = arr[i];
		}
	}
	cout << max;

	return 0;
}
*/
/*
int main(){
	int arr1[5] = {1, 2, 3, 4, 5}, arr2[5] = {-5, 6, -3, -2, -1}, arr3[10], count = 0, i = 0, j = 0;
	for(int k = 0; k < 10; k++){
		if(arr1[i] <= arr2[j]){
			arr3[k] = arr1[i];
			i++;
		}
		else if(arr2[j] < arr1[i]){
			arr3[k] = arr2[j];
			j++;
		}

		cout << arr3[k] << "\t";
	}

	return 0;
}
*/
/*
int main(){
	int arr[7], n = 6;
	for(int i = 0; i < 7; i++){
		cin >> arr[i];
	}

	for(int i = 0; i < 3; i++){
		if(i >= n){
			break;
		}

		swap(arr[i], arr[i + n]);
		n--;
	}
	for(int i = 0; i < 7; i++){
		cout << arr[i];
	}

	return 0;
}
*/
/*
int main(){
	int arr[5] = {1, 2, 1, 2, 1}, n = 4, flag = 0;
	for(int i = 0; i < 2; i++){
		if(arr[i] != arr[n]){
			flag = 0;
			break;
		}
		n--;
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
	int arr[5] = {1, 2, 3, 4, 5}, num, flag = 0;
	cout << "Enter the number: ";
	cin >> num;

	for(int i = 0; i < 5; i++){
		if(arr[i] == num){
			cout << "Index = " << i;
			flag = 1;
			break;
		}
	}

	if(flag == 0){
		cout << -1;
	}
}
*/
/*
int main(){
	int arr[5] = {1, 2, 4, 3, 3}, frequencyArr[5] = {0, 0, 0, 0, 0};
	for(int i = 0; i < 5; i++){
		for(int j = 0; j < 5; j++){
			if(arr[i] == arr[j]){
				frequencyArr[i]++;
			}
		}
		if(frequencyArr[i] == 1){
			cout << arr[i] << "\t";
		}
	}
	cout << endl;
	for(int i = 0; i < 5; i++){
		cout << frequencyArr[i] << "\t";
	}
	cout << endl;
	for(int i = 0; i < 5; i++){
		if(frequencyArr[i] > 1){
			cout << arr[i] << "\t";
		}
	}
}
*/
/*
int main(){
	for(int i = 4; i > -1; i--){
		for(int j = i; j >-1; j--){
			cout << " ";
		}
		cout << "****";
		cout << endl;
	}
}
*/
/*
void parallelogram(int rows){
	for(int i = rows; i > -1; i--){
			for(int j = i; j >-1; j--){
			cout << " ";
		}
		cout << "****";
		cout << endl;
	}
}

int main(){
	int rows;
	cin >> rows;
	parallelogram(rows);
}
*/
/*
void rightTriangle(int rows){
	for(int i = 0; i < rows; i++){
		for(int j = 0; j < i + 1; j++){
			cout << "*";
		}
		cout << endl;
	}
}

int main(){
	int rows;
	cin >> rows;

	rightTriangle(rows);
}
*/
/*
void halfDiamond(int columns){
	for(int i = 0; i < columns; i++){
		for(int j = 0; j < i + 1; j++){
			cout << "*";
		}
		cout << endl;
	}
	for(int i = columns; i > -1; i--){
		for(int j = i - 1; j > 0; j--){
			cout << "*";
		}
		cout << endl;
	}
}

int main(){
	int columns;
	cin >> columns;

	halfDiamond(columns);
}
*/
/*
void fullTriangle(int columns){
	for(int i = 0; i < columns; i++){
		for(int j = columns; j > i; j--){
			cout << " ";
		}
		for(int k = 0; k <= i; k++){
			cout << "*";
		}
		for(int l = 1; l <= i; l++){
			cout << "*";
		}
		cout << endl;
	}
	for(int i = 1; i < columns; i++){
		for(int j = 0; j <= i; j++){
			cout << " ";
		}
		for(int k = columns; k > i; k--){
			cout << "*";
		}
		for(int l = columns-1; l > i; l--){
			cout << "*";
		}
		cout << endl;
	}
}

int main(){
	int columns;
	cout << "Enter the no. of columns: ";
	cin >> columns;
	fullTriangle(columns);
}
*/
/*
int main()
{
	int number, flag, n;
	cout << "Enter the number: ";
	cin >> number;

	flag = number % 2;
	n = flag;

	for (int i = 0; i < number; i++)
	{
		if (flag == n)
		{
			for (int j = 1; j <= number; j++)
			{
				cout << j;
			}
			flag = (number - 1) % 2;
		}
		else
		{
			for (int j = number; j > 0; j--)
			{
				cout << j;
			}
			flag = n;
		}
		cout << endl;
	}
}
*/
/*
void printPattern(int row, int column){
	for(int i = 0; i < column; i++){
		cout << "1";
	}
	cout << endl;
	for(int i = 0; i < row-2; i++){
		cout << "1";
		for(int j = 0; j < column - 2; j++){
			cout << "0";
		}
		cout << "1" << endl;
	}
	for(int i = 0; i < column; i++){
		cout << "1";
	}
}

int main(){
	int row, column;
	cout << "Enter row number: ";
	cin >> row;
	cout << "Enter column number: ";
	cin >> column;

	printPattern(row, column);
}
*/
/*
void printPattern(int row){
	for(int i = 0; i < row; i++){
		for(int j = i + 1; j <= row; j++){
			cout << j;
		}
		for(int j = 0; j < i; j++){
			cout << row;
		}
		cout << endl;
	}
}

int main(){
	int row;
	cout << "Enter the number of rows: ";
	cin >> row;

	printPattern(row);
}
*/