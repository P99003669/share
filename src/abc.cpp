#include<iostream>
#include<bits/stdc++.h>
#include<regex>
#include<stdio.h>
using namespace std;

bool check_email(string x)
{
	const regex pattern("(\\w+)(\\.|_)?(\\w*)@(\\w+)(\\.(\\w+))+");
	return regex_match(x,pattern);
}
int check_special(string y)
{
	bool count = true;
	for(int i=0;i<y.length();i++)
	{
		if((y[i]>=65 && y[i]<=90) || (y[i]>=97 && y[i]<=122))
        {
        	continue;
		}
		else
		{
			count = false;
			
		}
	}
    if(count==false)
    {
        cout<<"String contains special character"<<endl;
    }
    else{
        cout<<"Valid"<<endl;
    }

    return 0;
    
}
int main()
{
    string name,Org_name,email_id;
    cin>>name;
    bool check = check_special(name);
    if(check==false)
    {
    	cout<<"Not valid"<<endl;
	}
	else
	{
		cout<<"valid"<<endl;
	}
    

    
    
}