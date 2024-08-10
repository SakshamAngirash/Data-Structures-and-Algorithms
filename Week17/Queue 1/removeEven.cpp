#include<iostream>
#include<stack>
#include<queue>
using namespace std; 

void display(queue<int>q)
{
    for (int i = 0; i < q.size(); i++)
    {
        int x = q.front(); 
        cout<<q.front()<<" "; 
        q.pop(); 
        q.push(x);
    }
    cout<<endl;
    
}

// void removeEvenIdx(queue<int>&q){
//     int n = q.size(); 
//     if(q.size()%2==0)
//     {
//         int tempsize = q.size();
//         for (int i = 0; i < n; i++)
//         {
//             if(tempsize%2!=0) {
//                 int x = q.front(); 
//                 q.pop(); 
//                 q.push(x);
                
//             }
//             else{
//                 q.pop();
//             }
//             tempsize--;
//         } 
//     }
//     else{
//         int tempsize = q.size();
//         for (int i = 0; i < n; i++)
//         {
//             if(tempsize%2==0) {
//                 int x = q.front(); 
//                 q.pop(); 
//                 q.push(x);
                
//             }
//             else{
//                 q.pop();
//             }
//             tempsize--;
//         } 

//     }
// }

void removeAtEven(queue<int>&q)
{
    int n = q.size(); 
    for (int i = 0; i < n; i++)
    {
        if(i%2!=0){
            int x = q.front(); 
            q.push(x); 
        }
        q.pop(); //even h to sirf pop odd h dono 
    }
    

}

int main ()
{
    queue<int> q; 
    q.push(1); 
    q.push(2); 
    q.push(3); 
    q.push(4);
    q.push(5);
    

    display(q); 
    removeAtEven(q); 
    display(q);

    





    


}