#include<stdio.h>
#include<stdlib.h>

int main(){
   int *arr;
   int i,n;
   
   arr=(int*)calloc(n,sizeof(int));
   
   printf("enter the n value:\n");
   scanf("%d",&n);
   
   if (arr==NULL){
       printf("memory allocation is falied");
   }
   
   else{
       for(i=0;i<n;i++){
           
       
           printf("the values inthe aray aree :%d\n",arr[i]);
       }
   }
   
   free(arr);
   
   return 0;
   
}
   
 
   
  

