#include<stdio.h>
 void main(){
    int i,j,a,b,l=0,flag=0;
    printf("enter the size of the first array\n");
    scanf("%d",&a);
    printf("enter the size of the second array\n");
    scanf("%d",&b);
    int p[a],q[b],c[a];
    
    for(i=0;i<a;i++){
    printf("enter the %d element of first array :\n",i+1);
    scanf("%d",&p[i]);}
for(i=0;i<b;i++){
    printf("enter the %d element of second array :\n",i+1);
    scanf("%d",&q[i]);}
for(i=0;i<a;i++){
    for(j=0;j<b;j++){
        if(c[j]==p[i]){
             break;}
        else if(p[i]==q[j]){
            flag=1;}}
            if(flag==0){
            c[l]=p[i];
            l++;
            
        }}
    printf("the element of array :\n");
    for(i=0;i<l;i++)
    printf("%d\n",c[i]);
    

}
