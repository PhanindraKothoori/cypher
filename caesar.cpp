/*
 * caesar.cpp
 *
 *  Created on: Aug 10, 2014
 *      Author: Venkateshwar
 */
#include<iostream>
#include<fstream>
#include "methods.h"
#include<string>
using namespace std;

string caesar(string s,int k, int c)
{

	if(c==1)
	{

			for(unsigned int i=0;i<s.length();i++)
			{
				s[i]=s[i]+(k%128);
			}



	}

	else{

			for(unsigned int i=0;i<s.length();i++)
			{
				s[i]=s[i]-(k%128);
			}


	}
	return s;
}
