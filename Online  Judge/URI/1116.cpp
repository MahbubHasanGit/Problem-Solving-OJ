#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    float x, y;
    cin >> n;
    while(n!=0){
        cin >> x >> y;
        if(y==0){
            cout << "divisao impossivel" <<endl;
        }
        else{
            printf("%.1f\n",(x/y));
        }
        n--;
    }
}
