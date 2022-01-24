#include<iostream>
#include<vector>
using namespace std;
int main(){
   /* vector<int> wektor ={10, 20, 30, 40, 50};
    for(inti=0;i<wektor.size();i++){
        cout<<"wektor["<<i<<"]="<<wektor[i]<<endl;
    }
    wektor.push_back(60);
    cout<<"Ostatni element (dopisany) : "<< wektor[wektor.size() - 1] << endl;
    wektor.insert(wektor.begin(), 0) ;
    cout << "Pierwszy element (dopisany): " << wektor[0]<<endl;
    for (int i = 0; i < wektor. size(); i++) {
        cout << "wektor[" << i << "] = " << wektor[i] << endl;
    }
    return 0;
}*/
vector<int>wektor;
cout<<"Podaj ile elementow"<<endl;
int elementy=0;
cin>>elementy;
int a;
for(int i=0; i<elementy;i++){
    cout<<"Podaj element"<<i<<endl;
    cin>>a
    wektor.push_back(a);
}
for(int i=0; i<elementy; i++){
    cout<<"Element: "<<i<<": "<<wektor[i]<<endl;
}
    return 0;
}


