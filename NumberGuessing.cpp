
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