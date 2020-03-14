#include<iostream>
#include<stdio.h>
#define n 5
using namespace std;
int a[n];
void xuat(){
	for(int i=0;i<n;i++)
		cout<<a[i];
		cout<<endl;
}
void Try(int i){
	for(int j=0;j<=1;j++)
	{
		a[i]=j;
		if(i==n-1) xuat();
		else Try(i+1);
	}
}

int main(){
	Try(0);
}
	

