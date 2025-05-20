#include<stdio.h>
#include<math.h>

struct point{
    double x,y;
};

double calcDistance(double x1,double x2,double y1,double y2){
  double dist;
  dist=sqrt(((abs(x1-x2))*(abs(x1-x2)))+((abs(y1-y2))*(abs(y1-y2))));
  return dist;
}


int main(){

    double x1,y1,x2,y2;
    printf("Enter the x coordinate of the 1st cartesian point :\n");
    scanf("%lf",&x1);
    printf("Enter the y coordinate of the 1st cartesian point :\n");
    scanf("%lf",&y1);

    printf("Enter the x coordinate of the 2nd cartesian point :\n");
    scanf("%lf",&x2);
    printf("Enter the y coordinate of the 2nd cartesian point :\n");
    scanf("%lf",&y2);



    printf("The distance between two given points is : %lf",calcDistance(x1,x2,y1,y2));

    

    return 0;
}
