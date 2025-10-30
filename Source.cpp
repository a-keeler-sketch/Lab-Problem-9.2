/*
* File: P9-2
* Author: Anna Keeler
* Date: 10/30/2025
*
* Description: Lab 9.2
*/
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;


//prototypes
bool isSortedIncreasing(int values[], int size);
bool isSortedDecreasing(int values[], int size);
bool hasAdjecentDuplicates(int values[], int size);
bool hasDuplicates(int values[], int size);

int main(void) {
    const int SIZE_OF_ARRAY =  6 ;
    int array[SIZE_OF_ARRAY];
    
    //gets input from user
    for (int i = 0; i < SIZE_OF_ARRAY; i++) {
        array[i] = 0;
        cout << "Enter integer # " << i << ": ";
        cin >> array[i];

    }

    if (isSortedIncreasing(array, SIZE_OF_ARRAY) == true) cout << "The data are increasing" << endl;
    else cout << "The data are not increasing" << endl;

    if (isSortedDecreasing(array, SIZE_OF_ARRAY) == true) cout << "The data are decreasing" << endl;
    else cout << "The data are not decreasing" << endl;

    








    return 0;

}

bool isSortedIncreasing(int values[], int size) {
 
    for (int i = 1; i < size; i++) {
        if (values[i] < values[i - 1]) return false;
       
    }
    return true;
}
bool isSortedDecreasing(int values[], int size) {

    for (int i = 1; i < size; i++) {
        if (values[i] > values[i - 1]) return false;

    }
    return true;
}
