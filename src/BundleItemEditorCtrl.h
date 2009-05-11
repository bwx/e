#ifndef __BUNDLEITEMEDITORCTRL_H__
#define __BUNDLEITEMEDITORCTRL_H__

#include "EditorCtrl.h"

class BundleItemEditorCtrl : public EditorCtrl {
public:
	BundleItemEditorCtrl(const int page_id, CatalystWrapper& cw, wxBitmap& bitmap, wxWindow* parent, EditorFrame& parentFrame, const wxPoint& pos = wxPoint(-100,-100), const wxSize& size = wxDefaultSize);

	BundleItemEditorCtrl(CatalystWrapper& cw, wxBitmap& bitmap, wxWindow* parent, EditorFrame& parentFrame, const wxPoint& pos = wxPoint(-100,-100), const wxSize& size = wxDefaultSize);

	virtual ~BundleItemEditorCtrl();

	virtual const char** RecommendedIcon();
	virtual cxFileResult LoadLinesIntoDocument(const wxString& whence_to_load);

	virtual bool LoadBundleItem(const wxString& uuid);
	virtual bool SaveText(bool askforpath=false);
	virtual void SetPath(const wxString& newpath);

	bool SaveBundleItem();
	BundleItemType GetBundleType() const {return m_bundleType;};
};

#endif // __BUNDLEITEMEDITORCTRL_H__
