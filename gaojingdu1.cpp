#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
	char al[100],bl[100];
	int a[100],b[100],c[100],lena,lenb,lenc,i,x;
	memset(a,0,sizeof(a));
	memset(b,0,sizeof(b));
	memset(c,0,sizeof(c));
	gets(al);
	gets(bl);

	lena=strlen(al);
	lenb=strlen(bl);

	for (i=0;i<=lena-1;i++) a[lena-i]=al[i]-48;
	for (i=0;i<=lenb-1;i++) b[lenb-i]=bl[i]-48;
	lenc = 1;
	x=0;
	while(lenc<=lena||lenc<=lenb)
	{
		c[lenc]=a[lenc]+b[lenc]+x;
		x=c[lenc]/10;
		c[lenc]%=10;
		lenc++;
	}
	c[lenc]=x;
	if(c[lenc]==0)
		lenc--;
	for(i=lenc;i>=1;i--)
		cout<<c[i];
	cout<<endl;

	return 0;
}
