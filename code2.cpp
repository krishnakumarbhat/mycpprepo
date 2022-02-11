#include<bits/stdc++.h>
using namespace std;

int main(){
	cout<< 7/2 *3<<endl;
	cout<< 3*7/2 <<endl;
	//depend on operation precidence
	// int,char ,long int , long long int ,float,double
	// -10^9 < int <10^9
	// -10^12 < long int <10^12
	// -10^18 < long int <10^18
	int mx = INT_MAX;
	cout<< mx+1;
	int a= 1000000;
	int b =10000;
	long long c=a*1LL*b;
	cout<< c<<endl;
	// don't us double,float accuracy will decrease if we use larf=ge number
	// use << fixed in 
	// you can conver long long int in initialization or in execuing while giving output like 1ll
	cout << (a>b) || (a<b) ;
	//always variable inside scope will not be used outside it just like localvariable
	{
		int n=3;
		cout<<n<<endl;

	} 
	int n=2;
	cout<<n<<endl;
	//for loop faster than while in pyton
  	for(int i =0;i<=9;++i){
  		cout<< i<<endl;
  	}
  	for(int i=9;i<=12;cout<<i++<<endl){

  	}
  	// break and continue will remove ypu out from for loop only once in nested if
  	while (true){
  	int x;
  	cin>> x;
  	if(x==42){
  		break;
  	}
  	cout<<x<<endl;
	}

	{
    int o,l;
    string c[]={"","one","two","three","four","five","six","seven","eight","nine"};
    cin>>o>>l;
    for(int i=o;i<=l;i++)
        cout<<((i<=9)?c[i]:((i%2==0)?"even":"odd"))<<endl;
}
	
	


}

