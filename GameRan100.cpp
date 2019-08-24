#include <iostream>
#include <iomanip>
using namespace std;
bool checkNum(int,int);
int main()
{
	bool trigger=true;
	int Ans,Anum,n=0;
	srand(time(NULL));
	cout << "###Welcome to guessing number game###" << endl;
	cout << "Secret number has been chosen" << endl;
	Ans=rand()%10+1;
	do{
		cout << "Guess the number (1 to 10) : " ;
		cin >> Anum;
		trigger = checkNum(Ans,Anum);
		n++;
	}while(trigger);
	cout << "The secret number is " << Ans << endl;
	cout << "You made " << n <<" guesses" << endl; 
	return(0);
}

bool checkNum(int ans,int anum)
{
	if (ans == anum){
		cout << "Congratulations!" << endl ;
		return(false);
	}else if(anum > ans){
		cout << "The secret number is higher." << endl;
		return(true);
	}else if(anum < ans){
		cout << "The secret number is lower." << endl;
		return(true);
	}
}