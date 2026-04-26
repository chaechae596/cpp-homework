#pragma once

class Tv
{
    public:
    int channel;
    int volumelevel;
    bool on;

    Tv();
    void turnon();
    void turnoff();
    void setchannel(int newchannel);
    void setvolume(int newvolumlevel);
    void channelup();
    void channeldown();
    void volumeup();
    void volumedown();


};