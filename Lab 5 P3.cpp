#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main()
{
	srand((unsigned)time(NULL));
    int grade, num, ques;
    int right=0; //��ȷ����Ŀ�� 
    cout << "Please enter your grade?" << endl;
    cin >> grade;
    cout << "Please enter the number of questions?" << endl;
    cin >> num;
    if (grade<7&&grade>4) //5��6�꼶 
    {
    	double result3;
    	for(int i=0;i<num;i++) 
		{
			int a=rand()%4; //�Ӽ��˳����ж� 
	    	double ran1=double(rand()) / 100;
	    	double ran2=double(rand()) / 100;
			if (a==0) //�ӷ� 
			{
				double sum=ran1+ran2;
				cout << ran1 << "+" << ran2 << "=" << endl;
				cin >> result3;
				if (result3==sum)
				{
					right+=1;
				}
			} 
			
			if (a==1) //���� 
			{
				double sub=ran1-ran2;
				cout << ran1 << "-" << ran2 << "=" << endl;
				cin >> result3;
				if (result3==sub)
				{
					right+=1;
				}
			}
				
			if (a==2) //�˷� 
			{
				double mul=ran1*ran2;
				cout << ran1 << "��" << ran2 << "=" << endl;
				cin >> result3;
				if (result3==mul)
				{
					right+=1;
				}
			} 
			
			if (a==3) //���� 
			{
				double div=ran1/ran2;
				cout << ran1 << "��" << ran2 << "=" << endl;
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
