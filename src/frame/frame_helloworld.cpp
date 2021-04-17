#include "frame_helloworld.h"

Frame_HelloWorld::Frame_HelloWorld(void)
{
    _frame_name = "Frame_HelloWorld";
    _canvas_title->drawString("HelloWorld", 270, 34);

    exitbtn("Home");  // _key_exit is created
    _key_exit->AddArgs(EPDGUI_Button::EVENT_RELEASED, 0, (void*)(&_is_run));
    _key_exit->Bind(EPDGUI_Button::EVENT_RELEASED, &Frame_Base::exit_cb);

    _key_helloworld = new EPDGUI_Button("Hello M5Paper World!", 30, 137, 480, 190, EPDGUI_Button::STYLE_DEFAULT);
}

Frame_HelloWorld::~Frame_HelloWorld(void)
{
}

int Frame_HelloWorld::init(epdgui_args_vector_t &args)
{
    _is_run = 1;
    M5.EPD.Clear();
    _canvas_title->pushCanvas(0, 8, UPDATE_MODE_NONE);
    EPDGUI_AddObject(_key_helloworld);
    EPDGUI_AddObject(_key_exit);
    return 3;
}