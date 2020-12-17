//============================================================================
// Name        : disturbed.cpp
// Author      : hulejman
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

//n >= 3

#include <utility>
#include <vector>
#include <iostream>
#include <bits/stdc++.h>
#include <limits.h>
using namespace std;


int main() {
	int n;
	short int x;

	cin >> n;
	vector<int> ary;
	int count = 0;

	//unos polja
	for(int i = 0; i < n; ++i){
		cin >> x;
		ary.push_back(x);
	}

	ary.push_back(0);

	//if(ary[1] == 1 && ary[2] == 1)

	for(int i = 1; i < n; ++i){
			if(ary[i] == 0
					&& ary[i - 1] == 1
					&& ary[i + 1] == 1){
				ary[i + 1] = 0;
				++count;
			}
	}

	cout << count;

	return 0;
}
