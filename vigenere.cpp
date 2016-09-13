/*
 * vigenere.cpp
 *
 *  Created on: Aug 10, 2014
 *      Author: Venkateshwar
 */

#include<iostream>
#include<string>
#include<fstream>
#include "methods.h"

using namespace std;

string vigenere( string s,string key,  int c) {
	int l,j=0;
	l=key.length();

	if(c==1){


			for(uint i=0;i<s.length();i++)
			{
				char c=s[i];
				{
					s[i]=c+key[j];
					j=(j+1)%l;
				}
			}cout<<s;
		}



	else if(c==2)
	{
		for(uint i=0;i<s.length();i++)
		{
			char c=s[i];
			{
				s[i]=c-key[j];
				j=(j+1)%l;
			}

		}
		cout<<s;
	}

	return s;
}
