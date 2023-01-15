#include <iostream>
using namespace std;

int main(){
	
	int n,m;
	long int pow_check = 1;
	cin>>n>>m;
	if (n==1){
		pow_check |=m;
	}

	 

	while(pow_check<m)
	 	pow_check *=n;

	if(pow_check == m){
	 	cout<<"GOOD"<<endl;
	 }

	else{
	 	cout<<"BAD"<<endl;
	 }

	return 0;
}
