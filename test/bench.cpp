/* Created by kiki on 2023/2/13.
 **/
#include <bits/stdc++.h>
#include <nanobench.h>
using namespace std;
using namespace ankerl::nanobench;

void print()
{
	cout << "hello world!" << endl;
	new int[10];
}

int main()
{
	cout << "hello world!" << endl;
	// Bench().run("cout print", print);
	print();
}