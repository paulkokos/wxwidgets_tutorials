//
// Created by paulkokos on 24/1/21.
//

#ifndef WXWIDGETS_TUTORIALS_MYFRAME_HPP
#define WXWIDGETS_TUTORIALS_MYFRAME_HPP

#include <wx/wxprec.h>
#include <wx/wx.h>
class MyFrame: public wxFrame
{
public:
    MyFrame(const wxString& title, const wxPoint& pos, const wxSize& size);
private:
    void OnHello(wxCommandEvent& event);
    void OnExit(wxCommandEvent& event);
    void OnAbout(wxCommandEvent& event);
    wxDECLARE_EVENT_TABLE();
    enum
    {
        ID_Hello = 1
    };
};


#endif //WXWIDGETS_TUTORIALS_MYFRAME_HPP
