#include <bits/stdc++.h>
#include<cstdlib>
using namespace std;
bool Grade56();
int main(){
	bool a=Grade56();
	if(a==true){
		cout<<"true"<<endl;
	}else{
		cout<<"false"<<endl;
	}
	return 0;
}
bool Grade56(){
	srand((double)time(0));
	double num1= (double)(rand()) / 100;
	double num2= (double)(rand()) / 100;//0?100??? 
	double symbol=rand()%4;// 0??+,1??-,2??*,3??/ 
	double result;
	if(symbol==0){
		result=num1+num2;
		cout<<num1<<"+"<<num2<<"=?"<<endl;
	}else if(symbol==1){
		result=num1-num2;
		cout<<num1<<"-"<<num2<<"=?"<<endl;
	}else if(symbol==2){
		result=num1*num2;
		cout<<num1<<"×"<<num2<<"=?"<<endl;
	}else{
		result=num1/num2;
		cout<<num1<<"÷"<<num2<<"=?"<<endl;
	}
	double input;
	cin>>input;
	if(input==result){
		return true;
	}else{
		return false;
	}
}

