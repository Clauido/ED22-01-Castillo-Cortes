#include<stdio.h>
#include<opencv2/opencv.hpp>
using namespace cv;

int main(int argc, char** argvc) {
    printf("Hola mundo");
    Mat image;
    image = imread("C:/Datos Taller/tipos-de-rostro.jpg");
    if(!image.data){
        printf("No imagen data \n");
        return -1;
    }
    
    namedWindow("Display Image",WINDOW_AUTOSIZE);
    imshow("Display Image",image);
    waitKey(0);
    return (0);
}
