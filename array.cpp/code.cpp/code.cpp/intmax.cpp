// // // // searching in array
// // // #include<iostream>
// // // using namespace std;
// // // int main(){
// // //     int arr[10];
// // //     int n;

// // //     cout<<"enter the array"<<endl;

// // //     for(int i=0;i<10;i++)
// // //     { cin>>arr[i];}
    
// // //     int found =10;
// // //     bool isfound=false;
    
// // //     for(int i=0;i<10;i++)
    
// // //         if( found==arr[i])
// // //         {
// // //             cout<<"the number is present"<<endl;
        
// // //         isfound=true;
// // //         break;}
// // //         if(isfound==false){
// // //         cout<<"number not found"<<endl;
// // //     }}


// // //finding max min element in array
// // #include<iostream>
// // #include<climits>
// // using namespace std ;
// // int main(){
// //     int arr[10];
// //     int n;
// //     int min=INT_MAX;
// //     cout<<"enter the array"<<endl;
// //     for(int i=0;i<10;i++)
// //     {
// //         cin>>arr[i];
// //     }
// //     for(int i=0;i<10;i++)
// //     { if(min>arr[i])
// //         { min=arr[i];}


// //     }

// // cout<<"the min is "<<min;}



// //reversing the array
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[10];
//     int n;
//     cout<<"enter the array";
//     for(int i=0;i<10;i++){
//          cin>>arr[i];
//     }  
// for(int i=9;i>=0;i--)
// {cout<<arr[i]<<" "<<endl;
//  }
//  return 0;
// }


//finding numbe of even and odd in an array
#include<iostream>
using namespace std;
int main(){
    int arr[5];
    int n;
    cout<<"enter the array"<<endl;
    for(int i=0;i<5;i++)
    { cin>>arr[i];}
    int i;
    int even=arr[i]%2==0;

    if(even)
    {cout<<"number of even number"<<even<<endl;}
    else
    {
        cout<<"the number or odd number are ";
    }
}