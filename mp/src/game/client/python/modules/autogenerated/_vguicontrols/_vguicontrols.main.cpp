// This file has been generated by Py++.

#include "cbase.h"



#include "__convenience.pypp.hpp"

#include "__call_policies.pypp.hpp"

#include "cbase.h"

#include "vgui_controls/Panel.h"

#include "vgui_controls/AnimationController.h"

#include "vgui_controls/EditablePanel.h"

#include "vgui_controls/AnalogBar.h"

#include "vgui_controls/Image.h"

#include "vgui_controls/TextImage.h"

#include "vgui_controls/ScrollBar.h"

#include "vgui_controls/ScrollBarSlider.h"

#include "vgui_controls/Menu.h"

#include "vgui_controls/MenuButton.h"

#include "vgui_controls/Frame.h"

#include "vgui_controls/TextEntry.h"

#include "vgui_controls/RichText.h"

#include "vgui_controls/Tooltip.h"

#include "vgui/IBorder.h"

#include "vgui_bitmapimage.h"

#include "vgui_avatarimage.h"

#include "srcpy_vgui.h"

#include "srcpy.h"

#include "tier0/memdbgon.h"

#include "../../game/client/python/modules/autogenerated/_vguicontrols/AnimationController.pypp.hpp"

#include "../../game/client/python/modules/autogenerated/_vguicontrols/AvatarImage.pypp.hpp"

#include "../../game/client/python/modules/autogenerated/_vguicontrols/BitmapImage.pypp.hpp"

#include "../../game/client/python/modules/autogenerated/_vguicontrols/DeadPanel.pypp.hpp"

#include "../../game/client/python/modules/autogenerated/_vguicontrols/EditablePanel.pypp.hpp"

#include "../../game/client/python/modules/autogenerated/_vguicontrols/Frame.pypp.hpp"

#include "../../game/client/python/modules/autogenerated/_vguicontrols/IBorder.pypp.hpp"

#include "../../game/client/python/modules/autogenerated/_vguicontrols/IImage.pypp.hpp"

#include "../../game/client/python/modules/autogenerated/_vguicontrols/Image.pypp.hpp"

#include "../../game/client/python/modules/autogenerated/_vguicontrols/Panel.pypp.hpp"

#include "../../game/client/python/modules/autogenerated/_vguicontrols/PyBaseVGUIHandle.pypp.hpp"

#include "../../game/client/python/modules/autogenerated/_vguicontrols/RichText.pypp.hpp"

#include "../../game/client/python/modules/autogenerated/_vguicontrols/ScrollBar.pypp.hpp"

#include "../../game/client/python/modules/autogenerated/_vguicontrols/ScrollBarSlider.pypp.hpp"

#include "../../game/client/python/modules/autogenerated/_vguicontrols/TextEntry.pypp.hpp"

#include "../../game/client/python/modules/autogenerated/_vguicontrols/TextImage.pypp.hpp"

#include "../../game/client/python/modules/autogenerated/_vguicontrols/_vguicontrols_enumerations.pypp.hpp"

namespace bp = boost::python;

typedef PyVGUIHandle<AnimationController> AnimationControllerHANDLE;

struct ptr_AnimationController_to_handle : bp::to_python_converter<AnimationController *, ptr_AnimationController_to_handle>
{
    static PyObject* convert(AnimationController *s)
    {
        if( s )
        {
            if( s->GetPySelf() != NULL )
                return bp::incref( s->GetPySelf() ); 
            else
                return bp::incref( bp::object( AnimationControllerHANDLE( s ) ).ptr() );
        }
        else
        {
            return bp::incref(Py_None);
        }
    }
};

struct AnimationController_to_handle : bp::to_python_converter<AnimationController, AnimationController_to_handle>
{
    static PyObject* convert(const AnimationController &s)
    {
        if( s.GetPySelf() != NULL )
            return bp::incref( s.GetPySelf() );
        else
            return bp::incref( bp::object( AnimationControllerHANDLE( (AnimationController *)&s) ).ptr() );
    }
};

struct handle_to_AnimationController
{
    handle_to_AnimationController()
    {
        bp::converter::registry::insert(
            &extract_AnimationController,
            bp::type_id< AnimationController >()
            );
    }
    
    static void* extract_AnimationController(PyObject* op)
    {
        PyBaseVGUIHandle &h = bp::extract< PyBaseVGUIHandle & >(op);
        return h.Get();
    }
};

