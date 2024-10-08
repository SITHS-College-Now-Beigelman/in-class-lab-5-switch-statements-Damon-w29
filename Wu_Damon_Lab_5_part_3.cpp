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

    srand(time(0));
    for (moves = 0; moves < 25; moves++)
    {
        direct = rand() % 4 + 1; //random number between 1 and 4 so each is 25% //probable  //1 means North, 2 means South, 3 means East and 4 means West

        switch(direct)
        {
         case 1:
            cout << "North";
            dnorth++;
            break;
        case 2:
            cout << "South";
            dsouth++;
            break; 
        case 3:
            cout << "East";
            deast ++;
            break;
         case 4:
            cout << "West";
            dwest ++;
            break;
        }
        cout << " " << direct << "\n";
    }

    finalY = dnorth - dsouth;
    finalX = deast - dwest;

    cout << "After a tumultuous 25 steps randomly, the robot ended up going. \n";
    if (finalY > 0 ){
        cout << "The robot ended up going north " <<dnorth - dsouth<< " block(s). \n";
    }
        else if (finalY < 0)  {
            cout << "The robot ended up going south "<<dsouth - dnorth<< "block(s). \n";
        }
        else {
            cout << "The robot did not end up moving any blocks north or south at the end. \n";
        }
    
    if (finalX > 0){
            cout << "The robot ended up going east " << deast - dwest << " block(s). \n";
    }
        else if (finalX < 0){
            cout << "The robot ended up going west " << dwest - deast << " block(s). \n";
        }
        else {
            cout << "The robot did not end up moving any blocks east or west at the end. \n";
        }


    return 0;
}