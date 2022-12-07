#include<stdio.h>

int main(){
    int height,base;
    float area;

    printf("Enter height :");
    scanf("%d",&height);

    printf("Enter base :");
    scanf("%d",&base);

    area=(height*base)/2;

    printf("Area of the traingle:%.2f ",area);

    return 0;
}