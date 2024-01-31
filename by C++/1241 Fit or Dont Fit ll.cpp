#include<bits/stdc++.h>
using namespace std;

int main()
{   

    int n;
    cin>>n;
    while(n--)
    {
        long long int a,b;
        cin >>a >>b;

        string m,n;
        m=to_string(a);
        n=to_string(b);

        if(m.size()<n.size()) cout<< "nao encaixa"<<endl;
        else
        {
            
           for(i=(n-p),j=0;i<n;i++,j++){
                c[j]=a[i];
            }
            c[j]='\0';
            k=strcmp(c,b);
            if(k==0){
                printf("encaixa\n");
            }
            else{
                printf("nao encaixa\n");
            }
         
        }
    }
    return 0;
}