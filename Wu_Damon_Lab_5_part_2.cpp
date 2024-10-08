// Damon Wu 
// 10/8/2024
// Lab 5 part 2 

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main () {
    // set variables 
    float gigabyte;
    string type;

    //ask user for their data plan 
    cout << "How many gigabytes do you have in your monthly hotspot plan? \n";
    cin >> gigabyte;

    cout << "There are 3 options to choose from, Low, Med and High, choose one to download. \n";
    cin >> type;

    float lq = (gigabyte * 1000) / 43.2;   // hours of low quality music 
    float Mq = (gigabyte * 1000) / 72;     // hours of medium quality music 
    float hq = (gigabyte * 1000) / 115.2; // hours of high quality myusic 

    if (type == "Low") {
         cout << "In low quality you can stream for music " << fixed << setprecision(1) << lq << " hours.\n";
    }
     if (type == "Med"){
         cout << "In medium quality you can stream music for " << fixed << setprecision(1) << Mq  << " hours.\n";
        }
     if (type == "High") {
         cout << "In high quality you can stream music for " <<  fixed << setprecision(1) << hq << " hours.\n"; 
     }
     if (type != "Low" && type != "Med" && type != "High") {
        cout << "Invalid input, please restart the program. \n";
     }
     
    
    /*
    How many gigabytes do you have in your monthly hotspot plan? 
    15 
    There are 3 options to choose from, Low, Med and High, choose one to download. 
    Low 
    In low quality you can stream for music 347.2 hours.
    */

    return 0;
}