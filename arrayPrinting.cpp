#include <iostream>
char ar[2][5]={
    {'z','x','y','w','v'},
    {'a','b','c','d','e'}
};

int x, y;
void showMap(int H, int W){
    for(y=0;y<H;y++){
        for(x=0;x<W;x++){
            std::cout<<ar[y][x];
        }
            std::cout<<"\n";
    }
    std::cout<<"Y: "<<y<<"\n"<<"X: "<<x<<"\n";
}

int main(){
    showMap(2,5);
}