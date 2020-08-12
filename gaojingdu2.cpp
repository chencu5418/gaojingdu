#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
	int a[256],b[256],c[256],lena,lenb,lenc,i;
	char n[256],n1[256],n2[256];
	memset(a,0,sizeof(a));
	memset(b,0,sizeof(b));
	memset(c,0,sizeof(c));
	gets (n1);
	gets (n2);
	if(strlen(n1)<strlen(n2)||(strlen(n1)==strlen(n2)&&strcmp(n1,n2)<0))
	{
		strcpy(n,n1);
		strcpy(n1,n2);
		strcpy(n2,n);
		cout<<"-";
	}
	lena=strlen(n1);
	lenb=strlen(n2);
	for (i=0;i<=lena-1;i++) a[lena-i]=int(n1[i]-48);
	for (i=0;i<=lenb-1;i++) b[lenb-i]=int(n2[i]-'0');
	//cout<<n1[0]<<n1[1]<<n1[2]; 
	//cout<<a[1]<<a[2]<<a[3];	
	i=1;
	while(i<=lena||i<=lenb)
	{
		if (a[i]<b[i])
		{
			a[i]+=10;
			a[i+1]--;
		}
		c[i]=a[i]-b[i];
		i++;
	}
	lenc=i; 
	while ((c[lenc]==0)&&(lenc>1)) lenc--;
	for (i=lenc;i>=1;i--) cout<<c[i];
	cout<<"袒숭괩록！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！두두두두두두두두두두두두두두두두두두두두두두두두두두두두두두두두두두두두두두두두두두두두두두두두두두두두두두두두두두두두두두두두두두두두두두두두두두두두두두두두두두두두두두두두두두두두두두두두두두두두두";
	cout<<endl;
	return 0;
}
