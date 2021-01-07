/*A default constructor is a constructor that takes no parameters,or a
constructor where all parameters have default values(implicit default constructor)*/
#include<iostream>
#include<cstring>
using namespace std;
class Track
{
public:
    string trackname;
    float tracklength_in_seconds;
};
int main()
{
    Track track;
    cout<<"Track's name is "<<track.trackname<<endl;
    cout<<"Track's lenght is "<<track.tracklength_in_seconds<<endl;
    return 0;
}
/*Output:-
Track's name is
Track's lenght is 1.4013e-45
*/
