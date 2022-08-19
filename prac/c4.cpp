#include<iostream>

const int pen{10};
const int pencil{40};
const int tie{1};
int main(){/*
    int tool{tie};
    switch(tool){
        case pen:{
            std::cout<<"pen is given";
        }
        break;
        case pencil:{
         std::cout<<"pencil is given";
        }
        break;
        deafult:{
            std::cout<<"nothing is there";
        }
        break;
    }
*/
 
 int val =100;
 int res = (val>150)? val++:--val;
 std::cout<<res<<"\n";
 std::cout<<val;

}