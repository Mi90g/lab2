#include<iostream>
#include<fstream>
#include<cstdlib>
#include<ctime>

using namespace std;

void creationFile(const string& filename){
    ofstream file(filename);
    if(!file.is_open()){
        cout<<"File wasn't opened - ERROR"<<endl;
        return;
    }
    for(int i = 0; i<10;i++){
        file<<(rand()%10 +1);
        if(i<9){
            file<<" ";
        }
    }
    file.close();
    cout<<"File "<<filename<<" was created"<<endl;
}
int main(){
    srand(time(0));

    creationFile("file1.txt");
    creationFile("file2.txt");
    creationFile("file3.txt");
    return 0;
}
