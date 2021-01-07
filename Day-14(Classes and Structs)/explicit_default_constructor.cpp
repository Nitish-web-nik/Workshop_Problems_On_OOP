#include<iostream>
#include<cstring>
using namespace std;
class Track
{
public:
    string trackname;
    float tracklength_in_seconds;
    Track()
    {
        trackname = "not set";
        tracklength_in_seconds = 450.6f;
    }
};
int main()
{
    Track track;
    cout<<"Track's name is "<<track.trackname<<endl;
    cout<<"Track's lenght is "<<track.tracklength_in_seconds<<endl;
    return 0;
}
