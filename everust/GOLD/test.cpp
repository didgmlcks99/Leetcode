// CPP program to illustrate the
// list::remove() function
// #include <bits/stdc++.h>
#include <list>
#include <iostream>
#include <iterator>

using namespace std;

int main()
{
	// Creating a list
	list<int> demoList;

	// Add elements to the List
	demoList.push_back(10);
	demoList.push_back(20);
	demoList.push_back(20);
	demoList.push_back(30);
	demoList.push_back(40);

    list <int> :: iterator it;
    for(it = demoList.begin(); it != demoList.end(); ++it)
        cout << *it << " ";
    cout << '\n';

	// delete all elements with value 20
	demoList.remove(25);

    for(it = demoList.begin(); it != demoList.end(); ++it)
        cout << *it << " ";
    cout << '\n';


	return 0;
}
