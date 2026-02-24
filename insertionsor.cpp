#include <iostream>
using namespace std;

void printarray(int array[], int size){
      for (int i = 0; i < size; i++) {
        cout << array[i] << " ";
    }
    cout << endl;
}

void insertionsort(int array[],int n){
    for(int i=1;i<n;i++){
        int key=array[i];
        int j= i-1;
    
        while( j>=0 && array[j]>  key){
            array[j+1]=array[j];
            j--;
         } 
         array[j+1]=  key;
    }
}

int main(){
    int data[]= {65,67,89,76,43};
    int n=sizeof(data)/sizeof(data[0]);

    cout<<"original array :" ;
    printarray(data,n);

    insertionsort(data,n);
    cout<<"sorted array: " ;
    printarray(data,n);
    return 0;


}