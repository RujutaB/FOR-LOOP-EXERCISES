#include <iostream>
using namespace std;

int main() {
int multiply=1;
int n;
cout<<"input any num you want a factorial of : "<<endl;
cin>>n;
cout<<"the factorial of "<<n<<" is : "<<endl;
for(int i=1;i<=n;i++){
    multiply=multiply*i;
    }
    cout<<multiply;
}