typedef PyVGUIHandle<Panel> PanelHANDLE;

struct ptr_Panel_to_handle : bp::to_python_converter<Panel *, ptr_Panel_to_handle>
{
    static PyObject* convert(Panel *s)
    {
        if( s )
        {
            if( s->GetPySelf() != NULL )
                return bp::incref( s->GetPySelf() ); 
            else
                return bp::incref( bp::object( PanelHANDLE( s ) ).ptr() );
        }
        else
        {
            return bp::incref(Py_None);
        }
    }
};

struct Panel_to_handle : bp::to_python_converter<Panel, Panel_to_handle>
{
    static PyObject* convert(const Panel &s)
    {
        if( s.GetPySelf() != NULL )
            return bp::incref( s.GetPySelf() );
        else
            return bp::incref( bp::object( PanelHANDLE( (Panel *)&s) ).ptr() );
    }
};

struct handle_to_Panel
{
    handle_to_Panel()
    {
        bp::converter::registry::insert(
            &extract_Panel,
            bp::type_id< Panel >()
            );
    }
    
    static void* extract_Panel(PyObject* op)
    {
        PyBaseVGUIHandle &h = bp::extract< PyBaseVGUIHandle & >(op);
        return h.Get();
    }
};

typedef PyVGUIHandle<EditablePanel> EditablePanelHANDLE;

struct ptr_EditablePanel_to_handle : bp::to_python_converter<EditablePanel *, ptr_EditablePanel_to_handle>
{
    static PyObject* convert(EditablePanel *s)
    {
        if( s )
        {
            if( s->GetPySelf() != NULL )
                return bp::incref( s->GetPySelf() ); 
            else
                return bp::incref( bp::object( EditablePanelHANDLE( s ) ).ptr() );
        }
        else
        {
            return bp::incref(Py_None);
        }
    }
};

struct EditablePanel_to_handle : bp::to_python_converter<EditablePanel, EditablePanel_to_handle>
{
    static PyObject* convert(const EditablePanel &s)
    {
        if( s.GetPySelf() != NULL )
            return bp::incref( s.GetPySelf() );
        else
            return bp::incref( bp::object( EditablePanelHANDLE( (EditablePanel *)&s) ).ptr() );
    }
};

struct handle_to_EditablePanel
{
    handle_to_EditablePanel()
    {
        bp::converter::registry::insert(
            &extract_EditablePanel,
            bp::type_id< EditablePanel >()
            );
    }
    
    static void* extract_EditablePanel(PyObject* op)
    {
        PyBaseVGUIHandle &h = bp::extract< PyBaseVGUIHandle & >(op);
        return h.Get();
    }
};

typedef PyVGUIHandle<Frame> FrameHANDLE;

struct ptr_Frame_to_handle : bp::to_python_converter<Frame *, ptr_Frame_to_handle>
{
    static PyObject* convert(Frame *s)
    {
        if( s )
        {
            if( s->GetPySelf() != NULL )
                return bp::incref( s->GetPySelf() ); 
            else
                return bp::incref( bp::object( FrameHANDLE( s ) ).ptr() );
        }
        else
        {
            return bp::incref(Py_None);
        }
    }
};

struct Frame_to_handle : bp::to_python_converter<Frame, Frame_to_handle>
{
    static PyObject* convert(const Frame &s)
    {
        if( s.GetPySelf() != NULL )
            return bp::incref( s.GetPySelf() );
        else
            return bp::incref( bp::object( FrameHANDLE( (Frame *)&s) ).ptr() );
    }
};

struct handle_to_Frame
{
    handle_to_Frame()
    {
        bp::converter::registry::insert(
            &extract_Frame,
            bp::type_id< Frame >()
            );
    }
    
    static void* extract_Frame(PyObject* op)
    {
        PyBaseVGUIHandle &h = bp::extract< PyBaseVGUIHandle & >(op);
        return h.Get();
    }
};

typedef PyVGUIHandle<TextEntry> TextEntryHANDLE;

struct ptr_TextEntry_to_handle : bp::to_python_converter<TextEntry *, ptr_TextEntry_to_handle>
{
    static PyObject* convert(TextEntry *s)
    {
        if( s )
        {
            if( s->GetPySelf() != NULL )
                return bp::incref( s->GetPySelf() ); 
            else
                return bp::incref( bp::object( TextEntryHANDLE( s ) ).ptr() );
        }
        else
        {
            return bp::incref(Py_None);
        }
    }
};

