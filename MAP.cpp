#include<iostream>
#include<vector> 
using namespace std;

int main() 
{
	int I;
	double alpha,beta,gamma,delta;
	double mean,mean_sum=0,variance,variance_sum=0;
	vector<double>X;
	cout<<"请输入I的值:"<<endl;
	cin>>I;
	cout<<"请输入alpha的值(大于0):"<<endl;
	cin>>alpha;
	cout<<"请输入beta的值（大于0）:"<<endl;
	cin>>beta;
	cout<<"请输入gamma的值（大于0）:"<<endl;
	cin>>gamma;
	cout<<"请输入delta的值:"<<endl;
	cin>>delta;
	for(int i=0;i<I;i++)
		X.push_back(1);
	for(int i=0;i<I;i++)
		mean_sum=mean_sum+X[i];
	mean=(mean_sum+gamma*delta)/(I+gamma);

	
	for(int i=0;i<I;i++)
		variance_sum=variance_sum+(X[i]-mean)*(X[i]-mean);
	variance=(variance_sum+2*beta+gamma*(delta-mean)*(delta-mean))/(I+3+2*alpha);
	cout<<"期望和方差"<<mean<<","<<variance<<endl;
	return 0;
}
