// WAP to add the elements of an array of size 5.
#include <iostream>
using namespace std;
int main()
{
	int num[5] = {2,3,4,5,8};
		int sum = 0;
		for(int i = 0;i<5;i++)
		sum+=num[i];
		cout<<sum<<endl;
	return 0;
}


