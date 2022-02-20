#include<bits/stdc++.h>
using namespace std;

int main(){
	int a;
	double b,c;
	cin>>a>>b;
	c =b-a-0.5;
	if ((a%5== 0) && (b>a)){

	if (b>a){
		cout<<c<<endl;
	}
	else{
		cout<<b
		<< std::fixed<<endl;
	}

	}
	else{
		cout<< std::fixed
		<< b<<endl;
	}
}


            
            // << std::setprecision((modf(b, &mod) != 0.0) ? 2 : 0)
            // << avg
            // << std::endl;
// why can't i use '%' in float 

