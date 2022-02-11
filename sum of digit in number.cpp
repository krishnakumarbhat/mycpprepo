#include<bits/stdc++.h>
using namespace std;

int main(){
	int a,y=0,v,sum=0;
	cin>>a;
	for(int i=a;i>0;i--){
			cin>>v;
			sum=0;
			while(v>0){
			y=v%10;
			v=v/10;
			sum = sum+y;
			
		}
		cout<<sum<<endl;
		}
	}

