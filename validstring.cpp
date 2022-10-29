#include <bits/stdc++.h>
#include<vector>
using namespace std;

int main()
{
  int T;
  cin>>T;
  while(T)
  {
    string a;
    cin>>a;
    bool check = true;
    bool check_c = true;
    
    
    string s = '(' + a + ')';
    int len = s.length();
    vector <string> container;
    
    
    
    
      for(int i = 0 ; i < len ; i++ )
      {
        if(len%2 == 1)
        {
          check = false;
          break;
        }
        if(s[i] == '(')
          container.push_back("(");
        else
        {
          if(container.size() != 0)
            container.pop_back();
          else
          {
            check_c = false;
            break;
          }
        }
      }
    
    if(container.empty() && check_c == true && len%2 ==0)
    check = true;
    else
    check = false;
    
    if(check == true)
    {
      cout<<"Yes"<<endl;
    }
    else
    {
      cout<<"No"<<endl;
    }
    T--;
  }
  return 0;
}
