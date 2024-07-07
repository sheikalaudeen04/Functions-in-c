#include <stdio.h>
int binarySearch(int arr[],int l,int r,int tg){
	if(l>r){
        return -1;
    }
	int mid;
	mid=(l+r)/2;
    if(arr[mid]==tg){
    	return mid;
	}
	else if(arr[mid]>tg){
		return binarySearch(arr,l,mid-1,tg);
	}
	else if(arr[mid]<tg){
		return binarySearch(arr,mid+1,r,tg);
	}
}
void BubbleSort(int arr[],int n){
	
	int i,j,temp;
	for(i=0;i<n;i+=1){
		for(j=0;j<n-i-1;j+=1){
			if(arr[j]>arr[j+1]){
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
}

int main() {
    int arr[100],n,i;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    for(i=0;i<n;i+=1){
    	printf("Enter the value of %dth index: ",i);
    	scanf("%d",&arr[i]);
	}
	BubbleSort(arr,n);
    int tg;
    printf("Enter the tg element to search for: ");
    scanf("%d",&tg);
    int idx=binarySearch(arr,0,n-1,tg);
    if (idx!=-1){
        printf("Element %d found \n",tg);
    } 
	else {
        printf("Element %d not found in the array\n",tg);
    }

    return 0; 
}

