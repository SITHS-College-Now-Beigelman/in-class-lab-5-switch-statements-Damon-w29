// Damon Wu 
// 10/8/2024
// Homework 1 part 1 

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int main (){
    //variables 
    int direct;
    int moves;
    //code

    srand(time(0));
    for (moves = 1; moves <= 25; moves = moves + 1)
   
    direct = rand() % 4 + 1; //random number between 1 and 4 so each is 25% //probable
    //1 means North, 2 means South, 3 means East and 4 means West

    switch(direct){
        case '1':
        cout << "North \n";
        break;

        case '2':
        cout << "South \n";
        break; 

        case '3':
        cout << "East \n";
        break;

        case '4':
        cout << "West";
        break;

        default:
        break;


    }


    return 0;
}