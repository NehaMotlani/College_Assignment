#include <stdio.h>

void mer(long long int a[],int l,int m,int r)
{
    int n1=m-l+1;
    int n2=r-m;
    long long int l1[n1],l2[n2];
    int i;
    for(i=0;i<n1;i++)
        l1[i]=a[l+i];
    for(i=0;i<n2;i++)
        l2[i]=a[m+1+i];
    int j=0,k=l;
    i=0;
    while(i<n1 && j<n2)
    {
        if(l1[i]<=l2[j])
            {
                a[k]=l1[i];
                i++;
            }
        else
        {
            a[k]=l2[j];
            j++;
        }
        k++;
    }
    while(i<n1)
        a[k++]=l1[i++];
    while(j<n2)
        a[k++]=l2[j++];
}

void mergesort(long long int a[],int l,int r)
{
    if(l<r)
    {
        int mid=(l+r)/2;
        mergesort(a,l,mid);
        mergesort(a,mid+1,r);

        mer(a,l,mid,r);
    }
}


void display(long long int a[],int n)
{
    int i;
    for(i=0;i<n;i++)
        printf("%lld ",a[i]);
    printf("\n");
}

int main()
{
    long long int n;
    long long int k;
    scanf("%lld %lld",&n,&k);
    char s[100010];
    scanf("%s",s);
    long long int arr[100010]={0};
    
    long long int i=0,j=0;
    long long int z=0,y;
   for(i=0;i<n;i++)
        arr[i]=(s[i]-'0');
   // display(arr,n);
    long long int temp[100010]={0};
    for(i=0;i<k;i++)
    {
        z=0;
     
        for(j=i;j<n;j=j+k)
        {
           // printf("%lld", arr[j]);
           temp[z]=arr[j];
           z++;
           //printf("%lld %lld\n",z,temp[z-1] );
        }
        //display(temp,z);
        
        mergesort(temp,0,z-1);
        //display(temp,z);
       //int m=0;
        for(j=i;j<n && z>=0;j=j+k)
        {
           arr[j]=temp[z-1];
           //printf("%lld ",arr[j]);
          z--;
        }
        //printf(" %s ",s);
    }   
    for(i=0;i<n;i++)
        printf("%lld", arr[i]);
    printf("\n");
    return 0;
}