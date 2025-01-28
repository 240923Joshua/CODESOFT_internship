/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
    srand((unsigned int )time(NULL));
    int number = rand() % 100 + 1;
    int guess = 0;
    do{
        cout<<"Enter Guess (1-100): ";
        cin>>guess;
        if(guess > number)
        cout<<"Try guessing lower\n";
        else if(guess < number)
        cout<<"Try guessing higher\n";
        else
        cout<<"You won!"<<endl;
    }while(guess != number);

    return 0;
}