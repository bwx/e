/*******************************************************************************
 *
 * Copyright (C) 2009, Alexander Stigsen, e-texteditor.com
 *
 * This software is licensed under the Open Company License as described
 * in the file license.txt, which you should have received as part of this
 * distribution. The terms are also available at http://opencompany.org/license.
 *
 * This software is distributed on an "AS IS" basis, WITHOUT WARRANTY OF ANY
 * KIND, either express or implied.
 *
 ******************************************************************************/

#ifndef __CYGWINDDLG_H__
#define __CYGWINDDLG_H__

#include "wx/wxprec.h"
#ifndef WX_PRECOMP
	#include <wx/wx.h>
#endif

enum cxCygwinDlgMode {
	cxCYGWIN_INSTALL,
	cxCYGWIN_UPDATE
};

enum cxCygwinInstallMode {
	cxCYGWIN_AUTO,
	cxCYGWIN_MANUAL
};

class CygwinDlg : public wxDialog {
public:
	CygwinDlg(wxWindow *parent, cxCygwinDlgMode mode);

private:
	// Event handlers
	void OnButtonOk(wxCommandEvent& event);
	DECLARE_EVENT_TABLE()

	// Member variables
	const cxCygwinDlgMode m_mode;
	wxRadioButton* m_autoRadio;
	wxRadioButton* m_manualRadio;
};

#endif // __CYGWINDDLG_H__
