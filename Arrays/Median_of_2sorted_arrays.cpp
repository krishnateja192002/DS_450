#include<bits/stdc++.h>


using namespace std;

int main()
{
   // ignore this
    int L1,L2,i,j;
    cin>> L1;
    int A[L1];
    for(i =0;i<L1;i++)
    {
        cin>> A[i];
    }
    cin>> L2;
    int B[L2];
    for(j =0;j<L2;j++)
    {
        cin>> B[j];
    }

    //main
    int Arr[L1+L2];
    for(int k=0;k<L1+L2;k++)
    {
        if(k < L1)
            Arr[k] = A[k];
        else
            Arr[k] = B[k - L1];
    }

    sort(Arr,Arr+(L1+L2));


    if((L1+L2)% 2 != 0)
    {
        int t = (L1+L2) / 2;

        cout<< Arr[t];
    }
    else
        {
            int t = (L1+L2)/2;
            cout<< Arr[t]<<" "<<Arr[t+1];
        }



}
