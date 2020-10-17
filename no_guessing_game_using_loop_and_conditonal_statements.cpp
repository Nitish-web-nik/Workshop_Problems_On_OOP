#include<iostream>
#include<cstdlib>
#include<string>
#include<ctime>
using namespace std;
int main()
{
    int no_guess, range_max, range_min, guess_count=0, guessed_no, no;
    cout<<"*************Number Guessing Game*****************"<<endl;
    cout<<"Enter the number of guessess"<<endl;
    cin>> no_guess;
    cout<<"Maximum Range"<<endl;
    cin>> range_max;
    cout<< "Minimum Range"<<endl;
    cin>> range_min;
    no = rand() % (range_max - range_min +1);
    while(guess_count<=no_guess)
    {
        cout<<"What you guessed "<<endl;
        cin>>guessed_no;
        if(guessed_no > no)
        {
            cout<<"Your guess is too high"<<endl;
        }
        else if(guessed_no < no)
        {
            cout<< "Your guess is too low"<<endl;
        }
        else
        {
            cout<<"Hurray!!! You guessed it "<<endl;break;
        }
        guess_count++;
    }
    cout<<"Your no of guesses completed " <<endl;
    return 0;
}
