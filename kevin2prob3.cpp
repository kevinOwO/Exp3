#include<iostream>


using namespace std;
int main()

{
    int size,i,k,l;
     char character[10];

cout<<" Enter array size " << endl;
cin>> size ;

cout<<"Enter "<< size << " Characters " << endl;

for (i=0;i<size;i++){

    cin>>character[i];
                         }
		k=i-1;
	i=0;
while(i<k)
{
          l=character[i];
            character[i]=character[k];
            character[k]=l;
i++;
k--;
}

 cout<< "The array size is : " << size << endl; 

       cout<< "The output in reverse is : " ;

for (i = 0;i<size;i++){

cout<< character[i]<<" "; }



return 0;


}
