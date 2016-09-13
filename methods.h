/*
 * methods.h
 *
 *  Created on: Aug 10, 2014
 *      Author: Venkateshwar
 */

#ifndef METHODS_H_
#define METHODS_H_




#endif /* METHODS_H_ */
#include<string>
using namespace std;


string caesar(string s,int k, int c);

string vigenere(string s,string k, int c);

int dis_alg(int choice);

int display();

template<typename T>
T read_key(int& alg);

void show();
void c(string msg);
