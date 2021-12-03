/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
   int sub1;
int sub2;
int sub3;
int sub4;
int sub5;
int sub6;
float obt;
float tot;
float per;

cout<<"Enter marks of subject#1: ";
cin>>sub1;
cout<<"Enter marks of subject#2:";
cin>>sub2;
cout<<"Enter marks of subject#3:";
cin>>sub3;
cout<<"Enter marks of subject#4:";
cin>>sub4;
cout<<"Enter marks of subject#5:";
cin>>sub5;
cout<<"Enter marks of subject#6:";
cin>>sub6;
cout<<"Enter total Marks";
cin>>tot;
string name;
cout<<"Enter Your Name"<<endl;
cin>>name;
obt =sub1+sub2+sub3+sub4+sub5+sub6;
per =obt/tot*100;
cout<<"STUDENT NAME: "<<name;
cout<<"Your Per is: "<<per;
}
