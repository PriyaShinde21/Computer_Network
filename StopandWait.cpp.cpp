#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{
	int n,i;
	int frame[n];
	int delay;
	int time;
	int timeout=5;
	srand(time=0);
	cout<<"Enter No. of Frame: ";
	cin>>n;
	for(i=0;i<n;i++){
		cout<<"Enter "<<i+1<<" Frame ";
		cin>>frame[i];
		delay=rand()%10;
		if(timeout<delay){
			cout<<"Acknowledgment of Frame "<<i<<" received"<<endl;
		}
		else{
			cout<<"Wainting "<<endl;
		}
	}
	return 0;	
}
