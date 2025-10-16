// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
struct A{
float x;
float y;
};
int main(){
    A point[7]={ {1,4},
                 {-7,-4},
                 {-4,6},
                 {4,5},
                 {6,-9},
                 {1,7},
                 {2,4}
    };
    int count=0;
    for(int i=0;i<7;i++){
     
    if(point[i].x>=0 and point[i].y>=0){
    cout<<  "point "<<i+1<<point[i].x<<" "<<point[i].y<<endl;
    
    count=count+1;
    }}
    cout<<"number of points in first quadrant"<<count;
    

    return 0;
}
