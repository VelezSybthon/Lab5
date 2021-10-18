#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{
	srand((unsigned)time(NULL));
    int grade, num, ques, result;
    cout << "Please enter your grade?" << endl;
    cin >> grade;
    cout << "Please enter the number of questions?" << endl;
    cin >> num;
    if (grade<3&&grade>0)
    {
    	for(int i=0;i<num;i++) 
		{
			int a = rand() % 2; //????? 
	    	int ran1=rand()%100;
	    	int ran2=rand()%100;
			if (a==0) //?? 
			{
				int sum=ran1+ran2;
				cout << ran1 << "+" << ran2 << "=" << endl;
				cin >> result;
				if (result==sum)
				{
					cout << "Right!" << endl;
				}
				else cout << "Wrong!" << endl;
			} 
			
			if (a==1) //?? 
			{
				int sub=ran1-ran2;
				cout << ran1 << "-" << ran2 << "=" << endl;
				cin >> result;
				if (result==sub)
				{
					cout << "Right!" << endl;
				}
				else cout << "Wrong!" << endl;
			} 
		}
    	
	}

    return 0;
}

