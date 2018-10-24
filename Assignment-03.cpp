#include <bits/stdc++.h>
using namespace std;

struct node{
    int item;
    node* next;
};

node* root = NULL;

void Insert(int x){
    node* temp = new node;

    if(root == NULL){
        temp->item = x;
        temp->next = NULL;
        root = temp;
    }
    else{
        temp->item = x;
        temp->next = root;
        root = temp;
    }
    cout<<"\n"<<x<<" is inserted successfully!"<<endl;
}

void Search(int x){
    node* temp = root;

    while(temp != NULL){
        if(temp->item == x){
            cout<<"\n"<<x<<" is present is the list!"<<endl;
            return;
        }
        temp = temp->next;
    }

    cout<<"\n"<<x<<" is not present is the list!"<<endl;
}

void Delete(int x){
    node *temp = root, *prev = root;

    while(temp != NULL){
        if(temp->item == x){
            if(temp == root) root = temp->next;
            else prev->next = temp->next;
            delete temp;
            cout<<"\n"<<x<<" is successfully deleted from the list!"<<endl;
            return;
        }
        prev = temp;
        temp = temp->next;
    }

    cout<<"\n"<<x<<" is not present in the list. So deletion is not possible!"<<endl;
}

void show_list()
{
    cout<<"LIST: ";
    node* temp = root;
    while(temp != NULL){
        cout<<temp->item<<" ";
        temp = temp->next;
    }
    cout<<"\n\n";
}


int main()
{
    int x, command;
    cout<<"MENU:: 1.Insertion 2.Searching 3.Delete 0.Exit"<<endl;
    cout<<"Enter command ID: ";

    while(cin>>command && command){


        if(command == 1){
            cout<<"Enter value to be inserted: ";
            cin>>x;
            Insert(x);
            show_list();
        }
        else if(command == 2){
            cout<<"Enter value to be searched: ";
            cin>>x;
            Search(x);
            show_list();
        }
        else if(command == 3){
            cout<<"Enter value to be deleted: ";
            cin>>x;
            Delete(x);
            show_list();
        }
        else cout<<"Enter valid command!"<<endl;

        cout<<"MENU:: 1.Insertion 2.Searching 3.Delete 0.Exit"<<endl;
        cout<<"Enter command ID: ";
    }

    return 0;
}
