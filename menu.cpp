/*
 * menu.cpp
 *
 *  Created on: Aug 24, 2014
 *      Author: Venkateshwar
 */
#include<iostream>
#include<ostream>
#include<cstdlib>
#include"methods.h"
#include<string>
using namespace std;
int att=3;
string S="WELCOME TO THE CIPHER";
void show(){

	cout<<"\t\t***************************************************"<<endl;
	cout<<"\t\t\t\t";
	cout<<S<<endl;

	cout<<"\t\t***************************************************"<<endl;
}
int display()
{
	int choice;
	cout<<"Enter your choice"<<endl;
	cout<<"1. Encode\n2. Decode"<<endl;
	cin >> choice;
	if(choice==1||choice==2)
		return choice;

	else {
		cout<<"You have "<<--att<<" more attempts left"<<endl;
		if(att>0){
			cout<<"Enter a valid choice";
			return display();
		}
		else{
			cout<<"You have exceeded the maximum number of attempts";
			exit(0);
		}
	}
}

int dis_alg(int choice)
{
	int alg;
	cout<<"Enter the algorithm to be employed"<<endl;
	cout<<"1. Caesar Cipher."<<endl;
	cout<<"2. Vigenère Cipher."<<endl;
	cin>>alg;
	if(alg!=1||alg!=2)
		return alg;
	else {
			cout<<"You have "<<att<<" number of attempts left"<<endl;
			if(att>0){
				cout<<"Enter a valid choice";
				return dis_alg(choice);
			}
			else{
				cout<<"You have exceeded the maximum number of attempts";
				exit(0);
			}
		}
}
