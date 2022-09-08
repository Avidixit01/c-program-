//This is the program for union of two arrays.
#include<stdio.h>
int main(){

    int i,j,m,n,a[10],b[10],c[20],k=0;
    printf("enter the no of the element of first array\n");// size of array a
     scanf("%d",&m);
    for(i=0;i<m;i++){//Loop for entering elements of array a
         printf("enter the %d element:",i+1);
        scanf("%d",&a[i]);}
        printf("enter the element of second array");//sixe of array b
      scanf("%d",&n);
    for(i=0;i<n;i++){//Loop for entering elements of array b
        printf("enter the %d element:",i+1);
        scanf("%d",&b[i]);}
        // Union of arrays 
        for(i=0;i<m;i++){
        for(j=0;j<k;j++){
        if(c[j]==a[i])
        break;
        }
        if(j==k){
        c[k]=a[i];
        k++;}
        }
        for(i=0;i<n;i++){
        for(j=0;j<k;j++){
        if(c[j]==b[i])
        break;
        }
        if(j==k){
        c[k]=b[i];
        k++;}
        }
    // Printing the resultant array  
    for(i=0;i<5;i++)
        printf("%d",c[i]);
        return 0;
    
}
