// Damon Wu 
// 10/8/2024
// Homework 1 part 1 

#include <iostream>
#include <string>
#include <cstdlib>
#include<ctime>

using namespace std;

int main (){
    //variables 
    int direct;
    int moves;
    
    //calculation vairables
    int Y = 0;
    int X = 0;
    int totalm = 0;
    //code

    while (Y != 3 || X != 2 ){
    srand(time(0));
        direct = rand() % 4 + 1; //random number between 1 and 4 so each is 25% //probable  //1 means North, 2 means South, 3 means East and 4 means West

        switch(direct)
        {
         case 1:
            cout << "North";
            Y++;
            totalm++;
            break;
        case 2:
            cout << "South";
            Y--;
            totalm++;
            break; 
        case 3:
            cout << "East";
            X++;
            totalm++;
            break;
         case 4:
            cout << "West";
            X--;
            totalm++;
            break;
        }
        cout << " " << direct << X << Y << totalm << "\n";
    }
        if (Y == 3 && X == 2){
            cout << "The robot finally made it! And it only took it " << totalm << " moves whilst moving randomly! \n";
        }
        if (Y >= 5 || X >= 5){
            cout << "The robot got way to lost and died :( \n";
        }
    return 0;
}