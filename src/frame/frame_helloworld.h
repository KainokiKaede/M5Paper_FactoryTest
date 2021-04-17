#ifndef _FRAME_HELLOWORLD_H_
#define _FRAME_HELLOWORLD_H_

#include "frame_base.h"
#include "../epdgui/epdgui.h"

class Frame_HelloWorld : public Frame_Base
{
public:
    Frame_HelloWorld();
    ~Frame_HelloWorld();
    int init(epdgui_args_vector_t &args);

private:
    EPDGUI_Button *_key_helloworld;
};

#endif //_FRAME_HELLOWORLD_H_