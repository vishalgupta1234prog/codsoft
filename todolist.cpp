#include<iostream>
#include<windows.h>
using namespace std;

void print_tasks(string tasks[], int task_count)
{
    cout<<"Tasks To Do :"<<endl;
    cout<<"-------------------------"<<endl;
    for(int i=0;i<task_count ; i++)
    {
        cout<<"Task"<<i<<" : "<<tasks[i]<<endl;
    }
    cout<<"-------------------------"<<endl;
}
int main()
{
    system("color a");
    string tasks[10] = {""};
    int task_count = 0;
    int option = -1;
    while(option !=0 )
    {
        cout<<"TO DO LIST"<<endl;
        cout<<"1. To Add New Tasks"<<endl;
        cout<<"2. To View Tasks"<<endl;
        cout<<"3. Delete The Tasks"<<endl;
        cout<<"4. Mark Task As Completed"<<endl;
        cout<<"0. End The Program"<<endl;
        cin>>option;

        switch(option)
        {
         case 1:
         {
            if(task_count > 9)
            {
                cout<<"THE TASK LIST IS FULL"<<endl;
            }
            else
            {
                cout<<"Enter A New Task: ";
                cin.ignore();
                getline(cin,tasks[task_count]);
                task_count++;
            }
            break;
         case 2:
         system("cls");
            print_tasks(tasks,task_count);
            break;
         case 3:
            {
         system("cls");
         print_tasks(tasks,task_count);
            int del_task = 0;
            cout<<"Enter A Task To Delete: ";
            cin>>del_task;   

            if(del_task<0 || del_task>9)
            {
                cout<<"You Entered Invalid Task No."<<endl;
                break;
            }
            for(int i=del_task ; i<task_count ;i++)
            {
               tasks[i] = tasks[i+1]; 
            }
            task_count = task_count - 1;
            break;
            }
            case 4:
            {
                cout<<"Enter Task Number To Mark Task As Completed :"<<endl;
                if(task_count<0 || task_count>9)
                {
                    cout<<"Invalid Task No"<<endl;
                }
                else
                {
                    cout<<"Task Marked As Completed."<<endl;
                }
                break;
            }
            case 0:
               cout<<"Terminating The Program - -- ---- -    -- - -- -"<<endl;
               break;
            default:
               cout<<"You Entered Invalid Value!"<<endl;


         }   
        }
    }
    return 0;

}