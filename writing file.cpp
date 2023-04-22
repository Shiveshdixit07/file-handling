#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main(){
    fstream obj;
    obj.open("afile.dat",ios::app);
    string line;
    string content;
    cout<<"enter the content to be written into the file:"<<endl;
    getline(cin,line);
    while(line!=""){
        content=content+line+"\n";
        getline(cin,line);
    }
    obj<<content;
    obj.close();
    return 0;
}
