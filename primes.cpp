#include <bits/stdc++.h>
using namespace std;
//to display a vector
void displayVector(vector<int> vec){
    if(vec.size()==0){
        cout<<"Array is empty";
        return;
    }
    for(int i:vec)
        cout<<i<<" ";
    
    cout<<endl<<"End of array";
}
//to return a vector that contains primes less than n
vector<int> primesBelowN(int n){
    vector<int> vec;
    if(n<2) return vec;
    vec.push_back(2);
    for(int i=3;i<n;i++){
        bool isDivisible=false;
        for(int j=0;vec[j]<=sqrt(i);j++){
            if(i%vec[j]==0){
                isDivisible=true;
                break;
            }
        }
        if(!isDivisible) vec.push_back(i);
    }
    return vec;
}
int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<"Primes below "<<n<<" are:"<<endl;
    displayVector(primesBelowN(n));
    

}
