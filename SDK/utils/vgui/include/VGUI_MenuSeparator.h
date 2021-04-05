//========= Copyright © 1996-2002, Valve LLC, All rights reserved. ============
//
// Purpose: 
//
// $NoKeywords: $
//=============================================================================

#ifndef VGUI_MENUSEPARATOR_H
#define VGUI_MENUSEPARATOR_H

#include<VGUI.h>
#include<vgui_label.h>

namespace vgui
{

class VGUIAPI MenuSeparator : public Label
{
public:
	MenuSeparator(const char* text);
protected:
	void paintBackground() override;
};

}

#endif