#include<stdio.h>
int main(){

int i, n1=0,n2=1,t,sum;
scanf("%d",&t);

printf("%d\n%d\n",n1,n2);


for(i=2; i<=t-1; i++){
    sum=n1+n2;
    printf("%d\n",sum);

    n1=n2;
    n2=sum;

}


return 0;
}



#include <iostream>
using namespace std;
int main(){
    int n;
    int fib[46];

    cin >> n;

    fib[0] = 0;
    fib[1] = 1;

    cout << fib[0] << " " << fib[1] << " ";

    for(int i = 2; i < n; i++){
            fib[i] = fib[i-1] + fib[i-2];
            if(i == (n-1))
                 cout << fib[i];
            else
                cout << fib[i] << " ";
    }

    cout << "n";
    return 0;
}
