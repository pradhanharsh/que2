#include<iostream>
using namespace std;

int main()
{
	int pro[4]={0,1,2,3};
	int bur[4]={12,5,7,10};
	int a,b;
	
	for(a=0;a<4;a++)
	{
		for(b=a+1;b<4;b++)
		{
			if(bur[a]>bur[b])
			{
				int t;
				t=bur[a];
				bur[a]=bur[b];
				bur[b]=t;
				
				int p;
				p=pro[a];
				pro[a]=pro[b];
				pro[b]=p;
			}
		}
		
	}
}

