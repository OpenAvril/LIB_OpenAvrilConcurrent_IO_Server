#include "pch.h"

OpenAvril::Praise1_Algorithm::Praise1_Algorithm()
{
}

OpenAvril::Praise1_Algorithm::~Praise1_Algorithm()
{
}

void OpenAvril::Praise1_Algorithm::Do_Praise(OpenAvril::Framework_Server* obj, char playerId, OpenAvril::Praise1_Input* in_SubSet, OpenAvril::Praise1_Output* out_SubSet)
{
    OpenAvril::Player* selectedPlayer = obj->get_ptr_Server()->get_ptr_Data()->get_ptr_GameInstance()->get_player(playerId);
    if (selectedPlayer->get_isFirstMouseMove())
    {
        std::vector<float> mousePosition = {in_SubSet->get_mouse_X(), in_SubSet->get_mouse_Y()};
        selectedPlayer->set_mouse_Position_X(mousePosition.at(0));
        selectedPlayer->set_mouse_Position_Y(mousePosition.at(1));
        selectedPlayer->set_isFirstMouseMove(false);
    }
    else
    {
        switch (selectedPlayer->get_cameraSelector())
        {
        case false:
            if ((in_SubSet->get_mouse_X() != (float)(obj->get_ptr_Server()->get_ptr_Data()->get_ptr_GameInstance()->get_settings()->get_screenSize_X() / 2))
                || (in_SubSet->get_mouse_Y() != (float)(obj->get_ptr_Server()->get_ptr_Data()->get_ptr_GameInstance()->get_settings()->get_screenSize_Y() / 2)))
            {
                float sensitivity = selectedPlayer->get_sensitivity();
                float anglePerPixle = obj->get_ptr_Server()->get_ptr_Data()->get_ptr_GameInstance()->get_settings()->get_fov() / obj->get_ptr_Server()->get_ptr_Data()->get_ptr_GameInstance()->get_settings()->get_screenSize_Y();
                float deltaX = anglePerPixle * (in_SubSet->get_mouse_X() - (obj->get_ptr_Server()->get_ptr_Data()->get_ptr_GameInstance()->get_settings()->get_screenSize_X() / 2));
                float deltaY = anglePerPixle * (in_SubSet->get_mouse_Y() - (obj->get_ptr_Server()->get_ptr_Data()->get_ptr_GameInstance()->get_settings()->get_screenSize_Y() / 2));
                selectedPlayer->get_camera_FP()->Update_Yaw(deltaX);
                selectedPlayer->get_camera_FP()->Update_Pitch(deltaY);
                selectedPlayer->get_camera_FP()->UpdateVectors(selectedPlayer->get_camera_FP()->get_pitch(), selectedPlayer->get_camera_FP()->get_yaw());

                selectedPlayer->set_mouse_Position_X((obj->get_ptr_Server()->get_ptr_Data()->get_ptr_GameInstance()->get_settings()->get_screenSize_X() / 2));
                selectedPlayer->set_mouse_Position_Y((obj->get_ptr_Server()->get_ptr_Data()->get_ptr_GameInstance()->get_settings()->get_screenSize_Y() / 2));
            }
            break;

        case true:

            break;
        }
    }
    out_SubSet->SetFowards(selectedPlayer->get_camera_FP()->get_fowards());//todo cast to vector3
    out_SubSet->SetRight(selectedPlayer->get_camera_FP()->get_right());
    out_SubSet->SetUp(selectedPlayer->get_camera_FP()->get_up());
    //_lastMouseState = mouseState;
    //Console.WriteLine("TESTBENCH => HandleMouse .. Done");
}