#include<stdio.h>

int linearsearch(int a[], int d, int n){          // Linear Search
    int b = -1;
    for(int i=0; i<n; i++){
        if(a[i]==d){
            b = i;
            break;
        }
    }
    return b;
}

int binarysearch(int a[], int d, int n){       // Binary search
    int left = 0;
    int right = n-1;
    int fi = -1;
    while(left <= right){
       int mid = (left + right) / 2;
       if(d > a[mid]){
         left = mid + 1;
       } else if(d < a[mid]){
         right = mid - 1;
       } else  {
          fi = mid;
          right = mid - 1;
       }
    }
    return fi;
}
int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    int a[n];
    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    int d;
    printf("Enter the number that has to be find: ");
    scanf("%d", &d);
    int ans = linearsearch(a,d,n);
    int ans2 = binarysearch(a,d,n);
    printf("The index of the number is: ");
    printf("%d", ans);
    printf("\n");
    printf("The index of the number by binarys is:  ");
    printf("%d", ans2);
}