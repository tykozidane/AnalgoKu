/*
Nama    : Tyko Zidane Badhawi
NPM     :140810180031
Kelas   : A
*/
#include <iostream>
#include<conio.h>

using namespace std;

int data[100],data2[100];
int n;

void tukar(int a, int b)
{
	int t;
	t = data[b];
	data[b] = data[a];
	data[a] = t;
}
void selection_sort()
{
	int pos,i,j;
	for(i=1;i<=n-1;i++)
	{
	    pos = i;
	    for(j = i+1;j<=n;j++)
	    {
		   if(data[j] < data[pos]) pos = j;
		}
        if(pos != i) tukar(pos,i);
    }
}

int main()
{
	cout<<"\nEnter the number of data element to be sorted: ";cin>>n;
	for(int i=1;i<=n;i++)
	{
		cout<<"Enter element "<<i<<": ";
		cin>>data[i];
		data2[i]=data[i];
	}
	
	selection_sort();
	cout<<"Sorted Data: "<<endl;
	for(int i=1; i<=n; i++)
	{
	  	cout<<" "<<data[i];
	}
	
	
}