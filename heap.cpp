#include<iostream>
using namespace std;

int main(){
    int size = 11;
    int heap[size], index, element;

//  Insert heap
    while(index < size){
        int element;
        cout << "Enter element: ";
        cin >> element;

        if(index == 0){
            heap[index] = element;
            index++;
        }

        else if(heap[(index-1) / 2] < element){
            int indexCpy = index;
            while(heap[(indexCpy-1) / 2] < element){
                int temp = heap[(indexCpy-1)/2];
                heap[(indexCpy-1)/2] = element;
                element = temp;
                heap[indexCpy] = element;
                indexCpy = (indexCpy-1)/2;
                element = heap[indexCpy];
            }
            index++;
        }

        else{
            heap[index] = element;
            index++;
        }
    }

//  Print heap
    for(int i = 0; i < size; i++){
        cout << heap[i] << " ";
    }
}