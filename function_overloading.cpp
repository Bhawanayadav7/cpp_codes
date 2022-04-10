
#include<iostream>  //function overloading concept
using namespace std;


// Calculate the volume of a cylinder
int volume(double r, int h){
    return(3.14 * r *r *h);
}

// Calculate the volume of a cube
int volume(int a){
    return (a * a * a);
}

// calculate the volume of cuboid
int volume (int l, int b, int h){
    return (l*b*h);
}

int main(){
    cout<<"The volume of cylinder is "<<volume(4,5)<<endl;
    cout<<"The volume of cube is "<<volume(2)<<endl;
    cout<<"The volume of cuboid is "<<volume(8,9,3)<<endl;
    return 0;
}

