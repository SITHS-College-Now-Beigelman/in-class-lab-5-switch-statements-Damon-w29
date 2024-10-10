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
    bool run = true;
    //code    
    srand(time(0)); 

    while (run){ // while this loop is going. 
        direct = rand() % 4 + 1; //random number between 1 and 4 so each is 25% //probable  //1 means North, 2 means South, 3 means East and 4 means West

        switch(direct)
        {
         case 1: // if the direction is 1, or north, print north, increase the Y value by 1 and increas total moved by 1 aswell
            cout << "North";
            Y++;
            totalm++;
            break;
        case 2: // if the direction is 2, or south, print south, decrease the Y value by 1 and increas total moved by 1 aswell
            cout << "South";
            Y--;
            totalm++;
            break; 
        case 3: // if the direction is 3, or east, print east, incresase the X value by 1 and increas total moved by 1 aswell
            cout << "East";
            X++;
            totalm++;
            break;
         case 4: // if the direction is 4, or west, print west, decrease the X value by 1 and increas total moved by 1 aswell
            cout << "West";
            X--;
            totalm++;
            break;
        }
        cout << " " << X << " " << Y << "\n"; // outputs the direction and current X and Y values
        // If the robot goes beyond 10 or -10 in both directions, it gets lost and dies :(, to be fair, it should've had googlemaps
           if(X > 10 || X < -10 || Y < -10|| Y > 10){
               run = false;
               cout << "The robot got too lost and died. :(";
           }
           // if the robot makes it to its desired destination, the move is a success!
           if (Y == 3 && X == 2){
            cout << "The robot finally made it! And it only took it " << totalm << " moves whilst moving randomly! \n";
            run = false;
        }
    }
    // first run took 139 moves. 
    // after 10 runs, the robot on average took 23.5 moves, though it died like, 70% of the time. 
    // if the robot died, it counted as a 0. 

    /*
    West -1 0
    South -1 -1
    South -1 -2
    East 0 -2
    West -1 -2
    South -1 -3
    South -1 -4
    East 0 -4
    East 1 -4
    East 2 -4
    North 2 -3
    East 3 -3
    North 3 -2
    East 4 -2
    South 4 -3
    West 3 -3
    East 4 -3
    West 3 -3
    West 2 -3
    North 2 -2
    North 2 -1
    West 1 -1
    North 1 0
    East 2 0
    West 1 0
    East 2 0
    East 3 0
    West 2 0
    West 1 0
    East 2 0
    East 3 0
    North 3 1
    South 3 0
    West 2 0
    North 2 1
    East 3 1
    East 4 1
    North 4 2
    East 5 2
    North 5 3
    West 4 3
    East 5 3
    North 5 4
    West 4 4
    West 3 4
    West 2 4
    West 1 4
    East 2 4
    East 3 4
    East 4 4
    North 4 5
    North 4 6
    South 4 5
    South 4 4
    North 4 5
    West 3 5
    East 4 5
    West 3 5
    South 3 4
    East 4 4
    East 5 4
    West 4 4
    North 4 5
    East 5 5
    West 4 5
    South 4 4
    South 4 3
    South 4 2
    West 3 2
    North 3 3
    West 2 3
    The robot finally made it! And it only took it 71 moves whilst moving randomly!
    Note that 71 was not included in the averageing of the scores.  
    */
}