#include<bits/stdc++.h>
using namespace std;

string calString(string str)
{
    string fStr;
    int i=0, p, q;
    while(i<str.size()){
        while(i<str.size() && str[i]=='1'){
            for (i = 0; i < str.size(); i++){
                if (str[i] == '0')
                  p++;
                else
                  q++;
            }
        }
    }    
    
    if (p > q)
      for (i = 0; i < p - q; i++)
        fStr += "1";
	  else
      for (i = 0; i < p - q; i++)
        fStr += "0";    
    return fStr;    
}

int main()
{
    string str, fStr;
    cout<<"Enter the binary string : ";
    cin>>str;

    calString(str);

    if(fStr.size()>0)
        cout<<fStr;
    else
        cout<<"-1";   
    return 0;
}
