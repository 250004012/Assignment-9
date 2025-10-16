#include <iostream>
using namespace std;
struct item{
    int id;
    float cost;
};

int main(){
item A[6]={{1,61.33},
           {2,23.34},
           {3,56.56},
           {4,44.44},
           {5,84.32},
           {6,78.90}
};
for(int i=4;i<6;i++){
    cin>>A[i].id>>A[i].cost;
}                  
for(int i=0;i<6;i++){
    if (A[i].cost>50){
        cout<<A[i].id<<" "<<A[i].cost<<endl;
    }
}


          
          
    return 0;
}
