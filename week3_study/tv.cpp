#include "tv.h"
using namespace std;



    Tv::Tv() //생성자
    {
        channel = 1;
        volumelevel = 1;
        on = false;
    }
    void Tv::turnon()
    {
        on = true;
    }
    void Tv::turnoff()
    {
        on = false;
    }
    void Tv::setchannel(int newchannel)
    {
        if (on && newchannel>=1 && newchannel<=120)
        channel = newchannel;
    }
    void Tv::setvolume(int newvolumlevel)
    {
        if (on && newvolumlevel>=1 && newvolumlevel <=7)
        volumelevel = newvolumlevel;
    }
    void Tv::channelup()
    {
        if(on && channel<120)
        channel++;
    }
    void Tv::channeldown()
    {
        if(on && channel>1)
        channel--;
    }
    void Tv::volumeup()
    {
        if(on && volumelevel<7)
        volumelevel++;
    }
    void Tv::volumedown()
    {
        if(on && volumelevel>1)
        volumelevel--;
    }


