#include <iostream>

using namespace std;
int Partition(int arr[],int st,int en) {
  int last = st-1;
  int pivot = arr[en];
  for(int i =st;i<=en;++i) {

     if(arr[i] <= pivot) {

         swap(arr[i] , arr[++last]);
     }

  }
  return last;

}  // end partition function.



int quickSelect(int arr[],int st,int en,int k) {


    if(st>=en) return arr[st];
   int p =Partition(arr,st,en);
   if(p ==k) return arr[p];
   else if(p<k)
       return quickSelect(arr,p+1,en,k);
    else {
       return quickSelect(arr,st,p-1,k);
    }

}






int main()
{
  int arr[] = {2,3,6,88,1,45,73,2};
   cout <<quickSelect(arr,0,7,4);

    return 0;
}
