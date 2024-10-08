// Damon Wu 
// 10/8/2024
// Homework 1 part 1 

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main () {

    //variables in use
    double time;
    double weight;
    double calories;
    char type;

    // Ask the user for their exercise duration and their weight 
    cout << "How long do you want to exercise and what is your weight? Assume time is in minutes and weight is in kilograms. \n";
    cin >> time;
    cin >> weight;

    // output options for the user 
    cout << "Here are some exercise options, choose one. \n";
    cout << "Walking slowly. \n"; 
    cout << "Walking quickly. \n";
    cout << "Jogging. \n"; 

    // takes in the the type of work the user wants to do. 
    cout << "What would you like to do? For walking slowly, type 'S', for walking quickly, type 'Q', for Jogging, type 'J'. \n";
    cin >> type;

    // block of text, first off, this takes in the type the user wants to do, for some reason, switch only takes characters and numbers.
    switch (type){
        // if the user inputs S, for walking slowly, the following equation would happen and then the next event would pop up. 
        case 'S':
        cout << "You would burn " << fixed << setprecision(2) <<(time * (2 * 3.5 * weight)) / 200 << " calories. \n";
        break;

        // if the user inputs Q, for walking quickly, the following equation would happen and then the next event would pop up.
        case 'Q':
        cout << "You would burn " << fixed << setprecision(2) <<(time * (3 * 3.5 * weight)) / 200 << " calories. \n";
        break;

        // if the user inputs J, for Jogging, the following equation would happen and then the next event would pop up.
        case 'J':
        cout << "You would burn " << fixed << setprecision(2) <<(time * (8.8 * 3.5 * weight)) / 200 << " calories. \n";
        break;

        // if anything other than the previous inputs were punched in, this event would occur, and the user would make an input again. 
        default:
        cout << "Due to budget contraints, we only have 3 options, please be mindful, or you made a typing error, check for capitalization. \n";
        cin >> type;
    }

    //asks user how many calories they want to burn, weight has been already gotten by the user
    cout << "How many calories do you want to burn?" "\n"; 
    cin >> calories; 

    // takes in input for which exercise the user wants to do. 
    cout << "What type of exercise do you want to do? For walking slowly, type 'S', for walking quickly, type 'Q', for Jogging, type 'J'. \n";
    cin >> type;

    // if the user inputs "S, Q, or J", the following would occur
    switch(type){
        // if "S" was inputted, the following equation for calculating time would occur, 
        case 'S':
        cout << "For walking slowly you would need to walk for: " << fixed << setprecision(1) << (calories * 200) / (2 * 3.5 * weight) << " minutes. \n ";
        break;

        case 'Q':
        cout << "For walking quickly you would need to walk for: " << fixed << setprecision(1) << (calories * 200) / (3 * 3.5 * weight) << " minutes. \n";
        break; 

        case 'J':
        cout << "For Jogging you would need to jog for: " << fixed << setprecision(1) << (calories * 200) / (8.8 * 3.5 * weight) << " minutes.  \n";
        break;

        default:
        cout << "Invalid, make sure you typed you choice correctly, make sure to check capitalization. \n";
        cin >> type;

    }

    return 0;


    /*
    How long do you want to exercise and what is your weight? Assume time is in minutes and weight is in kilograms. 
    60 60 
    Here are some exercise options, choose one.
    Walking slowly.
    Walking quickly.
    Jogging.
    What would you like to do? For walking slowly, type 'S', for walking quickly, type 'Q', for Jogging, type 'J'. 
    S
    You would burn 126.00 calories.       
    How many calories do you want to burn?
    300 
    What type of exercise do you want to do? For walking slowly, type 'S', for walking quickly, type 'Q', for Jogging, type 'J'. 
    S
    For walking slowly you would need to walk for: 142.9 minutes.
    */
}