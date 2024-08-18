#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{    vector<int>arr(5);
    for(int i=0;i<5;i++)
    {
    	cin>>arr[i];
	}
	ofstream fout;
	fout.open("omkar1234.txt");
	fout<<"given  array\n";
	for(int i=0;i<5;i++)
    {
    	fout<<arr[i]<<" ";
	}
	fout<<" \nsorted array was:\n";
	sort(arr.begin(),arr.end());
	for(int i=0;i<5;i++)
    {
    	fout<<arr[i]<<" ";
	}
	
//	ifstream fin;
//	fin.open("omkar.txt");
//	char c;
//	fin>>c;
//	while(fineol)
	fout.close();
	
}

