
#include<iostream>
#include<conio.h>

using namespace std;
void game(){
	string input1;
	while(input1!="N"){
	string input,B1="-",B2="-",B3="-",B4="-",B5="-",B6="-",B7="-",B8="-",B9="-",b;
	int cut=1;

	while(cut<=9){
	system("cls");
	cout<<"\n					 B1 | B2 | B3\n";
	cout<<"					----|----|----\n";
	cout<<"					 B4 | B5 | B6\n";
	cout<<"					----|----|----\n";
	cout<<"				    	 B7 | B8 | B9\n\n";
	cout<<"				-----------------------------\n";
	cout<<"				-----------------------------\n";

	cout<<"				 	  "<<B1<<" | "<<B2<<" | "<<B3<<" \n";
	cout<<"					----|---|----\n";
	cout<<"					  "<<B4<<" | "<<B5<<" | "<<B6<<" \n";
	cout<<"					----|---|----\n";
	cout<<"					  "<<B7<<" | "<<B8<<" | "<<B9<<" \n";
	cout<<"				-----------------------------\n";
	cout<<"				-----------------------------\n";


	cout<<"Select Block : B";
	input=getche();

	
	 if(input=="1")
	{
	cout<<"\nPress X and the enter : ";
	B1=getch();}
	else if(input=="2")
	{
	cout<<"\nPress X Or O and the enter : ";
	B2=getch();}
	else if(input=="3")
	{
	cout<<"\nPress X Or O and the enter : ";
	B3=getch();}
	else if(input=="4")
	{
	cout<<"\nPress X Or O and the enter : ";
	B4=getch();}
	else if(input=="5")
	{
	cout<<"\nPress X Or O and the enter : ";
	B5=getch();}
	else if(input=="6")
	{
	cout<<"\nPress X Or O and the enter : ";
	B6=getch();}
	else if(input=="7")
	{
	cout<<"\nPress X Or O and the enter : ";
	B7=getch();}
	else if(input=="8")
	{
	cout<<"\nPress X Or O and the enter : ";
	B8=getch();}
	else if(input=="9")
	{
	cout<<"\nPress X Or O and the enter : ";
	B9=getch();}
	else{
		cout<<"\nPlease enter valid block number!";
	}

				
	cout<<"\n				 	  "<<B1<<" | "<<B2<<" | "<<B3<<" \n";
	cout<<"					----|---|----\n";
	cout<<"					  "<<B4<<" | "<<B5<<" | "<<B6<<" \n";
	cout<<"					----|---|----\n";
	cout<<"					  "<<B7<<" | "<<B8<<" | "<<B9<<" \n\n";
	if(B1=="X" && B2=="X" && B3=="X" || B4=="X" && B5=="X" && B6=="X" || B7=="X" && B8=="X" && B9=="X" || B1=="X" && B5=="X" && B9=="X" || B3=="X" && B5=="X" && B7=="X" || B1=="X" && B4=="X" && B7=="X" || B2=="X" && B5=="X" && B8=="X" || B3=="X" && B6=="X" && B9=="X"  )
	{
		cout<<"Congratulations to X!!";
		goto end;

	}
	else if(B1=="0" && B2=="0" && B3=="0" || B4=="0" && B5=="0" && B6=="0" || B7=="0" && B8=="0" && B9=="0" || B1=="0" && B5=="0" && B9=="0" || B3=="0" && B5=="0" && B7=="0" || B1=="0" && B4=="0" && B7=="0" || B2=="0" && B5=="0" && B8=="0" || B3=="0" && B6=="0" && B9=="0"  )
	{
		cout<<"Congratulations to 0!!";
		goto end;
	}
	cut++;
	system("pause");}

	end:
	cout<<"Do you want to play again(Y/N)";
	cin>>input1;
	
}
}	

int main(){
	game();
	return 0;

}
