/*
CH-230-A
a9 p8.c
Mohamed Reda Arsalane
m.arsalane@jacobs-university.de
*/
#include <iostream>
#include <climits> 
using namespace std;

void subtract_max(int* arr, int n){
    int max = INT_MIN;
    for (int i = 0; i <n; i++){ //finding the largest number
        if (arr[i] > max){
            max = arr[i];
        }
    }
    for (int i = 0; i < n; i++){ //substracting it
        arr[i] = arr[i] - max;
    }
}
void deallocate(int arr[]){ // function to delloacate using delete [] on each element
    int i = 0;
    while (arr[i] != '\0')
    {
        delete [] arr;
        i++;
    }
}
int main(){
    int n;
    cin >> n;
    int* a = new int[n]; 
    for (int i = 0; i < n; i++)// getting the elements from the input
    {
        cin >> a[i];
    }
    cout << "Before : ";
    for (int i = 0; i < n; i++)
    {
        cout << " ";
        cout << a[i];
    }
    cout << "\n";
    subtract_max(a,n);//calling the function
    cout << "After : ";
    for (int i = 0; i < n; i++)
    {
        cout << " ";
         cout << a[i];
    }
    deallocate(a);//freeing 
    return 0;
    
}

