#include<iostream>
using namespace std;
int main()
{
	int size,a,loc,temp, max;
	cout << "Enter the Size of an Array ==>  ";
	cin >> size;
	int arr[size];
	cout << "Enter "<< size <<" values :  ";
	for(int j=0; j<size; j++)
	{
		cin >> arr[j];
	}
	for(int i=0; i<size-1; i++)
	{
		max = arr[i];
		loc = i;
		for(int zz=0; zz<(3*size)/2; zz++)
		{
			cout << "__";
		}
			cout << endl;
		for(int k=i+1; k<size; k++)
		{
			if(arr[k]>max)
			{
				max = arr[k];
				loc = k;
			}
		}
		for(int j=0; j<size; j++)
		{
			cout << arr[j] << " |";
		}
		cout << endl;
		temp = arr[i];
		arr[i] = arr[loc];
		arr[loc] = temp;
		for(int zz=0; zz<(3*size)/2; zz++)
		{
			cout << "--";
		}
		cout << endl;
	}
	return 0;
}
