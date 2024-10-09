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
    int dnorth = 0;
    int dsouth = 0;
    int dwest = 0;
    int deast = 0;
    int direct;
    int moves;
    
    //calculation vairables
    int finalY;
    int finalX;
    //code

    srand(time(0)); // randomizes the numbers
    for (moves = 0; moves < 25; moves++) // "moves" starts at 0, then for every number gotten, increase the counter by 1.
    {
        direct = rand() % 4 + 1; //random number between 1 and 4 so each is 25% //probable  //1 means North, 2 means South, 3 means East and 4 means West

        switch(direct)
        {
            // if the number rolled is 1, it outputs north and the tally for north increases by one. 
         case 1:
            cout << "North";
            dnorth++;
            break;
            // if the number rolled is 2, it outputs south and the tally for south increases by one.
        case 2:
            cout << "South";
            dsouth++;
            break; 
            // if the number rolled is 3, it outputs East and the tally for East increases by one.
        case 3:
            cout << "East";
            deast ++;
            break;

            // if the number rolled is 4, it outputs west and the tally for west increases by one. 
         case 4:
            cout << "West";
            dwest ++;
            break;
        }
        cout << " " << direct << "\n";
    }

    // this calculates whether the bot leaned more on, I used "Y" for north and south (up and down), like the y axix, I used "X" for east and west, like the x axis,(left and right)
    finalY = dnorth - dsouth;
    finalX = deast - dwest;

    cout << "After a tumultuous 25 steps randomly, the robot ended up going. \n";
    // if the final on the "Y-axis" is positive,(up),that means that the robot went north, the remainder calculated is the blocks moved north.  
    if (finalY > 0 ){
        cout << "The robot ended up going north " <<dnorth - dsouth << " block(s). \n";
    }
        // if the final on the "Y-axis" is negative,(down),that means that the robot went south, the remainder calculated is the blocks moved north. 
        else if (finalY < 0)  {
            cout << "The robot ended up going south "<<dsouth - dnorth << "block(s). \n";
        }
        // if north and south end up cancelling out, (meaning it equalled 0), this happens
        else {
            cout << "The robot did not end up moving any blocks north or south at the end. \n";
        }
    // if the final on the "X-axis" is positive,(right),that means that the robot went east, the remainder calculated is the blocks moved east. 
    if (finalX > 0){
            cout << "The robot ended up going east " << deast - dwest << " block(s). \n";
    }
        // if the final on the "X-axis" is negative,(left), that means the robot went west, the remainder calculated is the blocks moved west. 
        else if (finalX < 0){
            cout << "The robot ended up going west " << dwest - deast << " block(s). \n";
        }
        // if the east and west end up resulting in 0, then it doesnt deviate from east or west. 
        else {
            cout << "The robot did not end up moving any blocks east or west at the end. \n";
        }


    /*
    East 3
    North 1
    North 1
    South 2
    West 4
    East 3
    West 4
    West 4
    West 4
    South 2
    West 4
    East 3
    West 4
    West 4
    South 2
    North 1
    South 2
    North 1
    West 4
    West 4
    South 2
    West 4
    West 4
    West 4
    South 2
    After a tumultuous 25 steps randomly, the robot ended up going. 
    The robot ended up going south 2block(s). 
    The robot ended up going west 9 block(s). 
    */
    return 0;
}