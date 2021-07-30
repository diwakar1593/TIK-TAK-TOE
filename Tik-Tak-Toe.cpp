#include<stdio.h>
#include<iostream>
#include<stdlib.h>
#include<windows.h>
#include<conio.h>
using namespace std;
//Following is the array for positions
char square[10]={'o','1','2','3','4','5','6','7','8','9'};
//The functions to use

int checkWin();
void drawBoard();


int main()
{
	int player=1;
	int i;
	int choice;
	
	
	char mark;
	
	
	do
	{
	   drawBoard();//Draw the Board
	   
	   player=(player%2)?1:2;
	   cout<<"PLAYER "<<player<< "  ENTER THE CHOICE ";
	   cin>>choice;
	   
	   mark=(player==1)?'X':'0';
	   
	   
	   if(choice==1 && square[1]=='1')
	   {
	   	square[1]=mark;
	   }
	   else if(choice==2 && square[2]=='2')
	   {
	   	square[2]=mark;
	   }
	   else if(choice==3 && square[3]=='3')
	   {
	   	square[3]=mark;
	   }
	   else if(choice==4 && square[4]=='4')
	   {
	   	square[4]=mark;
	   }
	   else if(choice==5 && square[5]=='5')
	   {
	   	square[5]=mark;
	   }
	   else if(choice==6 && square[6]=='6')
	   {
	   	square[6]=mark;
	   }
	   else if(choice==7 && square[7]=='7')
	   {
	   	square[7]=mark;
	   }
	   else if(choice==8 && square[8]=='8')
	   {
	   	square[8]=mark;
	   }
	   else if(choice==9 && square[9]=='9')
	   {
	   	square[9]=mark;
	   }
	   else
	   {
	   	player--;
	   }
	   
	   
	   //Lets check for the win condition
	   i=checkWin();
	   player++;	
	
	
	
		
		
	}while(i==-1);
	
	
	if(i==1)
	{
		cout<<"\n\n==> PLAYER " <<--player<< " WON";
		return 0;
	}
	else
	{
		cout<<"==> GAME DRAWN";
		return 0;
	}
		
	
}

//The function to check for winner
int checkWin()
{
	//Horizontal  win conditions
	if(square[1]==square[2] && square[2]==square[3])
	{
		return 1;
	}
	else if(square[4]==square[5] && square[5]==square[6])
	{
		return 1;
	}
	else if(square[7]==square[8] && square[8]==square[9])
	{
		return 1;
	}
	//Vertical  win conditions
	else if(square[1]==square[4] && square[4]==square[7])
	{
		return 1;
	}
	else if(square[2]==square[5] && square[5]==square[8])
	{
		return 1;
	}
	else if(square[3]==square[6] && square[6]==square[9])
	{
		return 1;
	}
	//Diagonal win conditions
	else if(square[1]==square[5] && square[5]==square[9])
	{
		return 1;
	}
	else if(square[3]==square[5] && square[5]==square[7])
	{
		return 1;
	}
	else if(square[1]!='1' && square[2]!='2' && square[3]!='3' &&
	        square[4]!='4' && square[5]!='5' && square[6]!='6' &&
			square[7]!='7' && square[8]!='8' && square[9]!='9' )
			{
				return 0;
			}
	else
	{
		return -1;
	}
			
}

//The function to draw the Board
void drawBoard()
{
	system("CLS");
	
	cout<<"\n\n\tTIC-TAC-TOE  GAME\n\n";
	cout<<"PLAYER 1==> X ||PLAYER 2==> 0\n\n";
	
	//Design for the Board (9 Lines)
	
	cout<<"\t     |     |     \n"; //Line 1
    cout<<"\t  "<<square[1]<<"  |  "<<square[2]<<"  |  "<<square[3]  <<"\n"; //Line 2   
	cout<<"\t_____|_____|_____\n"; //Line 3
	cout<<"\t     |     |     \n"; //Line 4	
	cout<<"\t  "<<square[4]<<"  |  "<<  square[5]  <<"  |  "<<  square[6]  <<"\n"; //Line 5
	cout<<"\t_____|_____|_____\n"; //Line 6
	cout<<"\t     |     |     \n"; //Line 7	
	cout<<"\t  "<<square[7]  <<"  |  "<<  square[8]  <<"  |  "<<  square[9]  <<"\n"; //Line 8
	cout<<"\t     |     |     \n"; //Line 9	
	
}
