#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	int choice;
	float num1, num2;
	
	//Muhammad Abbas
	//11620
	
	cout<<"\t\tScientific Calculator"<<endl;
	cout<<"\t -----------------------------------"<<endl;
	cout<<"Press the Following Numbers for different operation"<<endl<<endl;
	cout<<"\t 1: Addition"<<endl;
	cout<<"\t 2: Subtraction"<<endl;
	cout<<"\t 3: Multiplication"<<endl;
	cout<<"\t 4: Division"<<endl;
	cout<<"\t 5: Squre Root"<<endl;
	cout<<"\t 6: Percentage"<<endl;
	cout<<"\t 7: Average"<<endl;
	cout<<"\t 8: Cube"<<endl;
	cout<<"\t 9: Sin"<<endl;
	cout<<"\t 10: Tan"<<endl;
	cout<<"\t 11: Cos"<<endl;
	cout<<"\t 12: InverseCos"<<endl;
	cout<<"\t 13: InverseTan"<<endl;
	cout<<"\t 14: InverseSin"<<endl;
	cout<<"\t 15: Logarithm"<<endl;
	cout<<"\t 16: Power"<<endl;
	cout<<"\t 17: Exit"<<endl;
	do{
		cout<<"\n Enter Your Choice: ";
		cin>>choice;	
		
	switch(choice)
	{
		case 1:
			cout<<"\n Enter 1st Number : ";
			cin>>num1;
			cout<<"\n Enter 2nd Number : ";
			cin>>num2;
			cout<<"\n The Result is = "<<num1 + num2;
			break;
		case 2:
			cout<<"\n Enter 1st Number : ";
			cin>>num1;
			cout<<"\n Enter 2nd Number : ";
			cin>>num2;
			cout<<"\n The Result is = "<<num1 - num2;
			break;
		case 3:
			cout<<"\n Enter 1st Number : ";
			cin>>num1;
			cout<<"\n Enter 2nd Number : ";
			cin>>num2;
			cout<<"\n The Result is = "<<num1 * num2;
			break;
		case 4:
			cout<<"\n Enter 1st Number : ";
			cin>>num1;
			cout<<"\n Enter 2nd Number : ";
			cin>>num2;
			cout<<"\n The Result is = "<<num1 / num2;
			break;
		case 5:
			cout<<"\n Enter Any Number to find Squre Root : ";
			cin>>num1;
			cout<<"\n The Result is = "<<sqrt(num1);
			break;
		case 6:
			float obt, total;
			cout<<"\n Enter Obtained Mark's' : ";
			cin>>obt;
			cout<<"\n Enter Total Mark's' : ";
			cin>>total;
			cout<<"\n The Result is = "<<(obt/total)*100;
			break;
		case 7:
			cout<<"\n Enter 1st Number : ";
			cin>>num1;
			cout<<"\n Enter 2nd Number : ";
			cin>>num2;
			cout<<"\n The Result is = "<<(num1 + num2)/2;
			break;
		case 8:
			cout<<"\n Enter Any Number to find Cube : ";
			cin>>num1;
			cout<<"\n The Result is = "<<num1 * num1 * num1;
			break;
		case 9:
			cout<<"\n Enter A Number to find sin: ";
			cin>>num1;
			cout<<"\n The Result is = "<<sin(num1);
			break;
		case 10:
			cout<<"\n Enter A Number to find Tan: ";
			cin>>num1;
			cout<<"\n The Result is = "<<tan(num1);
			break;
		case 11:
			cout<<"\n Enter A Number to find Cos: ";
			cin>>num1;
			cout<<"\n The Result is = "<<cos(num1);
			break;
		case 12:
			cout<<"\n Enter A Number to find inverse of cos in Degree: ";
			cin>>num1;
			cout<<"\n The Result is = "<<acos(num1);
			break;
		case 13:
			cout<<"\n Enter A Number to find inverse of tan in Degree: ";
			cin>>num1;
			cout<<"\n The Result is = "<<atan(num1);
			break;
		case 14:
			cout<<"\n Enter A Number to find inverse of sin in Degree: ";
			cin>>num1;
			cout<<"\n The Result is = "<<asin(num1);
			break;
		case 15:
			cout<<"\n Enter A Number to find Logrithem: ";
			cin>>num1;
			cout<<"\n The Result is = "<<log10(num1);
			break;
		case 16:
			cout<<"\n Enter Any Number :  ";
			cin>>num1;
			cout<<"\n Enter Exponent : ";
			cin>>num2;
			cout<<"\n The Result is = "<<pow(num1,num2);
			break;
		case 17:
			exit(0);
			break;
		default:
			cout<<"\n Wrong Input !!!!";
			break;
	}                             
	}
	while(choice != 16);
}
