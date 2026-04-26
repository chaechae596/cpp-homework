#include "tv.h"
#include <iostream>
using namespace std;

int main()
{
    Tv tv1;
    Tv tv2;

    tv1.turnon(); // tv를 켬
    tv1.setchannel(30); // tv의 채널을 30으로 새로 설정
    tv1.setvolume(3); // tv의 볼륨을 3으로 새로 설정

    tv2.turnon(); // tv를 킴
    tv2.channelup(); // tv의 채널을 증가
    tv2.channelup(); // tv의 채널을 증가
    tv2.volumeup(); // tv의 볼륨을 높임

    cout<<"tv1's channel is "<<tv1.channel<<" and volume level is "<<tv1.volumelevel<<endl;
    cout<<"tv2's channel is "<<tv2.channel<<" and volume level is "<< tv2.volumelevel<<endl;

    return 0;
}

