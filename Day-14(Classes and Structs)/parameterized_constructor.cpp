#include <iostream>
#include <cstring>
using namespace std;
class Track
{
public:
    float m_length_in_sec;
    string m_track_name;
    Track(float track_length_in_sec, string track_name)
    {
        m_length_in_sec = track_length_in_sec;
        m_track_name = track_name;
    }
};
int main()
{
    Track track(200.0f, "Chip Thrills");
    cout<<"Track name is "<<track.m_track_name<<endl;
    cout<<"Track's length is "<<track.m_length_in_sec<<" seconds"<<endl;
    return 0;
}
/*Output:-
Track name is Chip Thrills
Track's length is 200 seconds
*/
