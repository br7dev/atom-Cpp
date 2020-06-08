// #include <stdio.h>
//  int main() {
//    int m, n, p, q, c, d, k, sum = 0;
//    int first[10][10], second[10][10], multiply[10][10];
//    printf("Enter number of rows and columns of first matrix\n");
//    scanf("%d%d", &m, &n);
//    printf("Enter elements of first matrix\n");
//    for(c = 0; c < m; c++)
//       for (d = 0; d < n; d++)
//             scanf("%d", &first[c][d]);
//    printf("Enter number of rows and columns of second matrix\n");
//    scanf("%d%d", &p, &q);
//    if (n != p)
//       printf("The multiplication isn't possible.\n");
//    else {
//       printf("Enter elements of second matrix\n");
//       for (c = 0; c < p; c++)
//          for (d = 0; d < q; d++)
//             scanf("%d", &second[c][d]);
//    for (c = 0; c < m; c++) {
//       for (d = 0; d < q; d++) {
//          for (k = 0; k < p; k++) {
//             sum = sum + first[c][k]*second[k][d];
//          }
//          multiply[c][d] = sum; sum = 0;
//        }
//     }
// printf("Product of the matrices:\n");
//  for (c = 0; c < m; c++) {
//     for (d = 0; d < q; d++)
//     printf("%d\t", multiply[c][d]);
//     printf("\n");
// }
// }
//  return 0;
//  }






8.2: Write a program to perform matrix multiplication using CUDA.
SOURCE CODE:
%%cu
#include<cuda.h>
#include<stdio.h>
#include<stdlib.h>
#include <cuda_runtime.h>
cudaEvent_t start, stop;
float elapsed_time_ms;
__global__ void
MatrixMulKernel(float *Md, float *Nd, float *Pd, int Width) {
    //2D Thread ID
    int tx = threadIdx.x + blockIdx.x*blockDim.x;
    int ty = threadIdx.y + blockIdx.y*blockDim.y;
    //Pvalue stores the Pd element that is computed by the thread
    float Pvalue = 0;
    for(int k = 0; k < Width ; ++k){
      float Mdelement = Md[ty*Width + k];
      float Ndelement = Nd[k*Width + tx];
      Pvalue += (Mdelement*Ndelement);
   }
   Pd[ty*Width + tx] = Pvalue;
}
void MatrixMultiplication(float *M, float *N, float *P, int Width) {
   int size = Width*Width*sizeof(float);
   float *Md, *Nd, *Pd;
   int k = 100; int l = 100;
   cudaEventCreate(&start);
   cudaEventCreate(&stop);
   //Transfer M and N to device memory
   cudaMalloc((void**)&Md, size);
   cudaMemcpy(Md,M,size,cudaMemcpyHostToDevice);
   cudaMalloc((void**)&Nd, size);
cudaMemcpy(Nd,N,size,cudaMemcpyHostToDevice);
//Allocate P on the device
cudaMalloc((void**)&Pd,size);
//Setup the execution configuration
dim3 dimBlock((k-1)/Width+1,(l-1)/Width+1);
dim3 dimGrid(Width,Width);
cudaEventRecord(start, 0);
// use same timing*
//Launch the device computation threads!
MatrixMulKernel<<<dimGrid,dimBlock>>>(Md,Nd,Pd,Width);
//Transfer P from device to host
cudaMemcpy(P,Pd,size,cudaMemcpyDeviceToHost);
cudaEventRecord(stop, 0);
// measure end time
cudaEventSynchronize(stop);
cudaEventElapsedTime(&elapsed_time_ms, start, stop );
//Free device matrices cudaFree(Md);
cudaFree(Nd);
cudaFree(Pd);
}
int main(void) {
    void MatrixMultiplication(float *, float *, float *, int);
    const int Width= 100;
    float M[Width*Width], N[Width*Width], P[Width*Width];
    for(int i = 0; i < (Width*Width) ; i++){
      M[i] = 5; N[i] = 5; P[i] = 0;
   }
   MatrixMultiplication(M, N, P, Width);
   for(int i = 0; i < (Width*Width) ; i++){
      printf("%f \t", P[i]);
   }
   printf("\nComputation time of GPU: %f ms.\n This is a change", elapsed_time_ms); // exe. time
return 0;
}
