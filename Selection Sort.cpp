
void selection_sort_ascending(int arr[], int size)
{
	int min, loc, temp;
	for(int i=0; i<size-1; i++)
	{
		min = arr[i];
		loc = i;
		for(int zz=0; zz<(3*size)/2; zz++)
		{
			cout << "__";
		}
			cout << endl;
		for(int k=i+1; k<size; k++)
		{
			if(arr[k]<min)
			{
				min = arr[k];
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
}
