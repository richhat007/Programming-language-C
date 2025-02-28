#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int id;
	char name[15];
	char sex;
	char add[25];
	float math,eng,kh;
	float avg;
	cout<<"Enter ID        :";cin>>id;
	cout<<"Enter Name      :",cin>>name;
	cout<<"Enter Sex       :";cin>>sex;
	cout<<"Enter Address   :";cin>>add;
	
	cout<<"Enter Math      :";cin>>math;
	cout<<"Enter English   :";cin>>math;
	cout<<"Enter khmer     :";cin>>math;
	
	avg = (math + eng + kh)/3;
	
	cout<<setw(12)<<"ID"<<
	setw(15)<<"Name"<<
	setw(15)<<"Sex"<<
	setw(15)<<"Address"<<
	setw(15)<<"Average"<<endl;
	
	
	cout<<setw(12)<<id<<
	setw(13)<<name<<
	setw(15)<<sex<<
	setw(14)<<add<<
	setw(17)<<avg<<endl;
	
	return 0;
}