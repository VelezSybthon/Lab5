#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main()
{
	srand((unsigned)time(NULL));
    int grade, num, ques;
    int right=0; //正确的题目数 
    cout << "Please enter your grade?" << endl;
    cin >> grade;
    cout << "Please enter the number of questions?" << endl;
    cin >> num;
    if (grade<7&&grade>4) //5，6年级 
    {
    	double result3;
    	for(int i=0;i<num;i++) 
		{
			int a=rand()%4; //加减乘除号判断 
	    	double ran1=double(rand()) / 100;
	    	double ran2=double(rand()) / 100;
			if (a==0) //加法 
			{
				double sum=ran1+ran2;
				cout << ran1 << "+" << ran2 << "=" << endl;
				cin >> result3;
				if (result3==sum)
				{
					right+=1;
				}
			} 
			
			if (a==1) //减法 
			{
				double sub=ran1-ran2;
				cout << ran1 << "-" << ran2 << "=" << endl;
				cin >> result3;
				if (result3==sub)
				{
					right+=1;
				}
			}
				
			if (a==2) //乘法 
			{
				double mul=ran1*ran2;
				cout << ran1 << "×" << ran2 << "=" << endl;
				cin >> result3;
				if (result3==mul)
				{
					right+=1;
				}
			} 
			
			if (a==3) //除法 
			{
				double div=ran1/ran2;
				cout << ran1 << "÷" << ran2 << "=" << endl;
				cin >> result3;
				if (result3==div)
				{
					right+=1;
				}
			} 
		}
		
		int score = (100/num)*right;
    	cout << "End! Your score is " << score << "." << endl;	
	}

    return 0;
}
