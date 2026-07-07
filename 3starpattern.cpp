#include<iostream>
using namespace std;

int main(){

for(int j=0; j<5; j++){
    for(int i=1; i<=5; i++){
        cout<<"*";
    }
    cout<<endl;
}


for(int j=1; j<=5; j++){
    for(int i=1; i<=j; i++){
        cout<<"*";
    }
    cout<<endl;
}
cout<<endl;

for(int i=1; i<=1; i++){
    cout<<"*";
}
cout<<endl;
for(int i=1; i<=2; i++){
    cout<<"*";
}
cout<<endl;
for(int i=1; i<=3; i++){
    cout<<"*";
}
cout<<endl;
for(int i=1; i<=4; i++){
    cout<<"*";
}
cout<<endl;
for(int i=1; i<=5; i++){
    cout<<"*";
}
cout<<endl;


for(int j=5; j>=1; j--){
    for(int i=1; i<=j; i++){
        cout<<"*";
    }
    cout<<endl;
}
for(int i=1; i<=5; i++){
    cout<<"*";
}
cout<<endl;
for(int i=1; i<=4; i++){
    cout<<"*";
}
cout<<endl;
for(int i=1; i<=3; i++){
    cout<<"*";
}
cout<<endl;
for(int i=1; i<=2; i++){
    cout<<"*";
}
cout<<endl;
for(int i=1; i<=1; i++){
    cout<<"*";
}
cout<<endl;

for(int i=4; i>=0; i--){
    for(int j=0; j<i; j++){
        cout<<" ";
    }
    for(int j=0; j<5-i; j++){
        cout<<"*";
    }
    cout<<endl;
}

for(int j=1; j<=4; j++){
    cout<<" ";
}
for(int j=1; j<=1; j++){
    cout<<"*";
}
cout<<endl;

for(int j=1; j<=3; j++){
    cout<<" ";
}
for(int j=1; j<=2; j++){
    cout<<"*";
}
cout<<endl;

for(int j=1; j<=2; j++){
    cout<<" ";
}
for(int j=1; j<=3; j++){
    cout<<"*";
}
cout<<endl;

for(int j=1; j<=1; j++){
    cout<<" ";
}
for(int j=1; j<=4; j++){
    cout<<"*";
}
cout<<endl;

for(int j=1; j<=5; j++){
    cout<<"*";
}
cout<<endl;



for(int i=1; i<=21; i=i+5){
    for(int j=i; j<=i+4; j++){
        cout<<j<<" ";
    }
    cout<<endl; 
}
for(int j=1; j<=5; j++){
        cout<<j<<" ";
    }
    cout<<endl; 

for(int j=6; j<=10; j++){
        cout<<j<<" ";
    }
    cout<<endl;    

for(int j=11; j<=15; j++){
        cout<<j<<" ";
    }
    cout<<endl; 

    

}