struct TextEntry_to_handle : bp::to_python_converter<TextEntry, TextEntry_to_handle>
{
    static PyObject* convert(const TextEntry &s)
    {
        if( s.GetPySelf() != NULL )
            return bp::incref( s.GetPySelf() );
        else
            return bp::incref( bp::object( TextEntryHANDLE( (TextEntry *)&s) ).ptr() );
    }
};

struct handle_to_TextEntry
{
    handle_to_TextEntry()
    {
        bp::converter::registry::insert(
            &extract_TextEntry,
            bp::type_id< TextEntry >()
            );
    }
    
    static void* extract_TextEntry(PyObject* op)
    {
        PyBaseVGUIHandle &h = bp::extract< PyBaseVGUIHandle & >(op);
        return h.Get();
    }
};

typedef PyVGUIHandle<ScrollBar> ScrollBarHANDLE;

struct ptr_ScrollBar_to_handle : bp::to_python_converter<ScrollBar *, ptr_ScrollBar_to_handle>
{
    static PyObject* convert(ScrollBar *s)
    {
        if( s )
        {
            if( s->GetPySelf() != NULL )
                return bp::incref( s->GetPySelf() ); 
            else
                return bp::incref( bp::object( ScrollBarHANDLE( s ) ).ptr() );
        }
        else
        {
            return bp::incref(Py_None);
        }
    }
};

struct ScrollBar_to_handle : bp::to_python_converter<ScrollBar, ScrollBar_to_handle>
{
    static PyObject* convert(const ScrollBar &s)
    {
        if( s.GetPySelf() != NULL )
            return bp::incref( s.GetPySelf() );
        else
            return bp::incref( bp::object( ScrollBarHANDLE( (ScrollBar *)&s) ).ptr() );
    }
};

struct handle_to_ScrollBar
{
    handle_to_ScrollBar()
    {
        bp::converter::registry::insert(
            &extract_ScrollBar,
            bp::type_id< ScrollBar >()
            );
    }
    
    static void* extract_ScrollBar(PyObject* op)
    {
        PyBaseVGUIHandle &h = bp::extract< PyBaseVGUIHandle & >(op);
        return h.Get();
    }
};

typedef PyVGUIHandle<ScrollBarSlider> ScrollBarSliderHANDLE;

struct ptr_ScrollBarSlider_to_handle : bp::to_python_converter<ScrollBarSlider *, ptr_ScrollBarSlider_to_handle>
{
    static PyObject* convert(ScrollBarSlider *s)
    {
        if( s )
        {
            if( s->GetPySelf() != NULL )
                return bp::incref( s->GetPySelf() ); 
            else
                return bp::incref( bp::object( ScrollBarSliderHANDLE( s ) ).ptr() );
        }
        else
        {
            return bp::incref(Py_None);
        }
    }
};

struct ScrollBarSlider_to_handle : bp::to_python_converter<ScrollBarSlider, ScrollBarSlider_to_handle>
{
    static PyObject* convert(const ScrollBarSlider &s)
    {
        if( s.GetPySelf() != NULL )
            return bp::incref( s.GetPySelf() );
        else
            return bp::incref( bp::object( ScrollBarSliderHANDLE( (ScrollBarSlider *)&s) ).ptr() );
    }
};

struct handle_to_ScrollBarSlider
{
    handle_to_ScrollBarSlider()
    {
        bp::converter::registry::insert(
            &extract_ScrollBarSlider,
            bp::type_id< ScrollBarSlider >()
            );
    }
    
    static void* extract_ScrollBarSlider(PyObject* op)
    {
        PyBaseVGUIHandle &h = bp::extract< PyBaseVGUIHandle & >(op);
        return h.Get();
    }
};

typedef PyVGUIHandle<RichText> RichTextHANDLE;

struct ptr_RichText_to_handle : bp::to_python_converter<RichText *, ptr_RichText_to_handle>
{
    static PyObject* convert(RichText *s)
    {
        if( s )
        {
            if( s->GetPySelf() != NULL )
                return bp::incref( s->GetPySelf() ); 
            else
                return bp::incref( bp::object( RichTextHANDLE( s ) ).ptr() );
        }
        else
        {
            return bp::incref(Py_None);
        }
    }
};

