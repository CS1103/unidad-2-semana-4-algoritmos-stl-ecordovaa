#include "funciones.h"

using namespace std;

void permutation(string aux){
    string str = aux;
    sort(begin(str),end(str));

    do{
        if(str == aux){
            if(next_permutation(begin(str),end(str))){
                cout<<str;
                bandera = false;
                break;
            }
            else
                break;
        }
    }while(next_permutation(begin(str),end(str)));
    if(bandera)
        cout<<"no succesor";
}

void _144(){
    string str;
    vector <string> vec;
    while (cin >> str){
        if (str == "#") break;
        vec.push_back(str);
    }
    for(auto item: vec){
        permutation(item);
        cout<<endl;
    }
}

template <typename T>
int bubble_sotr(vector<T> vec){
    int n = {};
    for(int i = 0 ; i < vec.size();i++){
        for(int j = i + 1; j < vec.size() ;j++){
            if(vec[i]>vec[j]){
                swap(vec[i],vec[j]);
                n++;
            }
        }
    }

    return n;
}

void _299(){
    int n;
    char str;
    vector<char> v;

    cin>>n;
    while(n--){
        cin>>str;
        v.push_back(str);
    }
    cout<<bubble_sotr(v);
}
