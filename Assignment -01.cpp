#include <bits/stdc++.h>
using namespace std;


int find_substring(string s1, string s2){
    int x = s1.size() , y = s2.size(), indx = -1;
    for(int i=0; i+y<x; i++){
        bool found = true;
        for(int j=0; j<y; j++){
            if(s1[i+j] != s2[j]){
                found = false;
                break;
            }
        }
        if(found){
            indx = i+1;
            break;
        }
    }

    return indx;
}

void task_1_2()
{

}

void task_1_3()
{

}

void task_1_4()
{

}

void task_1_5()
{

}


int main()
{
    string s1 = "A THING OF BEAUTY IS A JOY FOREVER";
    string s2;

    int query;
    cout<<"Enter how many patterns you need to search: ";
    cin>>query; getchar();

    while(query--){
        cout<<"Enter pattern: ";
        getline(cin, s1);
        int x = s1.size() , y = s2.size(), indx = 0;
        for(int i=0; i+y<x; i++){
            bool found = true;
            for(int j=0; j<y; j++){
                if(s1[i+j] != s2[j]){
                    found = false;
                    break;
                }
            }
            if(found){
                indx = i+1;
                break;
            }
        }
        if(indx) cout<<"'"<<s1<<"'is found at position: "<<indx<<endl;
        else cout<<"'"<<s2<<"' is not found in text"<<endl;
    }


    string s;
    cout<<"Enter number of queries: ";
    cin>>query;

    int position;
    cout<<"Enter 1st_string, inserting_position, 2nd_string ["<<query<<" times]: "<<endl;
    while(query--){
        cin>>s>>position>>s1;

        string temp;
        for(int i=0; i<position-1; i++) temp += s[i];
        for(int i=0; i<s1.size(); i++) temp += s1[i];
        for(int i=position-1; i<s.size(); i++) temp += s[i];

        s = temp;
        cout<<"OUTPUT: "<<s<<endl;
    }


    cout<<"Enter  the number of queries: ";
    cin>>query;
    getchar();

    cout<<"Enter 1st_string, inserting_position, 2nd_string ["<<query<<" times]: "<<endl;
    while(query--){
        getline(cin, s);
        cin>>position; getchar();
        getline(cin, s1);

        string temp;
        for(int i=0; i<position-1; i++) temp += s[i];
        for(int i=0; i<s1.size(); i++) temp += s1[i];
        for(int i=position-1; i<s.size(); i++) temp += s[i];

        s = temp;
        cout<<"OUTPUT: "<<s<<endl;
    }


    cout<<"Enter number of queries: ";
    cin>>query;


    int len;

    while(query--){

        string temp, t, f;

        cout<<"Enter operation ID: 1.Delete 2.Replace"<<endl;
        int n;
        cin>>n; getchar();

        if(n==1){
            cout<<"Enter string, deletion_start_position, deletion_length: "<<endl;
            getline(cin, s);
            cin>>position>>len; getchar();
            for(int i=0; i<position-1; i++) temp += s[i];
            for(int i=position-1+len; i<s.size(); i++) temp += s[i];
        }
        else if(n==2){
            cout<<"Enter string, replaceable_string, 2nd_string: "<<endl;
            getline(cin, s);
            getline(cin, f);
            getline(cin, t);
            int indx = find_substring(s,f);
            len = f.size();
            for(int i=0; i<indx-1; i++) temp += s[i];
            for(int i=0; i<t.size(); i++) temp += t[i];
            for(int i=indx-1+len; i<s.size(); i++) temp += s[i];
        }

        s = temp;
        cout<<"OUTPUT: "<<s<<endl;
    }



    cout<<"Enter the number of  patterns you want to search: ";
    cin>>query;

    while(query--){
        cout<<"Enter pattern: ";
        cin>>s2;
        cout<<"Enter text: ";
        cin>>s1;

        int n = s1.size() , m = s2.size(), indx = 0;
        for(int i=0; i+m<n; i++){
            bool found = true;
            for(int j=0; j<m; j++){
                if(s1[i+j] != s2[j]){
                    found = false;
                    break;
                }
            }
            if(found){
                indx = i+1;
                break;
            }
        }
        if(indx) cout<<"'"<<s2<<"' is found at the  position: "<<indx<<endl;
        else cout<<"'"<<s2<<"' is not found in the text!"<<endl;
    }

    return 0;
}
