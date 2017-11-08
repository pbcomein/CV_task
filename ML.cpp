#include<stdlib.h> 
#include<iostream>
#include<vector> 

using namespace std;

int main() 
{
	int I;
	double mean,mean_sum=0,variance,variance_sum=0;
	vector<double>X;
	cout<<"请输入I的值:"<<endl;
	cin>>I;
	for(int i=0;i<I;i++)
		X.push_back(rand());
	for(int i=0;i<I;i++)
		mean_sum=mean_sum+X[i];
	mean=mean_sum/I;

	
	for(int i=0;i<I;i++)
		variance_sum=variance_sum+(X[i]-mean)*(X[i]-mean);
	variance=variance_sum/I;
	cout<<"期望和方差"<<mean<<","<<variance<<endl;
	return 0;
}
