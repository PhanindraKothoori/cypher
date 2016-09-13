/*
 * cypher.cpp
 *
 *  Created on: Aug 8, 2014
 *      Author: Venkateshwar
 */

//include section
#include<iostream>
#include<string>
#include "methods.h"
#include<fstream>
#include<windows.h>
using namespace std;

int main()

{
	int choice, alg, attempt=3;
	char infile[15];
	char outfile[15];
	int k;
	string key, msg;

	show();
	choice=display();
	alg = dis_alg(choice);


	if(alg==1)
	{
		cout<<"Enter the key for Caesar cipher(preferably an integer)"<<endl;
		cin>>k;
	}

	else if(alg==2)
	{
		cout<<"Enter the key for Vigenère cipher(preferably a word or a phrase)"<<endl;
		cin>>key;
	}

	ifstream myReadFile;
	ofstream myWriteFile;

	{
		file:
		{
			cout<<"Enter the file to be ciphered or deciphered"<<endl;
			cin>>infile;
			myReadFile.open(infile,ios::in);

		}

		string abc;

		if(myReadFile.is_open())

		{
			cout<<"Enter the file in which the processed message is to be saved"<<endl;
			cin>>outfile;
			myWriteFile.open(outfile,ios::out);
			if(alg==1)
			{
				while(!myReadFile.eof())
				{
					getline(myReadFile, abc);
					abc=caesar(abc, k, choice);
					myWriteFile<<abc;
				}
			}
			else
			{
				while(!myReadFile.eof()){
					getline(myReadFile, abc);
					abc=vigenere(abc, key, choice);
				myWriteFile<<abc;
				}

			}
		}
		else
		{	--attempt;
		if(attempt>0)
		{cout<<"You have ";
		cout<<attempt;
		cout<<" more attempts left"<<endl;
		cout<<"Enter a valid filename"<<endl;
		goto file;}
		else
		{
			cout<<"You have exceeded the maximum number of attempts";
		}
		}
	}
	myReadFile.close();
	myWriteFile.close();
	return 0;
}

