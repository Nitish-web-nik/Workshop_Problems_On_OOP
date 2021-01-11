#include <iostream>
#include <cstring>

using namespace std;

class Track
{
public:
    Track(float lengthInSeconds = 0.0f, string trackName = "not set", const
    char * data = NULL)
    {
        m_lengthInSeconds = lengthInSeconds;
        m_trackName = trackName;

	// create the sample clip from data
        m_dataSize = strlen(data);
        m_data = new char[m_dataSize + 1];
        strcpy(m_data, data);
    }

    // definitely need a destructor to clean up the data
    ~Track()
    {
        delete[] m_data;
    }

    // m_ prefix added to member variables, to avoid naming conflicts with
    //parameter names
    float m_lengthInSeconds;
    string m_trackName;

    // sample clip data
    int m_dataSize;
    char * m_data;
};

int main()
{
    Track track(200.0f, "Still Alive", "f651270d6011098375db09912b03e5e7");
    Track track2 = track;

    cout << "Track 1" << endl;
    cout << "Track Name = " << track.m_trackName << endl;
    cout << "Track Length = " << track.m_lengthInSeconds << endl;
    cout << "Track Data = " << track.m_data << endl;
    cout << endl;
    cout << "Track 2" << endl;
    cout << "Track Name = " << track2.m_trackName << endl;
    cout << "Track Length = " << track2.m_lengthInSeconds << endl;
    cout << "Track Data = " << track2.m_data << endl;

    return 0;
}
/*Output:
Track 1
Track Name = Still Alive
Track Length = 200
Track Data = f651270d6011098375db09912b03e5e7

Track 2
Track Name = Still Alive
Track Length = 200
Track Data = f651270d6011098375db09912b03e5e7
*/
