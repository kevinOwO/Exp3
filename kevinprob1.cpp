#include <iostream>

         using namespace std;
         
         
    void getElementsThenEvaluate(int arr[]){int S,L;
      
  double sum = 0.0, avg;
  
  L = S = arr[0];

  for (int i=0; i<10; i++){if(arr[i] > L){L = arr[i];
  
         }
         
  }

  for (int i=0; i<10; i++){ if(arr[i] < S){S = arr[i];
       }
       
  }

  for (int i=0; i<10; i++){
    sum += arr[i];
  }
  
  avg = sum / 10;
  
      cout<< endl ;
         cout<< " The smallest of the integers is : " << S << endl ;
         cout<< " The largest of the integers is : " << L << endl << endl ;
         cout<< " Total : "<< sum << endl ;
         cout<< " Average : "<< avg << endl ;
         
         }

int main() { int elem[10]; for (int i=0; i<10; i++){
      cout<<"Enter a number: ";
      cin>>elem[i];} 
  getElementsThenEvaluate(elem);
  return 0;
}
