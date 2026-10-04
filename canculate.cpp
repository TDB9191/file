#include<bits/stdc++.h>
using namespace std;
double add(double x,double y){
	return x+y;
}

double sub(double x,double y){
	return x-y;
}

double times(double x,double y){
	return x*y;
}

double ex(double x,double y){
	return x/y;
}

double canculate(double x,double y,double (*pr)(double,double)){
	return pr(x,y);
}
int main(){
	double x,y;
	cin>>x>>y;
	double (*pf[4])(double,double)={add,sub,times,ex};
	for(int i=0;i<4;i++){
		cout<<canculate(x,y,pf[i])<<endl;
	}
	return 0;
}


