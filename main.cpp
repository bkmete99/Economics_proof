#include <iostream>
#include <string>
using namespace std;
int main()
{
    int reserveratio=10;
    float orig=100;
    float count=orig;
    float temp;
    while(orig>0.000001){
        temp=orig*(100-reserveratio)/100;
        orig=temp;
        count+=temp;
    }
    cout<<count;
    return 0;
}
