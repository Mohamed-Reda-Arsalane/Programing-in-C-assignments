/*
CH-230-A
a9 p6.c
Mohamed Reda Arsalane
m.arsalane@jacobs-university.de
*/
#include <iostream>

using namespace std;

int myfirst(int arr[]){
    int i = 0;
    int holder = -1;
    while (arr[i] != '\0')
    {
       if (arr[i]>0 && arr[i] % 2 == 0) //condition for positive even integers
       {
           holder = arr[i];
       }
       i++;
    }
    return holder;
}

double myfirst(double arr[])
{
    int i = 0;
    while (arr[i] != '\0')
    {
      if (arr[i]<0 && arr[i] == (int)arr[i]) // if a double is equal to its integer part it has no fractional part
      {
      return arr[i];
      }
      i++;
    }
    return -1.1;
}

char myfirst(char arr[]){
    int i = 0;
    while (arr[i] != '\0')
    {
      if (((arr[i] >= 'a' && arr[i] <= 'z') || (arr[i] >= 'A' && arr[i] <= 'Z')) // make sure the char is a letter and is not a vowel
       && arr[i] != 'a' && arr[i] != 'o' && arr[i] != 'e' && arr[i] != 'u' && arr[i] && arr[i] != 'i' 
       && arr[i] != 'A' && arr[i] != 'O' && arr[i] != 'E' && arr[i] != 'U' && arr[i] && arr[i] != 'I')
      {
          return arr[i];
      }
      i++;
    }
    return '0';
}

int main(){

    int arr1[] = {-5,-4,-3,-2,-1,1,3,5};
    double arr2[] = {-5.54,-4,-3.543,-2.65,-1.34,1,2.54,3.65,4.65,5};
    char arr3[] = "'&'&é""(-è_çà'()aaaaeee This is a '&''() string";
    cout << myfirst(arr1)<< endl;
    cout << myfirst(arr2)<< endl;
    cout << myfirst(arr3)<< endl;

}