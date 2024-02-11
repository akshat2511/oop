#include <iostream>
using namespace std;
class college
{
public:
    string collegeName;
    int collegecode;
};
int main(){
    college govcollege;
    govcollege.collegeName="SVNIT Surat";
    govcollege.collegecode=12345;
    cout <<"collegeName is " <<govcollege.collegeName <<endl;
    cout <<"collegeCode is " <<govcollege.collegecode <<endl;
}
