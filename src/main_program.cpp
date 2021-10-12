#include <bits/stdc++.h>
using namespace std;

int main()
{
	vector<int> arr = { 1, 2, 3'0, 4};
	double answer = 0;

	for (int i : arr)
	{
		answer += i;
	}

	cout << answer << endl;
	//for (int i : arr ) cout << i << ", ";

	return 0;
}
