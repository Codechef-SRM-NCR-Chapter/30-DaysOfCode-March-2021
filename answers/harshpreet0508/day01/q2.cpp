/* Print the pattern

    *
   **
  ***
 ****
*****          

*/

#include <iostream>
#include<conio>

using namespace std;
int main()
{
  int i,j,s;
  clrscr();
  for(i=5;i>=1;i--)
  {
    for(s=1;s<i;s++) cout<<' ';
    for(j=5;j>=i;j--) cout<<'*';
    cout<<endl;
  }
   return 0;
}
