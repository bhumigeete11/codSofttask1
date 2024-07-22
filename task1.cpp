#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
 
int main()
{
       cout<<"\n\t\t________________________WELCOME_________________________/n"<<endl;
       cout<<"\n\t\t______You have to guess a number between 1 to 100";
       cout<<"\n\t\t______Lets start & ALL THE BEST"<<endl;

       srand(time(0));
       int randNumber = ( rand() %100) + 1;

       cout<<"\n^^**You will have total 5 chances.**^^\n";
       int chancesLeft = 5;
       int playerInput;
       for(int i=1;  i<=5; i++)
       {

          cout << "\n__ENTER THE NUMBER:";
           cin >> playerInput;

        if(playerInput == randNumber)
        {
            cout<<"\nCongrats!!. YOU GUESSED THE RIGHT NUMBER\n";
            break;
        }
        else
       {
         if(playerInput > randNumber)
        {
            cout<<"\n""Insert a smaller number.Try again"""<<endl;
        }
        else
        {
        cout<<"\n""Insert a larger number.Try again"""<<endl;
        }
        }
       chancesLeft--;
       cout<<"\n(Chances Left to guess the number:" << chancesLeft << ")"<<endl;
       
       if(chancesLeft==0){
            cout<< "\n Sorry your chances have been finished to guess a number\n"<<endl;
            cout<< " The Random Number was : " << randNumber <<endl;
            cout<< "Thankyou for the participation , Have a Good-day";
       }

  }
       cout <<" \n ";
       return 0;
}