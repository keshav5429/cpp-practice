// // yaha pe array 1 by one print krna hoga ni toh loop chalan hoga har element print krne ke liye 
// // #include<iostream>
// // using namespace std;
// // int main(){
// //     int arr[5]={1,2,5,6,5};

// //     cout<<arr[0]<<" ";
// // }





// yeh ho gaya loop se print
// #include<iostream>
// using namespace std;
// int main()
// {
//     int arr[]={1,5,8,9,5,5,6,4,5};
//     for(int i=0;i<10;i++)
//     {
//     cout<<arr[i]<<" ";

// }}

// ab krenge basic ,manipulation + - * array ka ur inpute lena waghera
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[500];
//     int n;
//     cout<<"enter the array"<<endl;
//     for(int i=0;i<10;i++){
//     cin>>arr[i];
//     }
//     cout<<"double"<<endl;
//     for(int i=0;i<10;i++){
//         cout<<2*arr[i]<<endl;
    
// }}


//ab +  aise he sb kr lo * divide waghera 
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[400];
//     int n;
//     cout<<"enter the array"<<endl;
//     for(int i=0;i<10;i++)
//     {
//         cin>>arr[i];
//     }
//     cout<<"addition element are"<<endl;
//     for(int i=0;i<10;i++)
//     {
//         cout<<10+arr[i]<<" ";
//     }
// }

//division check 
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[500];
//     int n;
//     cout<<"enter the array"<<endl;
//     for(int i=0;i<10;i++){
//         cin>>arr[i];
//     }
//     cout<< "number divible by 2 are"<<endl;
//     for(int i=0;i<10;i++)
//     if(arr[i]%2==0)
//      cout<<arr[i]<<endl;}


//square print of array
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[500];
//     int n;
// cout<<"enter the array"<<endl;
// for(int i=0;i<10;i++)
// {cin>>arr[i];
// }
// cout<<"the sqaure of array are"<<endl;

// for(int i=0;i<10;i++)
// {
//     cout<<arr[i]*arr[i]<<" ";
// }

// }


//finding sum of array
#include<iostream>
using namespace std;
int main(){
    int arr[10];
    int n;
    int sum;
    cout<<"enter the array"<<endl;
    for(int  i = 0; i<10;i++)
    { cin>>arr[i];}

    cout<<"sum of the array is "<<endl;

    for(int i=0;i<10;i++)
   {
    sum = sum + arr[i];}
      cout<<"sum of the array is "<<sum<<endl;}