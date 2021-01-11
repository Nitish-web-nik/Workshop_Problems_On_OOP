#include <iostream>
#include <cstring>

using namespace std;

class Track
{
public:
    Track(float lengthInSeconds = 0.0f, string trackName = "not set")
    {
        m_lengthInSeconds = lengthInSeconds;
        m_trackName = trackName;
    }

    // m_ prefix added to member variables, to avoid naming conflicts with
    //parameter names
    float m_lengthInSeconds;
    string m_trackName;
};

int main()
{
    Track track(200.0f, "Still Alive");
    Track track2 = track; // copy constructor is called

    cout << "Track Name = " << track.m_trackName << endl;
    cout << "Track Length = " << track.m_lengthInSeconds << endl;

    cout << "Track Name = " << track2.m_trackName << endl;
    cout << "Track Length = " << track2.m_lengthInSeconds << endl;

    return 0;
 }
/*Output:-
Track Name = Still Alive
Track Length = 200
Track Name = Still Alive
Track Length = 200
*/
