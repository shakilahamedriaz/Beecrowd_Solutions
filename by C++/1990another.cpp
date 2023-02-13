#include<bits/stdc++.h>
using namespace std;
int main(){


int n; cin>>n;

while( n!=0 && n<1000){


if(n>=500){

    if(n>500 && n<1000){

       cout<< "CM";
        n=n-900;
    }
    else{

       cout<< "D";
       n=n-500;

    }
}
else if(n<500 && n>100){

     if(n>=400 && n<500){

        cout<< "CD";
        n=n-400;
     }
     else{

        cout<< "C";
        n=n-100;


     }
}
else if(n<50 && n>10){

    if(n>=40){

        cout<< "XL";
        n=n-40;
    }
    else{

        cout<< "X";

        n=n-10;
    }
}
else if(n<10 && n>=5){

     if(n==9){

        cout<<  "IX";
        n=n-9;

     }else{

        cout<< "V";
        n=n-5;

     }
}else{

  if(n>=4 && n<5){

    cout<< "IV";
    n=n-4;

  }else{

    cout<< "I";
  }

}

cout<<endl;

}






    return 0;
}
