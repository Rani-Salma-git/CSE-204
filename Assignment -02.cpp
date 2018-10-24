
#include <bits/stdc++.h>
using namespace std;


int main()
{
    string a = "PEOPLE";
    int comparisons = 0 , interchanges = 0;

    for(int i=0; i+1<6; i++){
        for(int j=0; j+i+1<6; j++){
            comparisons++;
            if(a[j] >= a[j+1]){
                swap(a[j], a[j+1]);
                interchanges++;
            }
        }
    }
    cout<<"Sorted string: "<<a<<endl;
    cout<<"Comparisons: "<<comparisons<<"\n"<<"Interchanges: "<<interchanges<<endl;


    int data[] = {11, 22, 30, 33, 40, 44, 55, 60, 66, 77, 80, 88, 99};

    int x;
    cout<<"Enter item to be searched: ";
    cin>>x;

    int Beg = 0, End = 13, Mid;
    bool found = false;

    while(Beg<=End){
        Mid = (Beg+End)/2;
        if(data[Mid] == x){
            cout<<a<<" is found at position: "<<Mid+1<<endl;
            found = true;
            break;
        }
        else if(data[Mid] > x) End = Mid - 1;
        else Beg = Mid + 1;
    }

    if(found == false) cout<<x<<" is not present in the  data!"<<endl;

    return 0;
}

