#include <stdio.h>
#include <stdlib.h>
void main(){
    double matrix[3][4]={{2.5,-3.12,-4.03,-7.5},
                {0.61,0.71,-0.05,0.44},
                {-1.03,-2.05,0.87,-1.16}};
                
    for(int i = 0; i < 3 ; ++i){
        for(int j = 3; j >= 0; --j){
            matrix[i][j]/=matrix[i][0];
        }
    }


    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 4; j++){
            if( i + 1 < 3){
                matrix[i+1][j]-=matrix[0][j];
            }
        }
    }

    for(int i = 0; i < 3 ; ++i){
        for(int j = 3; j >= 0; --j){
            if(i+1<3){
                matrix[i+1][j]/=matrix[i+1][1];
            }
        }
    }

    for(int j = 0; j < 4; j++){
            matrix[2][j]-=matrix[1][j];
    }

    for(int j = 3; j >= 0; j--){
            matrix[2][j]/=matrix[2][2];
    }

    double x0,x1,x2;
    x2=matrix[2][3];
    x1=matrix[1][3]-matrix[1][2]*x2;
    x0=matrix[0][3]-matrix[0][2]*x2-matrix[0][1]*x1;

    printf("Числа:\nx0=%lf\nx1=%lf\nx2=%lf\n",x0,x1,x2);      
}
