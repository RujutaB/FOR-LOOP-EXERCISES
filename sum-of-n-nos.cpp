//DISPLAY N TERMS OF NATURAL NUMBERS AND THEIR SUM

#include <iostream>

using namespace std;

int main()
{
    int n;
    int a=0;
    cout<<"how many natural nos do you want : ";
    cin>>n;
    cout<<"the first "<<n<<" natural nos are:"<<endl;
   for(int i=1;i<=n;i++){
       cout<<i<<endl;
       a=a+i;
   }
   cout<<"the sum of first "<<n<<" natural nos is: "<<a<<endl;
}
