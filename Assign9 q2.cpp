// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
struct color{
    int red;
    int green;
    int blue;
};

int main(){
    color A[5]={
                {122,44,220},
                {134,43,76},
                {132,65,34},
                {231,53,43},
                {23,76,101},
    };
    for(int i=0;i<3;i++){
        A[i].red=255-A[i].red;
        A[i].green=255-A[i].green;
        A[i].blue=255-A[i].blue;
    };
    
   for (int i=0;i<5;i++){
       cout<<A[i].red <<" "<<A[i].green<<" "<<A[i].blue << endl;
   }          
    return 0;
}
