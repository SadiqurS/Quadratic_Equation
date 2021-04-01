//Sadiqur Sakib
//Period 9
//Quad Homework
#include <iostream>
#include <math.h>
using namespace std;



int main()
{
	int a;
	int b;
	int c;
	float x;// the discriminant equation variable
	float q1;//the positve quad euation variable
	float q2;//the negative quad equation variable
	
	cout<<"enter A number: "<<endl;
	cin>>a;//the A value the user inputed
	cout<<"enter B number: "<<endl;
	cin>>b;// the B value the user inputed
	cout<<"enter C number: "<<endl;
	cin>>c;//the C value the user inputed
	x = pow(b,2) - 4*(a)*(c); 
	if(x < 0)//if solution is less then 0
	{
		cout<<"no real solution";
	}
	else
	{//if the solution is not 0
	
	q1 = (-b + (sqrt(x)))/(2*a);//the positve quad euation variable
	q2 = (-b - (sqrt(x)))/(2*a);//the negative quad equation variable
	cout<<" the first root: "<<q1<<endl;//prints the first root
	cout<<"the second root: "<<q2<<endl;//prints the second root
    }



		
		
}
	  

