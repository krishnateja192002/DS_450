#include<bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin>>N;
    int k;
    cin>>k;
    int r = N/k;
    int A[N];
    vector<int> V;
    for(int i=0;i<N;i++)
    {

        cin>>A[i];
    }
    sort(A,A+N);
    int count=0;
    for(int j=0;j<N;j++)
    {
        if(A[j]== A[j+1])
            count++;
        else if(A[j]!= A[j+1])
        {
            count = 1;
        }

        if(count > r)
        {
           V.push_back(A[j]);
        }
    }


for (auto l = V.begin(); l != V.end(); ++l)
        cout << *l << " ";


}
