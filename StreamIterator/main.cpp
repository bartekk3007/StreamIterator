#include <iostream>
#include <algorithm>
#include <iterator>
#include <fstream>
#include <vector>

using namespace std;

int main()
{

	ifstream is("input.txt");
	ofstream os("output.txt");

	istream_iterator<int> ii(is);
	istream_iterator<int> eoi;

	ostream_iterator<int> oi(os, "\n");

	vector<int> v1(ii, eoi);
	sort(v1.begin(), v1.end(), greater<int>());

	copy(v1.begin(), v1.end(), oi);

	is.clear();
	is.seekg(0);
	istream_iterator<int> iic(is);

	copy(iic, eoi, oi);

	return 0;
}