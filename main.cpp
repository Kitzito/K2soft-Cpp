//c++ program to implement Task1
#include<iostream>
using namespace std;
int main()
{
    int pin=0000, card, biometric,opp,new_balance,withdrawal,account_balance=10000000,i,Exit,limit=3;
    char c,y,n;
    cout<<"-----------------------------------------------------";
    cout<<"\n----------WELCOME TO K2SOFT BANKING SYSTEM-----------";
    cout<<"\n-----------------------------------------------------";
    cout<<"\nAre you a K2Soft Customer? [y/n]: ";
    cin>>c;
    if(c=='n'){
        cout<<"\n*****Register with K2SOFT and get 10% Bonus and Discount on all transactions*****";
        cout<<"\n\nEnter Card: ";
        cin>>card;
        cout<<"Enter Pin: ";
        cin>>pin;
        for(i=0; i<3; i++){
                    if(pin==0000){
        cout<<"Enter Withdrawal Amount: ";
        cin>>withdrawal;
        new_balance=account_balance-withdrawal;
        if(withdrawal > account_balance){
            cout<<"\nInsufficient balance, withdrawal unsuccessful";
        }
        else if(withdrawal <= account_balance){
            cout<<"\nWithdrawal Successful";
        }
        cout<<"\nYou have Withdrawn: "<<withdrawal<<"\n New Account balance: "<<new_balance<<"\n ";
        cout<<"\nThank You For Trusting K2SOFT";
        break;
        }
                    do{
                        cout<<"Incorrect Pin!!!\ntry again: ";
                        cin>>pin;
                        i+=1;
                    }while(i<limit);
            }
            cout<<"\nyour card has been swallowed bozo!!!";
    }

do{
        cout<<"\nWelcome Dear K2SOFT Customer";
        cout<<"\n1. Card + Pin";
        cout<<"\n2. Card + Biometric";
        cout<<"\nSelect Withdrawal option[1/2]: ";
        cin>>opp;

        switch(opp){

    case 1:
        cout<<"Card + Pin Selected";
        cout<<"\nEnter Card: ";
        cin>>card;
        cout<<"Enter Pin: ";
        cin>>pin;
            for(i=0; i<3; i++){
                    if(pin==0000){
        cout<<"Enter Withdrawal Amount: ";
        cin>>withdrawal;
        new_balance=account_balance-withdrawal;
        if(withdrawal > account_balance){
            cout<<"\nInsufficient balance, withdrawal unsuccessful";
        }
        else if(withdrawal <= account_balance){
            cout<<"\nWithdrawal Successful";
        }
        cout<<"\nYou have Withdrawn: "<<withdrawal<<"\n New Account balance: "<<new_balance<<" ";
        cout<<"\nThank You For Trusting K2SOFT";
        break;}
                    do{
                        cout<<"Incorrect Pin!!!\ntry again: ";
                        cin>>pin;
                        i+=1;
                    }while(i<limit);
            }
            cout<<"\nyour card has been swallowed bozo!!!";


    case 2:
        cout<<"\nPin + Biometric Selected";
        cout<<"\nEnter card: ";
        cin>>card;
        cout<<"Initiate Biometric Scan: ";
        cin>>biometric;
        cout<<"Enter Withdrawal Amount: ";
        cin>>withdrawal;
        new_balance=account_balance-withdrawal;
        if(withdrawal > account_balance){
            cout<<"\nInsufficient balance, withdrawal unsuccessful";
        }
        else if(withdrawal <= account_balance){
            cout<<"\nWithdrawal Successful";
        }
        cout<<"\nYou have withdrawn: "<<withdrawal<<"\n New Account Balance: "<<new_balance<<" ";
        cout<<"\nThank You For Trusting K2SOFT";
        break;

    default:
        cout<<"\nQuit Screwing Around BOZO!!!";
        break;
        }
    }
    while(c=='y');
    }
