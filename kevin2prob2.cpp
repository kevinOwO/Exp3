#include<iostream>

using namespace std;

int main()

    {

int prvA[7], prvB[7], prvC[7], i;

    for (i=0;i<7;i++){
cout<<" Enter the temperature for province A on Day"<< i+1 <<" : ";
cin>>prvA [i] ;

     }


    for (i=0;i<7;i++){
cout<<"Enter the temperature for province B on Day"<< i+1 <<": ";
cin>> prvB [i];

      }

      for (i=0;i<7;i++){
cout<<"Enter the temperature for province C on Day"<< i+1 <<": ";
cin>>prvC[i];

             }


             for (i=0;i<7;i++){
cout<<"The temperature for province A Day"<<i+1<<": ";
cout<<prvA[i] <<endl;
}

 for (i=0;i<7;i++){
cout<<"The temperature for province B Day"<<i+1<<": ";
cout<<prvB[i] <<  endl ;
}

              for (i=0;i<7;i++){
cout<<"The temperature for province C Day"<<i+1<<": ";
cout<<prvC[i]  << endl ;
}

return 0;


       }