struct RichText_to_handle : bp::to_python_converter<RichText, RichText_to_handle>
{
    static PyObject* convert(const RichText &s)
    {
        if( s.GetPySelf() != NULL )
            return bp::incref( s.GetPySelf() );
        else
            return bp::incref( bp::object( RichTextHANDLE( (RichText *)&s) ).ptr() );
    }
};

struct handle_to_RichText
{
    handle_to_RichText()
    {
        bp::converter::registry::insert(
            &extract_RichText,
            bp::type_id< RichText >()
            );
    }
    
    static void* extract_RichText(PyObject* op)
    {
        PyBaseVGUIHandle &h = bp::extract< PyBaseVGUIHandle & >(op);
        return h.Get();
    }
};

BOOST_PYTHON_MODULE(_vguicontrols){
    _vguicontrols_register_enumerations();

    bp::docstring_options doc_options( true, true, false );

    register_IImage_class();

    register_Image_class();

    register_BitmapImage_class();

    register_AvatarImage_class();

    register_DeadPanel_class();

    register_PyBaseVGUIHandle_class();

    register_Panel_class();

    register_AnimationController_class();

    register_EditablePanel_class();

    register_Frame_class();

    register_IBorder_class();

    register_RichText_class();

    register_ScrollBar_class();

    register_ScrollBarSlider_class();

    register_TextEntry_class();

    { //::AnimationControllerHANDLE
            typedef bp::class_< AnimationControllerHANDLE, bp::bases<PyBaseVGUIHandle> > AnimationControllerHANDLE_exposer_t;
            AnimationControllerHANDLE_exposer_t AnimationControllerHANDLE_exposer = AnimationControllerHANDLE_exposer_t( "AnimationControllerHANDLE", bp::init< >() );
            AnimationControllerHANDLE_exposer.def( bp::init<  AnimationController * >(( bp::arg("val") )) );
            { //::AnimationControllerHANDLE::GetAttr
                typedef bp::object ( ::AnimationControllerHANDLE::*GetAttr_function_type )( const char * ) const;
                AnimationControllerHANDLE_exposer.def( 
                    "__getattr__"
                    , GetAttr_function_type( &::AnimationControllerHANDLE::GetAttr )
                );
            }
        }

    ptr_AnimationController_to_handle();

    AnimationController_to_handle();

    handle_to_AnimationController();

    { //::PanelHANDLE
            typedef bp::class_< PanelHANDLE, bp::bases<PyBaseVGUIHandle> > PanelHANDLE_exposer_t;
            PanelHANDLE_exposer_t PanelHANDLE_exposer = PanelHANDLE_exposer_t( "PanelHANDLE", bp::init< >() );
            PanelHANDLE_exposer.def( bp::init<  Panel * >(( bp::arg("val") )) );
            { //::PanelHANDLE::GetAttr
                typedef bp::object ( ::PanelHANDLE::*GetAttr_function_type )( const char * ) const;
                PanelHANDLE_exposer.def( 
                    "__getattr__"
                    , GetAttr_function_type( &::PanelHANDLE::GetAttr )
                );
            }
        }

    ptr_Panel_to_handle();

    Panel_to_handle();

    handle_to_Panel();

    { //::EditablePanelHANDLE
            typedef bp::class_< EditablePanelHANDLE, bp::bases<PyBaseVGUIHandle> > EditablePanelHANDLE_exposer_t;
            EditablePanelHANDLE_exposer_t EditablePanelHANDLE_exposer = EditablePanelHANDLE_exposer_t( "EditablePanelHANDLE", bp::init< >() );
            EditablePanelHANDLE_exposer.def( bp::init<  EditablePanel * >(( bp::arg("val") )) );
            { //::EditablePanelHANDLE::GetAttr
                typedef bp::object ( ::EditablePanelHANDLE::*GetAttr_function_type )( const char * ) const;
                EditablePanelHANDLE_exposer.def( 
                    "__getattr__"
                    , GetAttr_function_type( &::EditablePanelHANDLE::GetAttr )
                );
            }
        }

    ptr_EditablePanel_to_handle();

    EditablePanel_to_handle();

    handle_to_EditablePanel();

    { //::FrameHANDLE
            typedef bp::class_< FrameHANDLE, bp::bases<PyBaseVGUIHandle> > FrameHANDLE_exposer_t;
            FrameHANDLE_exposer_t FrameHANDLE_exposer = FrameHANDLE_exposer_t( "FrameHANDLE", bp::init< >() );
            FrameHANDLE_exposer.def( bp::init<  Frame * >(( bp::arg("val") )) );
            { //::FrameHANDLE::GetAttr
                typedef bp::object ( ::FrameHANDLE::*GetAttr_function_type )( const char * ) const;
                FrameHANDLE_exposer.def( 
                    "__getattr__"
                    , GetAttr_function_type( &::FrameHANDLE::GetAttr )
                );
            }
        }

    ptr_Frame_to_handle();

    Frame_to_handle();

    handle_to_Frame();

    { //::TextEntryHANDLE
            typedef bp::class_< TextEntryHANDLE, bp::bases<PyBaseVGUIHandle> > TextEntryHANDLE_exposer_t;
            TextEntryHANDLE_exposer_t TextEntryHANDLE_exposer = TextEntryHANDLE_exposer_t( "TextEntryHANDLE", bp::init< >() );
            TextEntryHANDLE_exposer.def( bp::init<  TextEntry * >(( bp::arg("val") )) );
            { //::TextEntryHANDLE::GetAttr
                typedef bp::object ( ::TextEntryHANDLE::*GetAttr_function_type )( const char * ) const;
                TextEntryHANDLE_exposer.def( 
                    "__getattr__"
                    , GetAttr_function_type( &::TextEntryHANDLE::GetAttr )
                );
            }
        }

    ptr_TextEntry_to_handle();

    TextEntry_to_handle();

    handle_to_TextEntry();

    { //::ScrollBarHANDLE
            typedef bp::class_< ScrollBarHANDLE, bp::bases<PyBaseVGUIHandle> > ScrollBarHANDLE_exposer_t;
            ScrollBarHANDLE_exposer_t ScrollBarHANDLE_exposer = ScrollBarHANDLE_exposer_t( "ScrollBarHANDLE", bp::init< >() );
            ScrollBarHANDLE_exposer.def( bp::init<  ScrollBar * >(( bp::arg("val") )) );
            { //::ScrollBarHANDLE::GetAttr
                typedef bp::object ( ::ScrollBarHANDLE::*GetAttr_function_type )( const char * ) const;
                ScrollBarHANDLE_exposer.def( 
                    "__getattr__"
                    , GetAttr_function_type( &::ScrollBarHANDLE::GetAttr )
                );
            }
        }

    ptr_ScrollBar_to_handle();

    ScrollBar_to_handle();

    handle_to_ScrollBar();

    { //::ScrollBarSliderHANDLE
            typedef bp::class_< ScrollBarSliderHANDLE, bp::bases<PyBaseVGUIHandle> > ScrollBarSliderHANDLE_exposer_t;
            ScrollBarSliderHANDLE_exposer_t ScrollBarSliderHANDLE_exposer = ScrollBarSliderHANDLE_exposer_t( "ScrollBarSliderHANDLE", bp::init< >() );
            ScrollBarSliderHANDLE_exposer.def( bp::init<  ScrollBarSlider * >(( bp::arg("val") )) );
            { //::ScrollBarSliderHANDLE::GetAttr
                typedef bp::object ( ::ScrollBarSliderHANDLE::*GetAttr_function_type )( const char * ) const;
                ScrollBarSliderHANDLE_exposer.def( 
                    "__getattr__"
                    , GetAttr_function_type( &::ScrollBarSliderHANDLE::GetAttr )
                );
            }
        }

    ptr_ScrollBarSlider_to_handle();

    ScrollBarSlider_to_handle();

    handle_to_ScrollBarSlider();

    { //::RichTextHANDLE
            typedef bp::class_< RichTextHANDLE, bp::bases<PyBaseVGUIHandle> > RichTextHANDLE_exposer_t;
            RichTextHANDLE_exposer_t RichTextHANDLE_exposer = RichTextHANDLE_exposer_t( "RichTextHANDLE", bp::init< >() );
            RichTextHANDLE_exposer.def( bp::init<  RichText * >(( bp::arg("val") )) );
            { //::RichTextHANDLE::GetAttr
                typedef bp::object ( ::RichTextHANDLE::*GetAttr_function_type )( const char * ) const;
                RichTextHANDLE_exposer.def( 
                    "__getattr__"
                    , GetAttr_function_type( &::RichTextHANDLE::GetAttr )
                );
            }
        }

    ptr_RichText_to_handle();

    RichText_to_handle();

    handle_to_RichText();

    register_TextImage_class();
}
